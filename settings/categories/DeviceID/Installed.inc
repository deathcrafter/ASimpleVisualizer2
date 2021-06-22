[DeviceIDString]
Measure=String
String=[#DeviceID]
Substitute="":"None"

[DeviceNameString]
Measure=String
String=[#DeviceName]
Substitute="":"None"

[MouseX]
Measure=Plugin
Plugin=MouseXY
Dimension=X
MaxValue=#SCREENAREAWIDTH#
Group=Mouse

[MouseY]
Measure=Plugin
Plugin=MouseXY
Dimension=Y
MaxValue=#SCREENAREAHEIGHT#
Group=Mouse

[VariableIcon0]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle0]
Meter=String
Text=Selected Device
MeterStyle=VarTitle | RightPanel
[VariableIcon0X]
Meter=String
X=-80R
Y=8r
FontSize=12
Text=[\xE72C]
MeterStyle=VariableIcon | RightPanel
Hidden=
LeftMouseUpAction=[!CommandMeasure PRM ListAudioDevices]
[VariableDescription0]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableVariableValue0]
Meter=String
Text=[&DeviceNameString]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!ToggleMeterGroup DeviceList][!Update][!Redraw]
Hidden=

[VariableIcon1]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle1]
Meter=String
Text=Selected DeviceID
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription1]
Meter=String
Text=Click to copy to clipboard
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableVariableValue1]
Meter=String
Text=[&DeviceIDString]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!SetClip [#DeviceID]]
Hidden=

@includeDeviceList=DeviceList.inc