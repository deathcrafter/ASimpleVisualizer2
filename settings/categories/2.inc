[FirstRightPanel]
Meter=String
Text=First
FontColor=0,0,0,0
MeterStyle=FirstItem | RightPanel
Y=[#s_ScrollRightPanel]
[CategoryIcon2]
Meter=String
Text=[\xF61F]
MeterStyle=CategoryIcon | RightPanel

[Title2]
Meter=String
Text=Visualizer 
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
Text=Visualizer Type 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription0]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=

 
[MeasureRadio0Bar]
Measure=String
String=[#VisualizerType]
IfMatch=^Bar$
IfMatchAction=[!SetOption RadioString0Bar InlinePattern ".*"][!SetOption RadioButton0Bar Text "[\xECCB]"][!Update][!Redraw]
[RadioButton0Bar]
Meter=String
Text=[\xECCA]
FontSize=15
MeterStyle=VariableIcon | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables VisualizerType "Bar" "#@#\Variables\Main.inc"][#ConstChangeAction][!Refresh]
[RadioString0Bar]
Meter=String
Text=Bar
Y=-1r
Padding=0,0,[#s_VariableXPadding],[#s_ValueYPadding]
MeterStyle=VarStringValue | VarColorString | RightPanel
InlinePattern=^$
InlineSetting=Weight | 600
LeftMouseUpAction=[!WriteKeyValue Variables VisualizerType "Bar" "#@#\Variables\Main.inc"][#ConstChangeAction][!Refresh]
 
[MeasureRadio0Round]
Measure=String
String=[#VisualizerType]
IfMatch=^Round$
IfMatchAction=[!SetOption RadioString0Round InlinePattern ".*"][!SetOption RadioButton0Round Text "[\xECCB]"][!Update][!Redraw]
[RadioButton0Round]
Meter=String
Text=[\xECCA]
FontSize=15
MeterStyle=VariableIcon | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables VisualizerType "Round" "#@#\Variables\Main.inc"][#ConstChangeAction][!Refresh]
[RadioString0Round]
Meter=String
Text=Round
Y=-1r
Padding=0,0,[#s_VariableXPadding],[#s_ValueYPadding]
MeterStyle=VarStringValue | VarColorString | RightPanel
InlinePattern=^$
InlineSetting=Weight | 600
LeftMouseUpAction=[!WriteKeyValue Variables VisualizerType "Round" "#@#\Variables\Main.inc"][#ConstChangeAction][!Refresh]
 
[MeasureRadio0Vector]
Measure=String
String=[#VisualizerType]
IfMatch=^Vector$
IfMatchAction=[!SetOption RadioString0Vector InlinePattern ".*"][!SetOption RadioButton0Vector Text "[\xECCB]"][!Update][!Redraw]
[RadioButton0Vector]
Meter=String
Text=[\xECCA]
FontSize=15
MeterStyle=VariableIcon | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables VisualizerType "Vector" "#@#\Variables\Main.inc"][#ConstChangeAction][!Refresh]
[RadioString0Vector]
Meter=String
Text=Vector
Y=-1r
Padding=0,0,[#s_VariableXPadding],[#s_ValueYPadding]
MeterStyle=VarStringValue | VarColorString | RightPanel
InlinePattern=^$
InlineSetting=Weight | 600
DynamicVariables=1
LeftMouseUpAction=[!WriteKeyValue Variables VisualizerType "Vector" "#@#\Variables\Main.inc"][#ConstChangeAction][!Refresh]

@includeVisType=VisTypes\[#VisualizerType].inc

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


