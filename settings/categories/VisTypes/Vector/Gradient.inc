 [VariableIcon0]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle0]
Meter=String
Text=Gradient 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription0]
Meter=String
Text=Gradients for vector layers 
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue0]
Meter=String
Text= 
MeterStyle=VarStringValue | Link0 | RightPanel
Hidden=
LeftMouseUpAction=[" "]
[MeasureLinkStatus0]
Measure=Calc
Formula=0
IfCondition=(0 = #CURRENTSECTION#)
IfTrueAction=[!DisableMouseAction VariableValue0 LeftMouseUpAction]
Disabled=

 [VariableIcon1]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle1]
Meter=String
Text=Layer1Gradient
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription1]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableVariableValue1]
Meter=String
Text=[#Layer1Gradient]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText1" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText1]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=#s_FontColor#
FontFace=#s_FontFace#
FontSize=#s_InputTextFontSize#
Disabled=
X=([VariableVariableValue1:X])
Y=([VariableVariableValue1:Y] + [#s_ValueYPadding])
H=[VariableVariableValue1:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#Layer1Gradient]
Command1=[!SetVariable "Layer1Gradient" "$UserInput$"][!WriteKeyValue "Variables" "Layer1Gradient" "[#Layer1Gradient]" "#SKINSPATH#ASimpleVisualizer2\@Resources\Variables\Original\Vector\Gradient.inc"][!UpdateMeter VariableVariableValue1][!Redraw][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableVariableValue1 FontColor "[#s_FontColor]"][!UpdateMeter VariableVariableValue1][!Redraw]

 [VariableIcon2]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle2]
Meter=String
Text=Layer2Gradient
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription2]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableVariableValue2]
Meter=String
Text=[#Layer2Gradient]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText2" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText2]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=#s_FontColor#
FontFace=#s_FontFace#
FontSize=#s_InputTextFontSize#
Disabled=
X=([VariableVariableValue2:X])
Y=([VariableVariableValue2:Y] + [#s_ValueYPadding])
H=[VariableVariableValue2:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#Layer2Gradient]
Command1=[!SetVariable "Layer2Gradient" "$UserInput$"][!WriteKeyValue "Variables" "Layer2Gradient" "[#Layer2Gradient]" "#SKINSPATH#ASimpleVisualizer2\@Resources\Variables\Original\Vector\Gradient.inc"][!UpdateMeter VariableVariableValue2][!Redraw][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableVariableValue2 FontColor "[#s_FontColor]"][!UpdateMeter VariableVariableValue2][!Redraw]

 [VariableIcon3]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle3]
Meter=String
Text=Layer3Gradient
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription3]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableVariableValue3]
Meter=String
Text=[#Layer3Gradient]
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
DefaultValue=[#Layer3Gradient]
Command1=[!SetVariable "Layer3Gradient" "$UserInput$"][!WriteKeyValue "Variables" "Layer3Gradient" "[#Layer3Gradient]" "#SKINSPATH#ASimpleVisualizer2\@Resources\Variables\Original\Vector\Gradient.inc"][!UpdateMeter VariableVariableValue3][!Redraw][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableVariableValue3 FontColor "[#s_FontColor]"][!UpdateMeter VariableVariableValue3][!Redraw]

 [VariableIcon4]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle4]
Meter=String
Text=Layer4Gradient
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription4]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableVariableValue4]
Meter=String
Text=[#Layer4Gradient]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText4" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText4]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=#s_FontColor#
FontFace=#s_FontFace#
FontSize=#s_InputTextFontSize#
Disabled=
X=([VariableVariableValue4:X])
Y=([VariableVariableValue4:Y] + [#s_ValueYPadding])
H=[VariableVariableValue4:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#Layer4Gradient]
Command1=[!SetVariable "Layer4Gradient" "$UserInput$"][!WriteKeyValue "Variables" "Layer4Gradient" "[#Layer4Gradient]" "#SKINSPATH#ASimpleVisualizer2\@Resources\Variables\Original\Vector\Gradient.inc"][!UpdateMeter VariableVariableValue4][!Redraw][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableVariableValue4 FontColor "[#s_FontColor]"][!UpdateMeter VariableVariableValue4][!Redraw]