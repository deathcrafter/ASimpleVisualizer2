 [VariableIcon0]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle0]
Meter=String
Text=MirrorXY
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription0]
Meter=String
Text=Settings for MirrorXY
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
Command1=[!SetVariable "Group1XOffset" "$UserInput$"][!WriteKeyValue "Variables" "Group1XOffset" "[#Group1XOffset]" "#@#\Variables\[#Preset]\Bar\MirrorXY.inc"][!UpdateMeter VariableValue1][!Redraw][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue1 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue1][!Redraw]
InputNumber=1

 [VariableIcon2]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle2]
Meter=String
Text=First Y-Offset
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription2]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue2]
Meter=String
Text=[#Group1YOffset]
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
DefaultValue=[#Group1YOffset]
Command1=[!SetVariable "Group1YOffset" "$UserInput$"][!WriteKeyValue "Variables" "Group1YOffset" "[#Group1YOffset]" "#@#\Variables\[#Preset]\Bar\MirrorXY.inc"][!UpdateMeter VariableValue2][!Redraw][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue2 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue2][!Redraw]
InputNumber=1

 [VariableIcon3]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle3]
Meter=String
Text=Second X-Offset
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription3]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue3]
Meter=String
Text=[#Group2XOffset]
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
DefaultValue=[#Group2XOffset]
Command1=[!SetVariable "Group2XOffset" "$UserInput$"][!WriteKeyValue "Variables" "Group2XOffset" "[#Group2XOffset]" "#@#\Variables\[#Preset]\Bar\MirrorXY.inc"][!UpdateMeter VariableValue3][!Redraw][#s_OnChangeAction]
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
Command1=[!SetVariable "Group2YOffset" "$UserInput$"][!WriteKeyValue "Variables" "Group2YOffset" "[#Group2YOffset]" "#@#\Variables\[#Preset]\Bar\MirrorXY.inc"][!UpdateMeter VariableValue4][!Redraw][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue4 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue4][!Redraw]
InputNumber=1

 [VariableIcon5]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle5]
Meter=String
Text=Third X-Offset
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription5]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue5]
Meter=String
Text=[#Group3XOffset]
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
DefaultValue=[#Group3XOffset]
Command1=[!SetVariable "Group3XOffset" "$UserInput$"][!WriteKeyValue "Variables" "Group3XOffset" "[#Group3XOffset]" "#@#\Variables\[#Preset]\Bar\MirrorXY.inc"][!UpdateMeter VariableValue5][!Redraw][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue5 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue5][!Redraw]
InputNumber=1

 [VariableIcon6]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle6]
Meter=String
Text=Third Y-Offset
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription6]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue6]
Meter=String
Text=[#Group3YOffset]
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
DefaultValue=[#Group3YOffset]
Command1=[!SetVariable "Group3YOffset" "$UserInput$"][!WriteKeyValue "Variables" "Group3YOffset" "[#Group3YOffset]" "#@#\Variables\[#Preset]\Bar\MirrorXY.inc"][!UpdateMeter VariableValue6][!Redraw][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue6 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue6][!Redraw]
InputNumber=1

 [VariableIcon7]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle7]
Meter=String
Text=Fourth X-Offset
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription7]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue7]
Meter=String
Text=[#Group4XOffset]
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
DefaultValue=[#Group4XOffset]
Command1=[!SetVariable "Group4XOffset" "$UserInput$"][!WriteKeyValue "Variables" "Group4XOffset" "[#Group4XOffset]" "#@#\Variables\[#Preset]\Bar\MirrorXY.inc"][!UpdateMeter VariableValue7][!Redraw][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue7 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue7][!Redraw]
InputNumber=1

 [VariableIcon8]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle8]
Meter=String
Text=Fourth Y-Offset
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription8]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue8]
Meter=String
Text=[#Group4YOffset]
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
DefaultValue=[#Group4YOffset]
Command1=[!SetVariable "Group4YOffset" "$UserInput$"][!WriteKeyValue "Variables" "Group4YOffset" "[#Group4YOffset]" "#@#\Variables\[#Preset]\Bar\MirrorXY.inc"][!UpdateMeter VariableValue8][!Redraw][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue8 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue8][!Redraw]
InputNumber=1

 
[VariableIcon9]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle9]
Meter=String
Text=X-Flip 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription9]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden= 
[MeasureList9Group1]
Measure=Calc
Formula=[#Group1XFlip]
DynamicVariables=1
IfEqualValue=1
IfEqualAction=[!SetOption "ListCheck9Group1" Text "[\xE73A]"][!Update][!Redraw]
IfBelowValue=1
IfBelowAction=[!SetOption "ListCheck9Group1" Text "[\xE739]"][!Update][!Redraw]
[ListCheck9Group1]
Meter=String
Text=[\xE739]
FontSize=15
MeterStyle=VariableIcon | RightPanel
DynamicVariables=1
LeftMouseUpAction=[!SetVariable Group1XFlip "(1-[#Group1XFlip])"][!WriteKeyValue Variables Group1XFlip "[#Group1XFlip]" "#@#\Variables\[#Preset]\Bar\MirrorXY.inc"][!UpdateMeasure "MeasureList9Group1"][!Redraw][#s_OnChangeAction]
[ListString9Group1]
Meter=String
Text=Group1
Y=-1r
Padding=0,0,[#s_VariableXPadding],[#s_ValueYPadding]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!SetVariable Group1XFlip "(1-[#Group1XFlip])"][!WriteKeyValue Variables Group1XFlip "[#Group1XFlip]" "#@#\Variables\[#Preset]\Bar\MirrorXY.inc"][!UpdateMeasure "MeasureList9Group1"][!Redraw][#s_OnChangeAction]
 
[MeasureList9Group2]
Measure=Calc
Formula=[#Group2XFlip]
DynamicVariables=1
IfEqualValue=1
IfEqualAction=[!SetOption "ListCheck9Group2" Text "[\xE73A]"][!Update][!Redraw]
IfBelowValue=1
IfBelowAction=[!SetOption "ListCheck9Group2" Text "[\xE739]"][!Update][!Redraw]
[ListCheck9Group2]
Meter=String
Text=[\xE739]
FontSize=15
MeterStyle=VariableIcon | RightPanel
DynamicVariables=1
LeftMouseUpAction=[!SetVariable Group2XFlip "(1-[#Group2XFlip])"][!WriteKeyValue Variables Group2XFlip "[#Group2XFlip]" "#@#\Variables\[#Preset]\Bar\MirrorXY.inc"][!UpdateMeasure "MeasureList9Group2"][!Redraw][#s_OnChangeAction]
[ListString9Group2]
Meter=String
Text=Group2
Y=-1r
Padding=0,0,[#s_VariableXPadding],[#s_ValueYPadding]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!SetVariable Group2XFlip "(1-[#Group2XFlip])"][!WriteKeyValue Variables Group2XFlip "[#Group2XFlip]" "#@#\Variables\[#Preset]\Bar\MirrorXY.inc"][!UpdateMeasure "MeasureList9Group2"][!Redraw][#s_OnChangeAction]
 
[MeasureList9Group3]
Measure=Calc
Formula=[#Group3XFlip]
DynamicVariables=1
IfEqualValue=1
IfEqualAction=[!SetOption "ListCheck9Group3" Text "[\xE73A]"][!Update][!Redraw]
IfBelowValue=1
IfBelowAction=[!SetOption "ListCheck9Group3" Text "[\xE739]"][!Update][!Redraw]
[ListCheck9Group3]
Meter=String
Text=[\xE739]
FontSize=15
MeterStyle=VariableIcon | RightPanel
DynamicVariables=1
LeftMouseUpAction=[!SetVariable Group3XFlip "(1-[#Group3XFlip])"][!WriteKeyValue Variables Group3XFlip "[#Group3XFlip]" "#@#\Variables\[#Preset]\Bar\MirrorXY.inc"][!UpdateMeasure "MeasureList9Group3"][!Redraw][#s_OnChangeAction]
[ListString9Group3]
Meter=String
Text=Group3
Y=-1r
Padding=0,0,[#s_VariableXPadding],[#s_ValueYPadding]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!SetVariable Group3XFlip "(1-[#Group3XFlip])"][!WriteKeyValue Variables Group3XFlip "[#Group3XFlip]" "#@#\Variables\[#Preset]\Bar\MirrorXY.inc"][!UpdateMeasure "MeasureList9Group3"][!Redraw][#s_OnChangeAction]
 
[MeasureList9Group4]
Measure=Calc
Formula=[#Group4XFlip]
DynamicVariables=1
IfEqualValue=1
IfEqualAction=[!SetOption "ListCheck9Group4" Text "[\xE73A]"][!Update][!Redraw]
IfBelowValue=1
IfBelowAction=[!SetOption "ListCheck9Group4" Text "[\xE739]"][!Update][!Redraw]
[ListCheck9Group4]
Meter=String
Text=[\xE739]
FontSize=15
MeterStyle=VariableIcon | RightPanel
DynamicVariables=1
LeftMouseUpAction=[!SetVariable Group4XFlip "(1-[#Group4XFlip])"][!WriteKeyValue Variables Group4XFlip "[#Group4XFlip]" "#@#\Variables\[#Preset]\Bar\MirrorXY.inc"][!UpdateMeasure "MeasureList9Group4"][!Redraw][#s_OnChangeAction]
[ListString9Group4]
Meter=String
Text=Group4
Y=-1r
Padding=0,0,[#s_VariableXPadding],[#s_ValueYPadding]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!SetVariable Group4XFlip "(1-[#Group4XFlip])"][!WriteKeyValue Variables Group4XFlip "[#Group4XFlip]" "#@#\Variables\[#Preset]\Bar\MirrorXY.inc"][!UpdateMeasure "MeasureList9Group4"][!Redraw][#s_OnChangeAction]
 
[VariableIcon10]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle10]
Meter=String
Text=Y-Flip 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription10]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden= 
[MeasureList10Group1]
Measure=Calc
Formula=[#Group1YFlip]
DynamicVariables=1
IfEqualValue=1
IfEqualAction=[!SetOption "ListCheck10Group1" Text "[\xE73A]"][!Update][!Redraw]
IfBelowValue=1
IfBelowAction=[!SetOption "ListCheck10Group1" Text "[\xE739]"][!Update][!Redraw]
[ListCheck10Group1]
Meter=String
Text=[\xE739]
FontSize=15
MeterStyle=VariableIcon | RightPanel
DynamicVariables=1
LeftMouseUpAction=[!SetVariable Group1YFlip "(1-[#Group1YFlip])"][!WriteKeyValue Variables Group1YFlip "[#Group1YFlip]" "#@#\Variables\[#Preset]\Bar\MirrorXY.inc"][!UpdateMeasure "MeasureList10Group1"][!Redraw][#s_OnChangeAction]
[ListString10Group1]
Meter=String
Text=Group1
Y=-1r
Padding=0,0,[#s_VariableXPadding],[#s_ValueYPadding]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!SetVariable Group1YFlip "(1-[#Group1YFlip])"][!WriteKeyValue Variables Group1YFlip "[#Group1YFlip]" "#@#\Variables\[#Preset]\Bar\MirrorXY.inc"][!UpdateMeasure "MeasureList10Group1"][!Redraw][#s_OnChangeAction]
 
[MeasureList10Group2]
Measure=Calc
Formula=[#Group2YFlip]
DynamicVariables=1
IfEqualValue=1
IfEqualAction=[!SetOption "ListCheck10Group2" Text "[\xE73A]"][!Update][!Redraw]
IfBelowValue=1
IfBelowAction=[!SetOption "ListCheck10Group2" Text "[\xE739]"][!Update][!Redraw]
[ListCheck10Group2]
Meter=String
Text=[\xE739]
FontSize=15
MeterStyle=VariableIcon | RightPanel
DynamicVariables=1
LeftMouseUpAction=[!SetVariable Group2YFlip "(1-[#Group2YFlip])"][!WriteKeyValue Variables Group2YFlip "[#Group2YFlip]" "#@#\Variables\[#Preset]\Bar\MirrorXY.inc"][!UpdateMeasure "MeasureList10Group2"][!Redraw][#s_OnChangeAction]
[ListString10Group2]
Meter=String
Text=Group2
Y=-1r
Padding=0,0,[#s_VariableXPadding],[#s_ValueYPadding]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!SetVariable Group2YFlip "(1-[#Group2YFlip])"][!WriteKeyValue Variables Group2YFlip "[#Group2YFlip]" "#@#\Variables\[#Preset]\Bar\MirrorXY.inc"][!UpdateMeasure "MeasureList10Group2"][!Redraw][#s_OnChangeAction]
 
[MeasureList10Group3]
Measure=Calc
Formula=[#Group3YFlip]
DynamicVariables=1
IfEqualValue=1
IfEqualAction=[!SetOption "ListCheck10Group3" Text "[\xE73A]"][!Update][!Redraw]
IfBelowValue=1
IfBelowAction=[!SetOption "ListCheck10Group3" Text "[\xE739]"][!Update][!Redraw]
[ListCheck10Group3]
Meter=String
Text=[\xE739]
FontSize=15
MeterStyle=VariableIcon | RightPanel
DynamicVariables=1
LeftMouseUpAction=[!SetVariable Group3YFlip "(1-[#Group3YFlip])"][!WriteKeyValue Variables Group3YFlip "[#Group3YFlip]" "#@#\Variables\[#Preset]\Bar\MirrorXY.inc"][!UpdateMeasure "MeasureList10Group3"][!Redraw][#s_OnChangeAction]
[ListString10Group3]
Meter=String
Text=Group3
Y=-1r
Padding=0,0,[#s_VariableXPadding],[#s_ValueYPadding]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!SetVariable Group3YFlip "(1-[#Group3YFlip])"][!WriteKeyValue Variables Group3YFlip "[#Group3YFlip]" "#@#\Variables\[#Preset]\Bar\MirrorXY.inc"][!UpdateMeasure "MeasureList10Group3"][!Redraw][#s_OnChangeAction]
 
[MeasureList10Group4]
Measure=Calc
Formula=[#Group4YFlip]
DynamicVariables=1
IfEqualValue=1
IfEqualAction=[!SetOption "ListCheck10Group4" Text "[\xE73A]"][!Update][!Redraw]
IfBelowValue=1
IfBelowAction=[!SetOption "ListCheck10Group4" Text "[\xE739]"][!Update][!Redraw]
[ListCheck10Group4]
Meter=String
Text=[\xE739]
FontSize=15
MeterStyle=VariableIcon | RightPanel
DynamicVariables=1
LeftMouseUpAction=[!SetVariable Group4YFlip "(1-[#Group4YFlip])"][!WriteKeyValue Variables Group4YFlip "[#Group4YFlip]" "#@#\Variables\[#Preset]\Bar\MirrorXY.inc"][!UpdateMeasure "MeasureList10Group4"][!Redraw][#s_OnChangeAction]
[ListString10Group4]
Meter=String
Text=Group4
Y=-1r
Padding=0,0,[#s_VariableXPadding],[#s_ValueYPadding]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!SetVariable Group4YFlip "(1-[#Group4YFlip])"][!WriteKeyValue Variables Group4YFlip "[#Group4YFlip]" "#@#\Variables\[#Preset]\Bar\MirrorXY.inc"][!UpdateMeasure "MeasureList10Group4"][!Redraw][#s_OnChangeAction]