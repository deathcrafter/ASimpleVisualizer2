 [VariableIcon1]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle1]
Meter=String
Text=LayerCount
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription1]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue1]
Meter=String
Text=[#LayerCount]
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
DefaultValue=[#LayerCount]
Command1=[!SetVariable "LayerCount" "$UserInput$"][!WriteKeyValue "Variables" "LayerCount" "[#LayerCount]" "#SKINSPATH#ASimpleVisualizer2\@Resources\Variables\Original\Vector.inc"][!UpdateMeter VariableValue1][!Redraw][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue1 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue1][!Redraw]
InputNumber=1

 [VariableIcon2]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle2]
Meter=String
Text=Points
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription2]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue2]
Meter=String
Text=[#VectorBands]
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
DefaultValue=[#VectorBands]
Command1=[!SetVariable "VectorBands" "$UserInput$"][!WriteKeyValue "Variables" "VectorBands" "[#VectorBands]" "#SKINSPATH#ASimpleVisualizer2\@Resources\Variables\Original\Vector.inc"][!UpdateMeter VariableValue2][!Redraw][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue2 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue2][!Redraw]
InputNumber=1

 [VariableIcon3]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle3]
Meter=String
Text=Width
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription3]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableVariableValue3]
Meter=String
Text=[#VectorWidth]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText3" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText3]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=#s_FontColor#
FontFace=#s_FontFace#
FontSize=#s_InputTextFontSize#
Disabled=
X=([VariableVariableValue3:X])
Y=([VariableVariableValue3:Y] + [#s_ValueYPadding])
H=[VariableVariableValue3:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#VectorWidth]
Command1=[!SetVariable "VectorWidth" "$UserInput$"][!WriteKeyValue "Variables" "VectorWidth" "[#VectorWidth]" "#SKINSPATH#ASimpleVisualizer2\@Resources\Variables\Original\Vector.inc"][!UpdateMeter VariableVariableValue3][!Redraw][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableVariableValue3 FontColor "[#s_FontColor]"][!UpdateMeter VariableVariableValue3][!Redraw]

 [VariableIcon4]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle4]
Meter=String
Text=Layer1 Height
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription4]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue4]
Meter=String
Text=[#Layer1Height]
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
DefaultValue=[#Layer1Height]
Command1=[!SetVariable "Layer1Height" "$UserInput$"][!WriteKeyValue "Variables" "Layer1Height" "[#Layer1Height]" "#SKINSPATH#ASimpleVisualizer2\@Resources\Variables\Original\Vector.inc"][!UpdateMeter VariableValue4][!Redraw][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue4 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue4][!Redraw]
InputNumber=1

 [VariableIcon5]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle5]
Meter=String
Text=Layer2 Height
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription5]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue5]
Meter=String
Text=[#Layer2Height]
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
DefaultValue=[#Layer2Height]
Command1=[!SetVariable "Layer2Height" "$UserInput$"][!WriteKeyValue "Variables" "Layer2Height" "[#Layer2Height]" "#SKINSPATH#ASimpleVisualizer2\@Resources\Variables\Original\Vector.inc"][!UpdateMeter VariableValue5][!Redraw][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue5 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue5][!Redraw]
InputNumber=1

 [VariableIcon6]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle6]
Meter=String
Text=Layer3 Height
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription6]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue6]
Meter=String
Text=[#Layer3Height]
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
DefaultValue=[#Layer3Height]
Command1=[!SetVariable "Layer3Height" "$UserInput$"][!WriteKeyValue "Variables" "Layer3Height" "[#Layer3Height]" "#SKINSPATH#ASimpleVisualizer2\@Resources\Variables\Original\Vector.inc"][!UpdateMeter VariableValue6][!Redraw][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue6 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue6][!Redraw]
InputNumber=1

 [VariableIcon7]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle7]
Meter=String
Text=Layer4 Height
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription7]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue7]
Meter=String
Text=[#Layer4Height]
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
DefaultValue=[#Layer4Height]
Command1=[!SetVariable "Layer4Height" "$UserInput$"][!WriteKeyValue "Variables" "Layer4Height" "[#Layer4Height]" "#SKINSPATH#ASimpleVisualizer2\@Resources\Variables\Original\Vector.inc"][!UpdateMeter VariableValue7][!Redraw][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue7 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue7][!Redraw]
InputNumber=1

 

[VariableIcon8]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle8]
Meter=String
Text=Color Mode 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription8]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=

 
[MeasureRadio8Solid]
Measure=String
String=[#BarType]
DynamicVariables=1
IfMatch=^Solid$
IfMatchAction=[!SetOption RadioString8Solid InlinePattern ".*"][!SetOption RadioButton8Solid Text "[\xECCB]"][!Update][!Redraw]
IfNotMatchAction=[!SetOption RadioString8Solid InlinePattern "^$"][!SetOption RadioButton8Solid Text "[\xECCA]"][!Update][!Redraw]
[RadioButton8Solid]
Meter=String
Text=[\xECCA]
FontSize=15
MeterStyle=VariableIcon | RightPanel
DynamicVariables=1
LeftMouseUpAction=[!SetVariable BarType "Solid"][!WriteKeyValue Variables BarType "Solid" "#SKINSPATH#ASimpleVisualizer2\@Resources\Variables\Original\Vector.inc"][!Update][!Redraw][#s_OnChangeAction]
[RadioString8Solid]
Meter=String
Text=Solid
Y=-1r
Padding=0,0,[#s_VariableXPadding],[#s_ValueYPadding]
MeterStyle=VarStringValue | VarColorString | RightPanel
InlinePattern=^$
InlineSetting=Weight | 600
LeftMouseUpAction=[!SetVariable BarType "Solid"][!WriteKeyValue Variables BarType "Solid" "#SKINSPATH#ASimpleVisualizer2\@Resources\Variables\Original\Vector.inc"][!Update][!Redraw][#s_OnChangeAction]
 
[MeasureRadio8Gradient]
Measure=String
String=[#BarType]
DynamicVariables=1
IfMatch=^Gradient$
IfMatchAction=[!SetOption RadioString8Gradient InlinePattern ".*"][!SetOption RadioButton8Gradient Text "[\xECCB]"][!Update][!Redraw]
IfNotMatchAction=[!SetOption RadioString8Gradient InlinePattern "^$"][!SetOption RadioButton8Gradient Text "[\xECCA]"][!Update][!Redraw]
[RadioButton8Gradient]
Meter=String
Text=[\xECCA]
FontSize=15
MeterStyle=VariableIcon | RightPanel
DynamicVariables=1
LeftMouseUpAction=[!SetVariable BarType "Gradient"][!WriteKeyValue Variables BarType "Gradient" "#SKINSPATH#ASimpleVisualizer2\@Resources\Variables\Original\Vector.inc"][!Update][!Redraw][#s_OnChangeAction]
[RadioString8Gradient]
Meter=String
Text=Gradient
Y=-1r
Padding=0,0,[#s_VariableXPadding],[#s_ValueYPadding]
MeterStyle=VarStringValue | VarColorString | RightPanel
InlinePattern=^$
InlineSetting=Weight | 600
LeftMouseUpAction=[!SetVariable BarType "Gradient"][!WriteKeyValue Variables BarType "Gradient" "#SKINSPATH#ASimpleVisualizer2\@Resources\Variables\Original\Vector.inc"][!Update][!Redraw][#s_OnChangeAction]
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
Text=
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
Command1=[!SetVariable "Angle" "$UserInput$"][!WriteKeyValue "Variables" "Angle" "[#Angle]" "#SKINSPATH#ASimpleVisualizer2\@Resources\Variables\Original\Vector.inc"][!UpdateMeter VariableValue9][!Redraw][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue9 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue9][!Redraw]
InputNumber=1