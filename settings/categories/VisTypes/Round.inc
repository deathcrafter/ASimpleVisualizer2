 [VariableIcon1]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle1]
Meter=String
Text=BarCount 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription1]
Meter=String
Text=Number of Bars
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue1]
Meter=String
Text=[#Bands]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText1" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText1]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=[#s_FontColor]
FontFace=[#s_FontFace]
FontSize=[#s_InputTextFontSize]
Disabled=
X=([VariableValue1:X])
Y=([VariableValue1:Y] + [#s_ValueYPadding])
H=[VariableValue1:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#Bands]
Command1=[!SetVariable "Bands" "$UserInput$"][!WriteKeyValue "Variables" "Bands" "[#Bands]" "#@#Variables\[#Preset]\Round.inc"][!UpdateMeter VariableValue1][!Redraw][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue1 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue1][!Redraw]
InputNumber=1

 [VariableIcon2]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle2]
Meter=String
Text=Radius
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription2]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue2]
Meter=String
Text=[#Radius]
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
DefaultValue=[#Radius]
Command1=[!SetVariable "Radius" "$UserInput$"][!WriteKeyValue "Variables" "Radius" "[#Radius]" "#@#Variables\[#Preset]\Round.inc"][!UpdateMeter VariableValue2][!Redraw][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue2 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue2][!Redraw]
InputNumber=1

 [VariableIcon3]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle3]
Meter=String
Text=Start Angle 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription3]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue3]
Meter=String
Text=[#StartAngle]
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
DefaultValue=[#StartAngle]
Command1=[!SetVariable "StartAngle" "$UserInput$"][!WriteKeyValue "Variables" "StartAngle" "[#StartAngle]" "#@#Variables\[#Preset]\Round.inc"][!UpdateMeter VariableValue3][!Redraw][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue3 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue3][!Redraw]
InputNumber=1

 [VariableIcon4]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle4]
Meter=String
Text=Total Angle 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription4]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue4]
Meter=String
Text=[#TotalAngle]
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
DefaultValue=[#TotalAngle]
Command1=[!SetVariable "TotalAngle" "$UserInput$"][!WriteKeyValue "Variables" "TotalAngle" "[#TotalAngle]" "#@#Variables\[#Preset]\Round.inc"][!UpdateMeter VariableValue4][!Redraw][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue4 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue4][!Redraw]
InputNumber=1

 [VariableIcon5]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle5]
Meter=String
Text=Height 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription5]
Meter=String
Text=Height of Bars
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue5]
Meter=String
Text=[#Height]
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
DefaultValue=[#Height]
Command1=[!SetVariable "Height" "$UserInput$"][!WriteKeyValue "Variables" "Height" "[#Height]" "#@#Variables\[#Preset]\Round.inc"][!UpdateMeter VariableValue5][!Redraw][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue5 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue5][!Redraw]
InputNumber=1

 [VariableIcon6]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle6]
Meter=String
Text=Bar Width 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription6]
Meter=String
Text=Width of individual Bars
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue6]
Meter=String
Text=[#BarWidth]
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
DefaultValue=[#BarWidth]
Command1=[!SetVariable "BarWidth" "$UserInput$"][!WriteKeyValue "Variables" "BarWidth" "[#BarWidth]" "#@#Variables\[#Preset]\Round.inc"][!UpdateMeter VariableValue6][!Redraw][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue6 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue6][!Redraw]
InputNumber=1

 [VariableIcon7]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle7]
Meter=String
Text=Levitation 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription7]
Meter=String
Text=Amount that bars will float up
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue7]
Meter=String
Text=[#Levitate]
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
DefaultValue=[#Levitate]
Command1=[!SetVariable "Levitate" "$UserInput$"][!WriteKeyValue "Variables" "Levitate" "[#Levitate]" "#@#Variables\[#Preset]\Round.inc"][!UpdateMeter VariableValue7][!Redraw][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue7 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue7][!Redraw]
InputNumber=1

 

[VariableIcon8]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle8]
Meter=String
Text=StartCap 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription8]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=

 
[MeasureRadio8Round]
Measure=String
String=[#StartCap]
DynamicVariables=1
IfMatch=^Round$
IfMatchAction=[!SetOption RadioString8Round InlinePattern ".*"][!SetOption RadioButton8Round Text "[\xECCB]"][!Update][!Redraw]
IfNotMatchAction=[!SetOption RadioString8Round InlinePattern "^$"][!SetOption RadioButton8Round Text "[\xECCA]"][!Update][!Redraw]
[RadioButton8Round]
Meter=String
Text=[\xECCA]
FontSize=15
MeterStyle=VariableIcon | RightPanel
DynamicVariables=1
LeftMouseUpAction=[!SetVariable StartCap "Round"][!WriteKeyValue Variables StartCap "Round" "#@#Variables\[#Preset]\Round.inc"][!Update][!Redraw][#s_OnChangeAction]
[RadioString8Round]
Meter=String
Text=Round
Y=-1r
Padding=0,0,[#s_VariableXPadding],[#s_ValueYPadding]
MeterStyle=VarStringValue | VarColorString | RightPanel
InlinePattern=^$
InlineSetting=Weight | 600
LeftMouseUpAction=[!SetVariable StartCap "Round"][!WriteKeyValue Variables StartCap "Round" "#@#Variables\[#Preset]\Round.inc"][!Update][!Redraw][#s_OnChangeAction]
 
[MeasureRadio8Triangle]
Measure=String
String=[#StartCap]
DynamicVariables=1
IfMatch=^Triangle$
IfMatchAction=[!SetOption RadioString8Triangle InlinePattern ".*"][!SetOption RadioButton8Triangle Text "[\xECCB]"][!Update][!Redraw]
IfNotMatchAction=[!SetOption RadioString8Triangle InlinePattern "^$"][!SetOption RadioButton8Triangle Text "[\xECCA]"][!Update][!Redraw]
[RadioButton8Triangle]
Meter=String
Text=[\xECCA]
FontSize=15
MeterStyle=VariableIcon | RightPanel
DynamicVariables=1
LeftMouseUpAction=[!SetVariable StartCap "Triangle"][!WriteKeyValue Variables StartCap "Triangle" "#@#Variables\[#Preset]\Round.inc"][!Update][!Redraw][#s_OnChangeAction]
[RadioString8Triangle]
Meter=String
Text=Triangle
Y=-1r
Padding=0,0,[#s_VariableXPadding],[#s_ValueYPadding]
MeterStyle=VarStringValue | VarColorString | RightPanel
InlinePattern=^$
InlineSetting=Weight | 600
LeftMouseUpAction=[!SetVariable StartCap "Triangle"][!WriteKeyValue Variables StartCap "Triangle" "#@#Variables\[#Preset]\Round.inc"][!Update][!Redraw][#s_OnChangeAction]
 
[MeasureRadio8Square]
Measure=String
String=[#StartCap]
DynamicVariables=1
IfMatch=^Square$
IfMatchAction=[!SetOption RadioString8Square InlinePattern ".*"][!SetOption RadioButton8Square Text "[\xECCB]"][!Update][!Redraw]
IfNotMatchAction=[!SetOption RadioString8Square InlinePattern "^$"][!SetOption RadioButton8Square Text "[\xECCA]"][!Update][!Redraw]
[RadioButton8Square]
Meter=String
Text=[\xECCA]
FontSize=15
MeterStyle=VariableIcon | RightPanel
DynamicVariables=1
LeftMouseUpAction=[!SetVariable StartCap "Square"][!WriteKeyValue Variables StartCap "Square" "#@#Variables\[#Preset]\Round.inc"][!Update][!Redraw][#s_OnChangeAction]
[RadioString8Square]
Meter=String
Text=Square
Y=-1r
Padding=0,0,[#s_VariableXPadding],[#s_ValueYPadding]
MeterStyle=VarStringValue | VarColorString | RightPanel
InlinePattern=^$
InlineSetting=Weight | 600
LeftMouseUpAction=[!SetVariable StartCap "Square"][!WriteKeyValue Variables StartCap "Square" "#@#Variables\[#Preset]\Round.inc"][!Update][!Redraw][#s_OnChangeAction]
 
[MeasureRadio8Flat]
Measure=String
String=[#StartCap]
DynamicVariables=1
IfMatch=^Flat$
IfMatchAction=[!SetOption RadioString8Flat InlinePattern ".*"][!SetOption RadioButton8Flat Text "[\xECCB]"][!Update][!Redraw]
IfNotMatchAction=[!SetOption RadioString8Flat InlinePattern "^$"][!SetOption RadioButton8Flat Text "[\xECCA]"][!Update][!Redraw]
[RadioButton8Flat]
Meter=String
Text=[\xECCA]
FontSize=15
MeterStyle=VariableIcon | RightPanel
DynamicVariables=1
LeftMouseUpAction=[!SetVariable StartCap "Flat"][!WriteKeyValue Variables StartCap "Flat" "#@#Variables\[#Preset]\Round.inc"][!Update][!Redraw][#s_OnChangeAction]
[RadioString8Flat]
Meter=String
Text=Flat
Y=-1r
Padding=0,0,[#s_VariableXPadding],[#s_ValueYPadding]
MeterStyle=VarStringValue | VarColorString | RightPanel
InlinePattern=^$
InlineSetting=Weight | 600
LeftMouseUpAction=[!SetVariable StartCap "Flat"][!WriteKeyValue Variables StartCap "Flat" "#@#Variables\[#Preset]\Round.inc"][!Update][!Redraw][#s_OnChangeAction]
 

[VariableIcon9]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle9]
Meter=String
Text=EndCap 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription9]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=

 
[MeasureRadio9Round]
Measure=String
String=[#EndCap]
DynamicVariables=1
IfMatch=^Round$
IfMatchAction=[!SetOption RadioString9Round InlinePattern ".*"][!SetOption RadioButton9Round Text "[\xECCB]"][!Update][!Redraw]
IfNotMatchAction=[!SetOption RadioString9Round InlinePattern "^$"][!SetOption RadioButton9Round Text "[\xECCA]"][!Update][!Redraw]
[RadioButton9Round]
Meter=String
Text=[\xECCA]
FontSize=15
MeterStyle=VariableIcon | RightPanel
DynamicVariables=1
LeftMouseUpAction=[!SetVariable EndCap "Round"][!WriteKeyValue Variables EndCap "Round" "#@#Variables\[#Preset]\Round.inc"][!Update][!Redraw][#s_OnChangeAction]
[RadioString9Round]
Meter=String
Text=Round
Y=-1r
Padding=0,0,[#s_VariableXPadding],[#s_ValueYPadding]
MeterStyle=VarStringValue | VarColorString | RightPanel
InlinePattern=^$
InlineSetting=Weight | 600
LeftMouseUpAction=[!SetVariable EndCap "Round"][!WriteKeyValue Variables EndCap "Round" "#@#Variables\[#Preset]\Round.inc"][!Update][!Redraw][#s_OnChangeAction]
 
[MeasureRadio9Triangle]
Measure=String
String=[#EndCap]
DynamicVariables=1
IfMatch=^Triangle$
IfMatchAction=[!SetOption RadioString9Triangle InlinePattern ".*"][!SetOption RadioButton9Triangle Text "[\xECCB]"][!Update][!Redraw]
IfNotMatchAction=[!SetOption RadioString9Triangle InlinePattern "^$"][!SetOption RadioButton9Triangle Text "[\xECCA]"][!Update][!Redraw]
[RadioButton9Triangle]
Meter=String
Text=[\xECCA]
FontSize=15
MeterStyle=VariableIcon | RightPanel
DynamicVariables=1
LeftMouseUpAction=[!SetVariable EndCap "Triangle"][!WriteKeyValue Variables EndCap "Triangle" "#@#Variables\[#Preset]\Round.inc"][!Update][!Redraw][#s_OnChangeAction]
[RadioString9Triangle]
Meter=String
Text=Triangle
Y=-1r
Padding=0,0,[#s_VariableXPadding],[#s_ValueYPadding]
MeterStyle=VarStringValue | VarColorString | RightPanel
InlinePattern=^$
InlineSetting=Weight | 600
LeftMouseUpAction=[!SetVariable EndCap "Triangle"][!WriteKeyValue Variables EndCap "Triangle" "#@#Variables\[#Preset]\Round.inc"][!Update][!Redraw][#s_OnChangeAction]
 
[MeasureRadio9Square]
Measure=String
String=[#EndCap]
DynamicVariables=1
IfMatch=^Square$
IfMatchAction=[!SetOption RadioString9Square InlinePattern ".*"][!SetOption RadioButton9Square Text "[\xECCB]"][!Update][!Redraw]
IfNotMatchAction=[!SetOption RadioString9Square InlinePattern "^$"][!SetOption RadioButton9Square Text "[\xECCA]"][!Update][!Redraw]
[RadioButton9Square]
Meter=String
Text=[\xECCA]
FontSize=15
MeterStyle=VariableIcon | RightPanel
DynamicVariables=1
LeftMouseUpAction=[!SetVariable EndCap "Square"][!WriteKeyValue Variables EndCap "Square" "#@#Variables\[#Preset]\Round.inc"][!Update][!Redraw][#s_OnChangeAction]
[RadioString9Square]
Meter=String
Text=Square
Y=-1r
Padding=0,0,[#s_VariableXPadding],[#s_ValueYPadding]
MeterStyle=VarStringValue | VarColorString | RightPanel
InlinePattern=^$
InlineSetting=Weight | 600
LeftMouseUpAction=[!SetVariable EndCap "Square"][!WriteKeyValue Variables EndCap "Square" "#@#Variables\[#Preset]\Round.inc"][!Update][!Redraw][#s_OnChangeAction]
 
[MeasureRadio9Flat]
Measure=String
String=[#EndCap]
DynamicVariables=1
IfMatch=^Flat$
IfMatchAction=[!SetOption RadioString9Flat InlinePattern ".*"][!SetOption RadioButton9Flat Text "[\xECCB]"][!Update][!Redraw]
IfNotMatchAction=[!SetOption RadioString9Flat InlinePattern "^$"][!SetOption RadioButton9Flat Text "[\xECCA]"][!Update][!Redraw]
[RadioButton9Flat]
Meter=String
Text=[\xECCA]
FontSize=15
MeterStyle=VariableIcon | RightPanel
DynamicVariables=1
LeftMouseUpAction=[!SetVariable EndCap "Flat"][!WriteKeyValue Variables EndCap "Flat" "#@#Variables\[#Preset]\Round.inc"][!Update][!Redraw][#s_OnChangeAction]
[RadioString9Flat]
Meter=String
Text=Flat
Y=-1r
Padding=0,0,[#s_VariableXPadding],[#s_ValueYPadding]
MeterStyle=VarStringValue | VarColorString | RightPanel
InlinePattern=^$
InlineSetting=Weight | 600
LeftMouseUpAction=[!SetVariable EndCap "Flat"][!WriteKeyValue Variables EndCap "Flat" "#@#Variables\[#Preset]\Round.inc"][!Update][!Redraw][#s_OnChangeAction]
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
Command1=[!SetVariable "MinimumHeight" "$UserInput$"][!WriteKeyValue "Variables" "MinimumHeight" "[#MinimumHeight]" "#@#Variables\[#Preset]\Round.inc"][!UpdateMeter VariableValue10][!Redraw][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue10 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue10][!Redraw]
InputNumber=1