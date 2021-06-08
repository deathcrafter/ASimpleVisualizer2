[VariableIcon1]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle1]
Meter=String
Text=Bar Type 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription1]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=

 
[MeasureRadio1Normal]
Measure=String
String=[#BarType]
DynamicVariables=1
IfMatch=^normal$
IfMatchAction=[!SetOption RadioString1Normal InlinePattern ".*"][!SetOption RadioButton1Normal Text "[\xECCB]"][!Update][!Redraw]
IfNotMatchAction=[!SetOption RadioString1Normal InlinePattern "^$"][!SetOption RadioButton1Normal Text "[\xECCA]"][!Update][!Redraw]
[RadioButton1Normal]
Meter=String
Text=[\xECCA]
FontSize=15
MeterStyle=VariableIcon | RightPanel
DynamicVariables=1
LeftMouseUpAction=[!SetVariable BarType "normal"][!WriteKeyValue Variables BarType "normal" "#@#\Variables\[#Preset]\Bar.inc"][!Refresh]
[RadioString1Normal]
Meter=String
Text=Normal
Y=-1r
Padding=0,0,[#s_VariableXPadding],[#s_ValueYPadding]
MeterStyle=VarStringValue | VarColorString | RightPanel
InlinePattern=^$
InlineSetting=Weight | 600
LeftMouseUpAction=[!SetVariable BarType "normal"][!WriteKeyValue Variables BarType "normal" "#@#\Variables\[#Preset]\Bar.inc"][!Refresh]
 
[MeasureRadio1MirrorX]
Measure=String
String=[#BarType]
DynamicVariables=1
IfMatch=^mirrorX$
IfMatchAction=[!SetOption RadioString1MirrorX InlinePattern ".*"][!SetOption RadioButton1MirrorX Text "[\xECCB]"][!Update][!Redraw]
IfNotMatchAction=[!SetOption RadioString1MirrorX InlinePattern "^$"][!SetOption RadioButton1MirrorX Text "[\xECCA]"][!Update][!Redraw]
[RadioButton1MirrorX]
Meter=String
Text=[\xECCA]
FontSize=15
MeterStyle=VariableIcon | RightPanel
DynamicVariables=1
LeftMouseUpAction=[!SetVariable BarType "mirrorX"][!WriteKeyValue Variables BarType "mirrorX" "#@#\Variables\[#Preset]\Bar.inc"][!Refresh]
[RadioString1MirrorX]
Meter=String
Text=MirrorX
Y=-1r
Padding=0,0,[#s_VariableXPadding],[#s_ValueYPadding]
MeterStyle=VarStringValue | VarColorString | RightPanel
InlinePattern=^$
InlineSetting=Weight | 600
LeftMouseUpAction=[!SetVariable BarType "mirrorX"][!WriteKeyValue Variables BarType "mirrorX" "#@#\Variables\[#Preset]\Bar.inc"][!Refresh]
 
[MeasureRadio1MirrorY]
Measure=String
String=[#BarType]
DynamicVariables=1
IfMatch=^mirrorY$
IfMatchAction=[!SetOption RadioString1MirrorY InlinePattern ".*"][!SetOption RadioButton1MirrorY Text "[\xECCB]"][!Update][!Redraw]
IfNotMatchAction=[!SetOption RadioString1MirrorY InlinePattern "^$"][!SetOption RadioButton1MirrorY Text "[\xECCA]"][!Update][!Redraw]
[RadioButton1MirrorY]
Meter=String
Text=[\xECCA]
FontSize=15
MeterStyle=VariableIcon | RightPanel
DynamicVariables=1
LeftMouseUpAction=[!SetVariable BarType "mirrorY"][!WriteKeyValue Variables BarType "mirrorY" "#@#\Variables\[#Preset]\Bar.inc"][!Refresh]
[RadioString1MirrorY]
Meter=String
Text=MirrorY
Y=-1r
Padding=0,0,[#s_VariableXPadding],[#s_ValueYPadding]
MeterStyle=VarStringValue | VarColorString | RightPanel
InlinePattern=^$
InlineSetting=Weight | 600
LeftMouseUpAction=[!SetVariable BarType "mirrorY"][!WriteKeyValue Variables BarType "mirrorY" "#@#\Variables\[#Preset]\Bar.inc"][!Refresh]
 
[MeasureRadio1MirrorXY]
Measure=String
String=[#BarType]
DynamicVariables=1
IfMatch=^mirrorXY$
IfMatchAction=[!SetOption RadioString1MirrorXY InlinePattern ".*"][!SetOption RadioButton1MirrorXY Text "[\xECCB]"][!Update][!Redraw]
IfNotMatchAction=[!SetOption RadioString1MirrorXY InlinePattern "^$"][!SetOption RadioButton1MirrorXY Text "[\xECCA]"][!Update][!Redraw]
[RadioButton1MirrorXY]
Meter=String
Text=[\xECCA]
FontSize=15
MeterStyle=VariableIcon | RightPanel
DynamicVariables=1
LeftMouseUpAction=[!SetVariable BarType "mirrorXY"][!WriteKeyValue Variables BarType "mirrorXY" "#@#\Variables\[#Preset]\Bar.inc"][!Refresh]
[RadioString1MirrorXY]
Meter=String
Text=MirrorXY
Y=-1r
Padding=0,0,[#s_VariableXPadding],[#s_ValueYPadding]
MeterStyle=VarStringValue | VarColorString | RightPanel
InlinePattern=^$
InlineSetting=Weight | 600
LeftMouseUpAction=[!SetVariable BarType "mirrorXY"][!WriteKeyValue Variables BarType "mirrorXY" "#@#\Variables\[#Preset]\Bar.inc"][!Refresh]
 
[MeasureRadio1Reflection]
Measure=String
String=[#BarType]
DynamicVariables=1
IfMatch=^reflection$
IfMatchAction=[!SetOption RadioString1Reflection InlinePattern ".*"][!SetOption RadioButton1Reflection Text "[\xECCB]"][!Update][!Redraw]
IfNotMatchAction=[!SetOption RadioString1Reflection InlinePattern "^$"][!SetOption RadioButton1Reflection Text "[\xECCA]"][!Update][!Redraw]
[RadioButton1Reflection]
Meter=String
Text=[\xECCA]
FontSize=15
MeterStyle=VariableIcon | RightPanel
DynamicVariables=1
LeftMouseUpAction=[!SetVariable BarType "reflection"][!WriteKeyValue Variables BarType "reflection" "#@#\Variables\[#Preset]\Bar.inc"][!Refresh]
[RadioString1Reflection]
Meter=String
Text=Reflection
Y=-1r
Padding=0,0,[#s_VariableXPadding],[#s_ValueYPadding]
MeterStyle=VarStringValue | VarColorString | RightPanel
InlinePattern=^$
InlineSetting=Weight | 600
LeftMouseUpAction=[!SetVariable BarType "reflection"][!WriteKeyValue Variables BarType "reflection" "#@#\Variables\[#Preset]\Bar.inc"][!Refresh]
 [VariableIcon2]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle2]
Meter=String
Text=BarCount 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription2]
Meter=String
Text=Number of Bars
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue2]
Meter=String
Text=[#Bands]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText2" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText2]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=[#s_FontColor]
FontFace=[#s_FontFace]
FontSize=[#s_InputTextFontSize]
Disabled=
X=([VariableValue2:X])
Y=([VariableValue2:Y] + [#s_ValueYPadding])
H=[VariableValue2:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#Bands]
Command1=[!SetVariable "Bands" "$UserInput$"][!WriteKeyValue "Variables" "Bands" "[#Bands]" "#@#\Variables\[#Preset]\Bar.inc"][!UpdateMeter VariableValue2][!Redraw][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue2 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue2][!Redraw]
InputNumber=1

 [VariableIcon3]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle3]
Meter=String
Text=Height 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription3]
Meter=String
Text=Height of Bars
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue3]
Meter=String
Text=[#Height]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText3" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText3]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=[#s_FontColor]
FontFace=[#s_FontFace]
FontSize=[#s_InputTextFontSize]
Disabled=
X=([VariableValue3:X])
Y=([VariableValue3:Y] + [#s_ValueYPadding])
H=[VariableValue3:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#Height]
Command1=[!SetVariable "Height" "$UserInput$"][!WriteKeyValue "Variables" "Height" "[#Height]" "#@#\Variables\[#Preset]\Bar.inc"][!UpdateMeter VariableValue3][!Redraw][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue3 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue3][!Redraw]
InputNumber=1

 [VariableIcon4]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle4]
Meter=String
Text=Bar Width 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription4]
Meter=String
Text=Width of individual Bars
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue4]
Meter=String
Text=[#BarWidth]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText4" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText4]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=[#s_FontColor]
FontFace=[#s_FontFace]
FontSize=[#s_InputTextFontSize]
Disabled=
X=([VariableValue4:X])
Y=([VariableValue4:Y] + [#s_ValueYPadding])
H=[VariableValue4:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#BarWidth]
Command1=[!SetVariable "BarWidth" "$UserInput$"][!WriteKeyValue "Variables" "BarWidth" "[#BarWidth]" "#@#\Variables\[#Preset]\Bar.inc"][!UpdateMeter VariableValue4][!Redraw][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue4 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue4][!Redraw]
InputNumber=1

 [VariableIcon5]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle5]
Meter=String
Text=Bar Gap 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription5]
Meter=String
Text=Gap between consecutive Bars
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue5]
Meter=String
Text=[#BarGap]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText5" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText5]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=[#s_FontColor]
FontFace=[#s_FontFace]
FontSize=[#s_InputTextFontSize]
Disabled=
X=([VariableValue5:X])
Y=([VariableValue5:Y] + [#s_ValueYPadding])
H=[VariableValue5:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#BarGap]
Command1=[!SetVariable "BarGap" "$UserInput$"][!WriteKeyValue "Variables" "BarGap" "[#BarGap]" "#@#\Variables\[#Preset]\Bar.inc"][!UpdateMeter VariableValue5][!Redraw][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue5 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue5][!Redraw]
InputNumber=1

 [VariableIcon6]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle6]
Meter=String
Text=StrokeWidth 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription6]
Meter=String
Text=Stroke width of Bars
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue6]
Meter=String
Text=[#BarStrokeWidth]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText6" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText6]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=[#s_FontColor]
FontFace=[#s_FontFace]
FontSize=[#s_InputTextFontSize]
Disabled=
X=([VariableValue6:X])
Y=([VariableValue6:Y] + [#s_ValueYPadding])
H=[VariableValue6:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#BarStrokeWidth]
Command1=[!SetVariable "BarStrokeWidth" "$UserInput$"][!WriteKeyValue "Variables" "BarStrokeWidth" "[#BarStrokeWidth]" "#@#\Variables\[#Preset]\Bar.inc"][!UpdateMeter VariableValue6][!Redraw][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue6 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue6][!Redraw]
InputNumber=1

 [VariableIcon7]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle7]
Meter=String
Text=Corner Rounding 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription7]
Meter=String
Text=How rounded the bars are
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue7]
Meter=String
Text=[#CornerRounding]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText7" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText7]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=[#s_FontColor]
FontFace=[#s_FontFace]
FontSize=[#s_InputTextFontSize]
Disabled=
X=([VariableValue7:X])
Y=([VariableValue7:Y] + [#s_ValueYPadding])
H=[VariableValue7:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#CornerRounding]
Command1=[!SetVariable "CornerRounding" "$UserInput$"][!WriteKeyValue "Variables" "CornerRounding" "[#CornerRounding]" "#@#\Variables\[#Preset]\Bar.inc"][!UpdateMeter VariableValue7][!Redraw][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue7 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue7][!Redraw]
InputNumber=1

 [VariableIcon8]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle8]
Meter=String
Text=Levitation 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription8]
Meter=String
Text=The amount bars go up while visualizing
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue8]
Meter=String
Text=[#Levitate]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText8" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText8]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=[#s_FontColor]
FontFace=[#s_FontFace]
FontSize=[#s_InputTextFontSize]
Disabled=
X=([VariableValue8:X])
Y=([VariableValue8:Y] + [#s_ValueYPadding])
H=[VariableValue8:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#Levitate]
Command1=[!SetVariable "Levitate" "$UserInput$"][!WriteKeyValue "Variables" "Levitate" "[#Levitate]" "#@#\Variables\[#Preset]\Bar.inc"][!UpdateMeter VariableValue8][!Redraw][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue8 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue8][!Redraw]
InputNumber=1

 [VariableIcon9]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle9]
Meter=String
Text=Angle 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription9]
Meter=String
Text=Angle of visualizer
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue9]
Meter=String
Text=[#Angle]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText9" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText9]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=[#s_FontColor]
FontFace=[#s_FontFace]
FontSize=[#s_InputTextFontSize]
Disabled=
X=([VariableValue9:X])
Y=([VariableValue9:Y] + [#s_ValueYPadding])
H=[VariableValue9:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#Angle]
Command1=[!SetVariable "Angle" "$UserInput$"][!WriteKeyValue "Variables" "Angle" "[#Angle]" "#@#\Variables\[#Preset]\Bar.inc"][!UpdateMeter VariableValue9][!Redraw][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue9 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue9][!Redraw]
InputNumber=1

 [VariableIcon10]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle10]
Meter=String
Text=Minimum Height 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription10]
Meter=String
Text=Minimun height of Bars
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue10]
Meter=String
Text=[#MinimumHeight]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText10" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText10]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=[#s_FontColor]
FontFace=[#s_FontFace]
FontSize=[#s_InputTextFontSize]
Disabled=
X=([VariableValue10:X])
Y=([VariableValue10:Y] + [#s_ValueYPadding])
H=[VariableValue10:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#MinimumHeight]
Command1=[!SetVariable "MinimumHeight" "$UserInput$"][!WriteKeyValue "Variables" "MinimumHeight" "[#MinimumHeight]" "#@#\Variables\[#Preset]\Bar.inc"][!UpdateMeter VariableValue10][!Redraw][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue10 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue10][!Redraw]
InputNumber=1