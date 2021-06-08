function Update {
    if($(try {if(Get-AudioDevice -List){1}} catch {0}) -eq 1){return 1}else{return 0}
}
function GetAudioDevices {
    switch($(if($(try {if(Get-AudioDevice -List){1}} catch {0}) -eq 1){1}else{0})) {
        '0' {
            $RmAPI.Log($profile)
            $RmAPI.Log('Building module directory')
            $moduleDirectory=$(if($("$env:OneDrive\Documents" | Get-ChildItem -Name) -contains "WindowsPowerShell"){"$env:OneDrive\Documents\WindowsPowershell\Modules"}else{"$($Home)\Documents\WindowsPowerShell\Modules"})
            $RmAPI.Log($moduleDirectory)
            New-Item -Path $moduleDirectory -Name "AudioDeviceCmdlets" -ItemType "directory" -Force
            $RmAPI.Log('Copying required files')
            Copy-Item "$($RmAPI.VariableStr('@'))Addons\AudioDeviceCmdlets.dll" "$moduleDirectory\AudioDeviceCmdlets\AudioDeviceCmdlets.dll"
            $RmAPI.Log('Installing module')
            Set-Location "$modulePath\AudioDeviceCmdlets"
            Get-ChildItem | Unblock-File
            $RmAPI.Log('Importing module')
            Import-Module .\AudioDeviceCmdlets.dll
            $RmAPI.Bang("[!WriteKeyValue Variables InstalledState Installed `"$($RmAPI.VariableStr('ROOTCONFIGPATH'))settings\categories\7.inc`"]")
            ListAudioDevices
            }
        '1' {
            $RmAPI.Bang("[!WriteKeyValue Variables InstalledState Installed `"$($RmAPI.VariableStr('ROOTCONFIGPATH'))settings\categories\7.inc`"]")
            ListAudioDevices
        }
    }
}
function ListAudioDevices {
    $a=Get-AudioDevice -List
    $device=@"

[Variables]
DevScroll=0
[DevicesContainer]
Meter=Shape
X=55
Y=295
Shape=Rectangle 0,0,370,190,7 | Fill Color 0090F0 | StrokeWidth 0
MouseScrollDownAction=[!SetVariable DevScroll "(Clamp([#DevScroll]+15, 0, (Max([Scroller]-172,0))))"][!Log Down][!Update][!Redraw]
MouseScrollUpAction=[!SetVariable DevScroll "(Clamp([#DevScroll]-15, 0, (Max([Scroller]-172,0))))"][!Log Up][!Update][!Redraw]
Group=DeviceList
Hidden=1
[DevicesBackground]
Meter=Shape
Shape=Rectangle 0,0,370,190,7 | Fill Color 81FCFDFF | StrokeWidth 0
Container=DevicesContainer
Group=DeviceList
Hidden=1
[DeviceStringStyle]
X=r
Y=3R
W=342
FontFace=Segoe UI Semibold
FontSize=11
FontColor=000000
AntiAlias=1
ClipString=1
Container=DevicesContainer
Group=DeviceList
Hidden=1
[Output]
Meter=String
Text=Output
X=14
Y=(14-[#DevScroll])
FontFace=Segoe UI Bold
FontSize=12
FontColor=303030
AntiAlias=1
DynamicVariables=1
Container=DevicesContainer
Group=DeviceList
Hidden=1

"@
    $index=0
    $a.GetEnumerator() | ForEach-Object {
        if ($_.Type -eq 'PlayBack') {
            $device+=@"

[OutputDevice$index]
Meter=String
Text=$($_.Name)
MeterStyle=DeviceStringStyle
LeftMouseUpAction=[!WriteKeyValue Variables DeviceName `"$($_.Name)`" `"#@#Variables\Main.inc`"][!WriteKeyValue Variables DeviceID `"$($_.ID)`" `"#@#Variables\Main.inc`"][!Refresh]
"@
        }
    $index++
    }
    $device+=@"

[HR]
Meter=Image
X=20
Y=8R
H=2
W=330
SolidColor=202020
Container=DevicesContainer
Group=DeviceList
Hidden=1
[Input]
Meter=String
Text=Input
X=14
Y=6R
FontFace=Segoe UI Bold
FontSize=12
FontColor=303030
AntiAlias=1
Container=DevicesContainer
Group=DeviceList
Hidden=1

"@
    $index=0
    $a.GetEnumerator() | ForEach-Object {
        if ($_.Type -eq 'Recording') {
            $device+=@"

[InputDevice$index]
Meter=String
Text=$($_.Name)
MeterStyle=DeviceStringStyle
LeftMouseUpAction=[!WriteKeyValue Variables DeviceName `"$($_.Name)`" `"#@#Variables\Main.inc`"][!WriteKeyValue Variables DeviceID `"$($_.ID)`" `"#@#Variables\Main.inc`"][!Refresh]
"@
        }
    $index++
    }
    $device+=@"

[DevLastItem]
Meter=String
Y=([#DevScroll])R
DynamicVariables=1
Container=DevicesContainer
Group=DeviceList
Hidden=1
[Scroller]
Measure=Calc
DynamicVariables=1
Formula=([DevLastItem:Y]-[DevicesContainer:Y])
IfBelowValue=172
IfBelowAction=[!DisableMouseAction DevicesContainer "MouseScrollDownAction|MouseScrollUpAction"]

"@
    $device | Out-File -FilePath $($RmAPI.VariableStr('ROOTCONFIGPATH') + 'settings\categories\DeviceID\DeviceList.inc')
    $RmAPI.Bang('!Refresh')
}