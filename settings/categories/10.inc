[Rainmeter]
OnRefreshAction=[!CommandMeasure Crafter [#VisualizerType]]

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
LeftMouseUpAction=[!WriteKeyValue Variables Preset "Original" "#@#\Variables\Main.inc"][!Refresh]
[RadioString0Original]
Meter=String
Text=Original
Y=-1r
Padding=0,0,[#s_VariableXPadding],[#s_ValueYPadding]
MeterStyle=VarStringValue | VarColorString | RightPanel
InlinePattern=^$
InlineSetting=Weight | 600
LeftMouseUpAction=[!WriteKeyValue Variables Preset "Original" "#@#\Variables\Main.inc"][!Refresh]
 
[MeasureRadio0Geass]
Measure=String
String=[#Preset]
IfMatch=^Geass$
IfMatchAction=[!SetOption RadioString0Geass InlinePattern ".*"][!SetOption RadioButton0Geass Text "[\xECCB]"][!Update][!Redraw]
[RadioButton0Geass]
Meter=String
Text=[\xECCA]
FontSize=15
MeterStyle=VariableIcon | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables Preset "Geass" "#@#\Variables\Main.inc"][!WriteKeyValue Variables VisualizerType "Round" "#@#\Variables\Main.inc"][!Refresh]
[RadioString0Geass]
Meter=String
Text=Geass
Y=-1r
Padding=0,0,[#s_VariableXPadding],[#s_ValueYPadding]
MeterStyle=VarStringValue | VarColorString | RightPanel
InlinePattern=^$
InlineSetting=Weight | 600
LeftMouseUpAction=[!WriteKeyValue Variables Preset "Geass" "#@#\Variables\Main.inc"][!Refresh]
 
[MeasureRadio0Coming soon]
Measure=String
String=[#Preset]
IfMatch=^Coming soon$
IfMatchAction=[!SetOption RadioString0Coming soon InlinePattern ".*"][!SetOption RadioButton0Coming soon Text "[\xECCB]"][!Update][!Redraw]
[RadioButton0Coming soon]
Meter=String
FontColor=303030
Text=[\xECCA]
FontSize=15
MeterStyle=VariableIcon | RightPanel
;LeftMouseUpAction=[!WriteKeyValue Variables Preset "Coming soon" "#@#\Variables\Main.inc"][!Refresh]
[RadioString0Coming soon]
Meter=String
Text=Coming soon
FontColor=303030
Y=-1r
Padding=0,0,[#s_VariableXPadding],[#s_ValueYPadding]
MouseOverAction=[]
MouseLeaveAction=[]
MeterStyle=VarStringValue | VarColorString | RightPanel
InlinePattern=^$
InlineSetting=Weight | 600
DynamicVariables=1
;LeftMouseUpAction=[!WriteKeyValue Variables Preset "Coming soon" "#@#\Variables\Main.inc"][!Refresh]

[PreviewImage]
Meter=Image
X=-20r
Y=10R
H=198
W=352
ImageName=#@#Images\[#Preset]
PreserveAspectRatio=2
SolidColor=000000
DynamicVariables=1
MeterStyle=RightPanel