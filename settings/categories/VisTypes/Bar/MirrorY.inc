 [VariableIcon0]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle0]
Meter=String
Text=MirrorY 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription0]
Meter=String
Text=Settings for MirrorY 
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
Text=First X-Offset
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription1]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue1]
Meter=String
Text=[#Group1XOffset]
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
DefaultValue=[#Group1XOffset]
Command1=[!SetVariable "Group1XOffset" "$UserInput$"][!WriteKeyValue "Variables" "Group1XOffset" "[#Group1XOffset]" "#SKINSPATH#ASimpleVisualizer2\@Resources\Variables\Original\Bar\MirrorY.inc"][!UpdateMeter VariableValue1][!Redraw][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue1 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue1][!Redraw]
InputNumber=1

 [VariableIcon2]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle2]
Meter=String
Text=Second X-Offset
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription2]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue2]
Meter=String
Text=[#Group2XOffset]
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
DefaultValue=[#Group2XOffset]
Command1=[!SetVariable "Group2XOffset" "$UserInput$"][!WriteKeyValue "Variables" "Group2XOffset" "[#Group2XOffset]" "#SKINSPATH#ASimpleVisualizer2\@Resources\Variables\Original\Bar\MirrorY.inc"][!UpdateMeter VariableValue2][!Redraw][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue2 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue2][!Redraw]
InputNumber=1

 [VariableIcon3]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle3]
Meter=String
Text=First Y-Offset
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription3]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue3]
Meter=String
Text=[#Group1YOffset]
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
DefaultValue=[#Group1YOffset]
Command1=[!SetVariable "Group1YOffset" "$UserInput$"][!WriteKeyValue "Variables" "Group1YOffset" "[#Group1YOffset]" "#SKINSPATH#ASimpleVisualizer2\@Resources\Variables\Original\Bar\MirrorY.inc"][!UpdateMeter VariableValue3][!Redraw][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue3 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue3][!Redraw]
InputNumber=1

 [VariableIcon4]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle4]
Meter=String
Text=Second Y-Offset
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription4]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue4]
Meter=String
Text=[#Group2YOffset]
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
DefaultValue=[#Group2YOffset]
Command1=[!SetVariable "Group2YOffset" "$UserInput$"][!WriteKeyValue "Variables" "Group2YOffset" "[#Group2YOffset]" "#SKINSPATH#ASimpleVisualizer2\@Resources\Variables\Original\Bar\MirrorY.inc"][!UpdateMeter VariableValue4][!Redraw][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue4 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue4][!Redraw]
InputNumber=1

 
[VariableIcon5]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle5]
Meter=String
Text=X-Flip 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription5]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden= 
[MeasureList5Group1]
Measure=Calc
Formula=[#Group1XFlip]
DynamicVariables=1
IfEqualValue=1
IfEqualAction=[!SetOption "ListCheck5Group1" Text "[\xE73A]"][!Update][!Redraw]
IfBelowValue=1
IfBelowAction=[!SetOption "ListCheck5Group1" Text "[\xE739]"][!Update][!Redraw]
[ListCheck5Group1]
Meter=String
Text=[\xE739]
FontSize=15
MeterStyle=VariableIcon | RightPanel
DynamicVariables=1
LeftMouseUpAction=[!SetVariable Group1XFlip "(1-[#Group1XFlip])"][!WriteKeyValue Variables Group1XFlip "[#Group1XFlip]" "#SKINSPATH#ASimpleVisualizer2\@Resources\Variables\Original\Bar\MirrorY.inc"][!UpdateMeasure "MeasureList5Group1"][!Redraw][#s_OnChangeAction]
[ListString5Group1]
Meter=String
Text=Group1
Y=-1r
Padding=0,0,[#s_VariableXPadding],[#s_ValueYPadding]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!SetVariable Group1XFlip "(1-[#Group1XFlip])"][!WriteKeyValue Variables Group1XFlip "[#Group1XFlip]" "#SKINSPATH#ASimpleVisualizer2\@Resources\Variables\Original\Bar\MirrorY.inc"][!UpdateMeasure "MeasureList5Group1"][!Redraw][#s_OnChangeAction]
 
[MeasureList5Group2]
Measure=Calc
Formula=[#Group2XFlip]
DynamicVariables=1
IfEqualValue=1
IfEqualAction=[!SetOption "ListCheck5Group2" Text "[\xE73A]"][!Update][!Redraw]
IfBelowValue=1
IfBelowAction=[!SetOption "ListCheck5Group2" Text "[\xE739]"][!Update][!Redraw]
[ListCheck5Group2]
Meter=String
Text=[\xE739]
FontSize=15
MeterStyle=VariableIcon | RightPanel
DynamicVariables=1
LeftMouseUpAction=[!SetVariable Group2XFlip "(1-[#Group2XFlip])"][!WriteKeyValue Variables Group2XFlip "[#Group2XFlip]" "#SKINSPATH#ASimpleVisualizer2\@Resources\Variables\Original\Bar\MirrorY.inc"][!UpdateMeasure "MeasureList5Group2"][!Redraw][#s_OnChangeAction]
[ListString5Group2]
Meter=String
Text=Group2
Y=-1r
Padding=0,0,[#s_VariableXPadding],[#s_ValueYPadding]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!SetVariable Group2XFlip "(1-[#Group2XFlip])"][!WriteKeyValue Variables Group2XFlip "[#Group2XFlip]" "#SKINSPATH#ASimpleVisualizer2\@Resources\Variables\Original\Bar\MirrorY.inc"][!UpdateMeasure "MeasureList5Group2"][!Redraw][#s_OnChangeAction]
 
[VariableIcon6]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle6]
Meter=String
Text=Y-Flip 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription6]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden= 
[MeasureList6Group1]
Measure=Calc
Formula=[#Group1YFlip]
DynamicVariables=1
IfEqualValue=1
IfEqualAction=[!SetOption "ListCheck6Group1" Text "[\xE73A]"][!Update][!Redraw]
IfBelowValue=1
IfBelowAction=[!SetOption "ListCheck6Group1" Text "[\xE739]"][!Update][!Redraw]
[ListCheck6Group1]
Meter=String
Text=[\xE739]
FontSize=15
MeterStyle=VariableIcon | RightPanel
DynamicVariables=1
LeftMouseUpAction=[!SetVariable Group1YFlip "(1-[#Group1YFlip])"][!WriteKeyValue Variables Group1YFlip "[#Group1YFlip]" "#SKINSPATH#ASimpleVisualizer2\@Resources\Variables\Original\Bar\MirrorY.inc"][!UpdateMeasure "MeasureList6Group1"][!Redraw][#s_OnChangeAction]
[ListString6Group1]
Meter=String
Text=Group1
Y=-1r
Padding=0,0,[#s_VariableXPadding],[#s_ValueYPadding]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!SetVariable Group1YFlip "(1-[#Group1YFlip])"][!WriteKeyValue Variables Group1YFlip "[#Group1YFlip]" "#SKINSPATH#ASimpleVisualizer2\@Resources\Variables\Original\Bar\MirrorY.inc"][!UpdateMeasure "MeasureList6Group1"][!Redraw][#s_OnChangeAction]
 
[MeasureList6Group2]
Measure=Calc
Formula=[#Group2YFlip]
DynamicVariables=1
IfEqualValue=1
IfEqualAction=[!SetOption "ListCheck6Group2" Text "[\xE73A]"][!Update][!Redraw]
IfBelowValue=1
IfBelowAction=[!SetOption "ListCheck6Group2" Text "[\xE739]"][!Update][!Redraw]
[ListCheck6Group2]
Meter=String
Text=[\xE739]
FontSize=15
MeterStyle=VariableIcon | RightPanel
DynamicVariables=1
LeftMouseUpAction=[!SetVariable Group2YFlip "(1-[#Group2YFlip])"][!WriteKeyValue Variables Group2YFlip "[#Group2YFlip]" "#SKINSPATH#ASimpleVisualizer2\@Resources\Variables\Original\Bar\MirrorY.inc"][!UpdateMeasure "MeasureList6Group2"][!Redraw][#s_OnChangeAction]
[ListString6Group2]
Meter=String
Text=Group2
Y=-1r
Padding=0,0,[#s_VariableXPadding],[#s_ValueYPadding]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!SetVariable Group2YFlip "(1-[#Group2YFlip])"][!WriteKeyValue Variables Group2YFlip "[#Group2YFlip]" "#SKINSPATH#ASimpleVisualizer2\@Resources\Variables\Original\Bar\MirrorY.inc"][!UpdateMeasure "MeasureList6Group2"][!Redraw][#s_OnChangeAction]