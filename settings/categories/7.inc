[PRM]
Measure=Plugin
Plugin=PowershellRM
ScriptFile=#@#Scripts\GetAudioDevices.ps1

[FirstRightPanel]
Meter=String
Text=First
FontColor=0,0,0,0
MeterStyle=FirstItem | RightPanel
Y=[#s_ScrollRightPanel]
[CategoryIcon7]
Meter=String
Text=[\xE95B]
MeterStyle=CategoryIcon | RightPanel

[Title7]
Meter=String
Text=Device 
MeterStyle=CategoryTitle | RightPanel
W=([#s_RightPanelW] - [CategoryIcon7:W])

[CategoryDescription7]
Meter=String
Text=Select a specific device(for advanced users) 
MeterStyle=VarDescription | ThickDescription | RightPanel

[CategoryTitleSeparator7]
Meter=Image
MeterStyle=CategoryTitleSeparator | RightPanel

[VariableIcon6]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle6]
Meter=String
Text=Audio Source 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription6]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=

 
[MeasureRadio6Output]
Measure=String
String=[#AnalyzerPort]
DynamicVariables=1
IfMatch=^DefaultOutput$
IfMatchAction=[!SetOption RadioString6Output InlinePattern ".*"][!SetOption RadioButton6Output Text "[\xECCB]"][!Update][!Redraw]
IfNotMatchAction=[!SetOption RadioString6Output InlinePattern "^$"][!SetOption RadioButton6Output Text "[\xECCA]"][!Update][!Redraw]
[RadioButton6Output]
Meter=String
Text=[\xECCA]
FontSize=15
MeterStyle=VariableIcon | RightPanel
DynamicVariables=1
LeftMouseUpAction=[!SetVariable AnalyzerPort "DefaultOutput"][!WriteKeyValue Variables AnalyzerPort "DefaultOutput" "#@#Variables\Main.inc"][!Update][!Redraw][!Refresh "[#ROOTCONFIG]"]
[RadioString6Output]
Meter=String
Text=Output
Y=-1r
Padding=0,0,[#s_VariableXPadding],[#s_ValueYPadding]
MeterStyle=VarStringValue | VarColorString | RightPanel
InlinePattern=^$
InlineSetting=Weight | 600
LeftMouseUpAction=[!SetVariable AnalyzerPort "DefaultOutput"][!WriteKeyValue Variables AnalyzerPort "DefaultOutput" "#@#Variables\Main.inc"][!Update][!Redraw][!Refresh "[#ROOTCONFIG]"]
 
[MeasureRadio6Input]
Measure=String
String=[#AnalyzerPort]
DynamicVariables=1
IfMatch=^DefaultInput$
IfMatchAction=[!SetOption RadioString6Input InlinePattern ".*"][!SetOption RadioButton6Input Text "[\xECCB]"][!Update][!Redraw]
IfNotMatchAction=[!SetOption RadioString6Input InlinePattern "^$"][!SetOption RadioButton6Input Text "[\xECCA]"][!Update][!Redraw]
[RadioButton6Input]
Meter=String
Text=[\xECCA]
FontSize=15
MeterStyle=VariableIcon | RightPanel
DynamicVariables=1
LeftMouseUpAction=[!SetVariable AnalyzerPort "DefaultInput"][!WriteKeyValue Variables AnalyzerPort "DefaultInput" "#@#Variables\Main.inc"][!Update][!Redraw][!Refresh "[#ROOTCONFIG]"]
[RadioString6Input]
Meter=String
Text=Input
Y=-1r
Padding=0,0,[#s_VariableXPadding],[#s_ValueYPadding]
MeterStyle=VarStringValue | VarColorString | RightPanel
InlinePattern=^$
InlineSetting=Weight | 600
LeftMouseUpAction=[!SetVariable AnalyzerPort "DefaultInput"][!WriteKeyValue Variables AnalyzerPort "DefaultInput" "#@#Variables\Main.inc"][!Update][!Redraw][!Refresh "[#ROOTCONFIG]"]
 
[MeasureRadio6DeviceID]
Measure=String
String=[#AnalyzerPort]
DynamicVariables=1
IfMatch=^ID: [#DeviceID]$
IfMatchAction=[!SetOption RadioString6DeviceID InlinePattern ".*"][!SetOption RadioButton6DeviceID Text "[\xECCB]"][!Update][!Redraw]
IfNotMatchAction=[!SetOption RadioString6DeviceID InlinePattern "^$"][!SetOption RadioButton6DeviceID Text "[\xECCA]"][!Update][!Redraw]
[RadioButton6DeviceID]
Meter=String
Text=[\xECCA]
FontSize=15
MeterStyle=VariableIcon | RightPanel
DynamicVariables=1
LeftMouseUpAction=[!SetVariable AnalyzerPort "ID: [#DeviceID]"][!WriteKeyValue Variables AnalyzerPort "ID: [#*DeviceID*]" "#@#Variables\Main.inc"][!Update][!Redraw][!Refresh "[#ROOTCONFIG]"]
[RadioString6DeviceID]
Meter=String
Text=Specific Device
Y=-1r
Padding=0,0,[#s_VariableXPadding],[#s_ValueYPadding]
MeterStyle=VarStringValue | VarColorString | RightPanel
InlinePattern=^$
InlineSetting=Weight | 600
LeftMouseUpAction=[!SetVariable AnalyzerPort "ID: [#DeviceID]"][!WriteKeyValue Variables AnalyzerPort "ID: [#*DeviceID*]" "#@#Variables\Main.inc"][!Update][!Redraw][!Refresh "[#ROOTCONFIG]"]

@includeDeviceID=DeviceID\Installed.inc

[LastRightPanel]
Meter=String
Text=Last
FontColor=255,0,0,0
MeterStyle=LastItem | RightPanel

[ScrollDownRightPanel]
Measure=Calc
Formula=[#s_ScrollRightPanel] - [#s_ScrollSpeed]
IfCondition=([LastRightPanel:Y] > [#s_ScrollTreshold])
IfTrueAction=[!SetVariable "s_ScrollRightPanel" "[&ScrollDownRightPanel]"][!DisableMeasure "ScrollDownRightPanel"][!Update][!Redraw]
IfFalseAction=[!DisableMeasure "ScrollDownRightPanel"]
IfConditionMode=1
Disabled=1
DynamicVariables=1

[ScrollUpRightPanel]
Measure=Calc
Formula=[#s_ScrollRightPanel] + [#s_ScrollSpeed]
IfCondition=([FirstRightPanel:Y] < 0)
IfTrueAction=[!SetVariable "s_ScrollRightPanel" "[&ScrollUpRightPanel]"][!DisableMeasure "ScrollUpRightPanel"][!Update][!Redraw]
IfFalseAction=[!DisableMeasure "ScrollUpRightPanel"]
IfConditionMode=1
Disabled=1
DynamicVariables=1


