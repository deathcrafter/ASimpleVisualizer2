[FirstRightPanel]
Meter=String
Text=First
FontColor=0,0,0,0
MeterStyle=FirstItem | RightPanel
Y=[#s_ScrollRightPanel]
[CategoryIcon2]
Meter=String
Text=[\xE74C]
MeterStyle=CategoryIcon | RightPanel

[Title2]
Meter=String
Text=Presets
MeterStyle=CategoryTitle | RightPanel
W=([#s_RightPanelW] - [CategoryIcon2:W])

[CategoryDescription2]
Meter=String
Text=
MeterStyle=VarDescription | ThickDescription | RightPanel

[CategoryTitleSeparator2]
Meter=Image
MeterStyle=CategoryTitleSeparator | RightPanel

 

[VariableIcon0]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle0]
Meter=String
Text=Preset
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription0]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=

 
[MeasureRadio0Original]
Measure=String
String=[#Preset]
IfMatch=^Original$
IfMatchAction=[!SetOption RadioString0Original InlinePattern ".*"][!SetOption RadioButton0Original Text "[\xECCB]"][!Update][!Redraw]
[RadioButton0Original]
Meter=String
Text=[\xECCA]
FontSize=15
MeterStyle=VariableIcon | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables Preset "Original" "#@#\Variables\Main.inc"][#ConstChangeAction][!Refresh]
[RadioString0Original]
Meter=String
Text=Original
Y=-1r
Padding=0,0,[#s_VariableXPadding],[#s_ValueYPadding]
MeterStyle=VarStringValue | VarColorString | RightPanel
InlinePattern=^$
InlineSetting=Weight | 600
LeftMouseUpAction=[!WriteKeyValue Variables Preset "Original" "#@#\Variables\Main.inc"][#ConstChangeAction][!Refresh]
 
[MeasureRadio0Boxes]
Measure=String
String=[#Preset]
IfMatch=^Boxes$
IfMatchAction=[!SetOption RadioString0Boxes InlinePattern ".*"][!SetOption RadioButton0Boxes Text "[\xECCB]"][!Update][!Redraw]
[RadioButton0Boxes]
Meter=String
Text=[\xECCA]
FontSize=15
MeterStyle=VariableIcon | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables Preset "Boxes" "#@#\Variables\Main.inc"][!WriteKeyValue Variables VisualizerType "Bar" "#@#\Variables\Main.inc"][#ConstChangeAction][!Refresh]
[RadioString0Boxes]
Meter=String
Text=Boxes
Y=-1r
Padding=0,0,[#s_VariableXPadding],[#s_ValueYPadding]
MeterStyle=VarStringValue | VarColorString | RightPanel
InlinePattern=^$
InlineSetting=Weight | 600
LeftMouseUpAction=[!WriteKeyValue Variables Preset "Boxes" "#@#\Variables\Main.inc"][!WriteKeyValue Variables VisualizerType "Bar" "#@#\Variables\Main.inc"][#ConstChangeAction][!Refresh]
 
[MeasureRadio0VectorBar]
Measure=String
String=[#Preset]
IfMatch=^VectorBar$
IfMatchAction=[!SetOption RadioString0VectorBar InlinePattern ".*"][!SetOption RadioButton0VectorBar Text "[\xECCB]"][!Update][!Redraw]
[RadioButton0VectorBar]
Meter=String
FontColor=303030
Text=[\xECCA]
FontSize=15
MeterStyle=VariableIcon | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables Preset "VectorBar" "#@#\Variables\Main.inc"][!WriteKeyValue Variables VisualizerType "Vector" "#@#\Variables\Main.inc"][#ConstChangeAction][!Refresh]
[RadioString0VectorBar]
Meter=String
Text=VectorBar
FontColor=303030
Y=-1r
Padding=0,0,[#s_VariableXPadding],[#s_ValueYPadding]
MouseOverAction=[]
MouseLeaveAction=[]
MeterStyle=VarStringValue | VarColorString | RightPanel
InlinePattern=^$
InlineSetting=Weight | 600
DynamicVariables=1
LeftMouseUpAction=[!WriteKeyValue Variables Preset "VectorBar" "#@#\Variables\Main.inc"][!WriteKeyValue Variables VisualizerType "Vector" "#@#\Variables\Main.inc"][#ConstChangeAction][!Refresh]

[PreviewImage]
Meter=Image
X=-20r
Y=10R
H=198
W=352
ImageName=#@#Images\[#Preset]
PreserveAspectRatio=1
SolidColor=00000030
DynamicVariables=1
MeterStyle=RightPanel

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