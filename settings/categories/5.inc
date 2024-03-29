[FirstRightPanel]
Meter=String
Text=First
FontColor=0,0,0,0
MeterStyle=FirstItem | RightPanel
Y=[#s_ScrollRightPanel]
[CategoryIcon5]
Meter=String
Text=[\xE790]
MeterStyle=CategoryIcon | RightPanel

[Title5]
Meter=String
Text=Colors 
MeterStyle=CategoryTitle | RightPanel
W=([#s_RightPanelW] - [CategoryIcon5:W])

[CategoryDescription5]
Meter=String
Text=Define colors of your visualizer 
MeterStyle=VarDescription | ThickDescription | RightPanel

[CategoryTitleSeparator5]
Meter=Image
MeterStyle=CategoryTitleSeparator | RightPanel

 [VariableIcon0]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle0]
Meter=String
Text=Color Count 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription0]
Meter=String
Text=Number of colors you want in gradient.(for no gradient 1)
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue0]
Meter=String
Text=[#ColorCount]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText0" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText0]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=[#s_FontColor]
FontFace=[#s_FontFace]
FontSize=[#s_InputTextFontSize]
Disabled=
X=([VariableValue0:X])
Y=([VariableValue0:Y] + [#s_ValueYPadding])
H=[VariableValue0:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#ColorCount]
Command1=[!SetVariable "ColorCount" "$UserInput$"][!WriteKeyValue "Variables" "ColorCount" "[#ColorCount]" "#@#\Variables\[#Preset]\Colors.inc"][!UpdateMeter VariableValue0][!Redraw][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue0 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue0][!Redraw]
InputNumber=1

 [VariableIcon1]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle1Title]
Meter=String
Text=Color 1 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription1]
Meter=String
Text=Default color or first color of gradient
MeterStyle=VarDescription | RightPanel
Hidden=
[ColorVariableValue1]
Meter=Shape
Shape=Ellipse [#s_ColorSize],[#s_ColorSize],[#s_ColorSize],[#s_ColorSize] | Fill Color [#ColorA1] | StrokeWidth [#s_ColorStrokeWidth] | Extend Outline
Outline=Stroke Color [#s_ColorStrokeColor]
MeterStyle=VarColorValue | RightPanel
LeftMouseUpAction=[!CommandMeasure ColorPickerUI "Change('ColorA1', '[&ColorPickerUI:sub('#@#\Variables\[#Preset]\Colors.inc')]', '[&ColorPickerUI:sub('[#CURRENTCONFIG]')]')"][#ConstChangeAction]
Hidden=
[StringVariableValue1]
Meter=String
Text=[#ColorA1]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!CommandMeasure ColorPickerUI "Change('ColorA1', '[&ColorPickerUI:sub('#@#\Variables\[#Preset]\Colors.inc')]', '[&ColorPickerUI:sub('[#CURRENTCONFIG]')]')"][#ConstChangeAction]
Hidden=
 [VariableIcon2]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle2Title]
Meter=String
Text=Color 2
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription2]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[ColorVariableValue2]
Meter=Shape
Shape=Ellipse [#s_ColorSize],[#s_ColorSize],[#s_ColorSize],[#s_ColorSize] | Fill Color [#ColorA2] | StrokeWidth [#s_ColorStrokeWidth] | Extend Outline
Outline=Stroke Color [#s_ColorStrokeColor]
MeterStyle=VarColorValue | RightPanel
LeftMouseUpAction=[!CommandMeasure ColorPickerUI "Change('ColorA2', '[&ColorPickerUI:sub('#@#\Variables\[#Preset]\Colors.inc')]', '[&ColorPickerUI:sub('[#CURRENTCONFIG]')]')"][#ConstChangeAction]
Hidden=
[StringVariableValue2]
Meter=String
Text=[#ColorA2]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!CommandMeasure ColorPickerUI "Change('ColorA2', '[&ColorPickerUI:sub('#@#\Variables\[#Preset]\Colors.inc')]', '[&ColorPickerUI:sub('[#CURRENTCONFIG]')]')"][#ConstChangeAction]
Hidden=
 [VariableIcon3]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle3Title]
Meter=String
Text=Color 3
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription3]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[ColorVariableValue3]
Meter=Shape
Shape=Ellipse [#s_ColorSize],[#s_ColorSize],[#s_ColorSize],[#s_ColorSize] | Fill Color [#ColorA3] | StrokeWidth [#s_ColorStrokeWidth] | Extend Outline
Outline=Stroke Color [#s_ColorStrokeColor]
MeterStyle=VarColorValue | RightPanel
LeftMouseUpAction=[!CommandMeasure ColorPickerUI "Change('ColorA3', '[&ColorPickerUI:sub('#@#\Variables\[#Preset]\Colors.inc')]', '[&ColorPickerUI:sub('[#CURRENTCONFIG]')]')"][#ConstChangeAction]
Hidden=
[StringVariableValue3]
Meter=String
Text=[#ColorA3]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!CommandMeasure ColorPickerUI "Change('ColorA3', '[&ColorPickerUI:sub('#@#\Variables\[#Preset]\Colors.inc')]', '[&ColorPickerUI:sub('[#CURRENTCONFIG]')]')"][#ConstChangeAction]
Hidden=
 [VariableIcon4]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle4Title]
Meter=String
Text=Color 4
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription4]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[ColorVariableValue4]
Meter=Shape
Shape=Ellipse [#s_ColorSize],[#s_ColorSize],[#s_ColorSize],[#s_ColorSize] | Fill Color [#ColorA4] | StrokeWidth [#s_ColorStrokeWidth] | Extend Outline
Outline=Stroke Color [#s_ColorStrokeColor]
MeterStyle=VarColorValue | RightPanel
LeftMouseUpAction=[!CommandMeasure ColorPickerUI "Change('ColorA4', '[&ColorPickerUI:sub('#@#\Variables\[#Preset]\Colors.inc')]', '[&ColorPickerUI:sub('[#CURRENTCONFIG]')]')"][#ConstChangeAction]
Hidden=
[StringVariableValue4]
Meter=String
Text=[#ColorA4]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!CommandMeasure ColorPickerUI "Change('ColorA4', '[&ColorPickerUI:sub('#@#\Variables\[#Preset]\Colors.inc')]', '[&ColorPickerUI:sub('[#CURRENTCONFIG]')]')"][#ConstChangeAction]
Hidden=
 [VariableIcon5]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle5Title]
Meter=String
Text=Color 5
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription5]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[ColorVariableValue5]
Meter=Shape
Shape=Ellipse [#s_ColorSize],[#s_ColorSize],[#s_ColorSize],[#s_ColorSize] | Fill Color [#ColorA5] | StrokeWidth [#s_ColorStrokeWidth] | Extend Outline
Outline=Stroke Color [#s_ColorStrokeColor]
MeterStyle=VarColorValue | RightPanel
LeftMouseUpAction=[!CommandMeasure ColorPickerUI "Change('ColorA5', '[&ColorPickerUI:sub('#@#\Variables\[#Preset]\Colors.inc')]', '[&ColorPickerUI:sub('[#CURRENTCONFIG]')]')"][#ConstChangeAction]
Hidden=
[StringVariableValue5]
Meter=String
Text=[#ColorA5]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!CommandMeasure ColorPickerUI "Change('ColorA5', '[&ColorPickerUI:sub('#@#\Variables\[#Preset]\Colors.inc')]', '[&ColorPickerUI:sub('[#CURRENTCONFIG]')]')"][#ConstChangeAction]
Hidden=
 [VariableIcon6]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle6Title]
Meter=String
Text=Color 6
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription6]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[ColorVariableValue6]
Meter=Shape
Shape=Ellipse [#s_ColorSize],[#s_ColorSize],[#s_ColorSize],[#s_ColorSize] | Fill Color [#ColorA6] | StrokeWidth [#s_ColorStrokeWidth] | Extend Outline
Outline=Stroke Color [#s_ColorStrokeColor]
MeterStyle=VarColorValue | RightPanel
LeftMouseUpAction=[!CommandMeasure ColorPickerUI "Change('ColorA6', '[&ColorPickerUI:sub('#@#\Variables\[#Preset]\Colors.inc')]', '[&ColorPickerUI:sub('[#CURRENTCONFIG]')]')"][#ConstChangeAction]
Hidden=
[StringVariableValue6]
Meter=String
Text=[#ColorA6]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!CommandMeasure ColorPickerUI "Change('ColorA6', '[&ColorPickerUI:sub('#@#\Variables\[#Preset]\Colors.inc')]', '[&ColorPickerUI:sub('[#CURRENTCONFIG]')]')"][#ConstChangeAction]
Hidden=
 [VariableIcon7]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle7Title]
Meter=String
Text=Color 7
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription7]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[ColorVariableValue7]
Meter=Shape
Shape=Ellipse [#s_ColorSize],[#s_ColorSize],[#s_ColorSize],[#s_ColorSize] | Fill Color [#ColorA7] | StrokeWidth [#s_ColorStrokeWidth] | Extend Outline
Outline=Stroke Color [#s_ColorStrokeColor]
MeterStyle=VarColorValue | RightPanel
LeftMouseUpAction=[!CommandMeasure ColorPickerUI "Change('ColorA7', '[&ColorPickerUI:sub('#@#\Variables\[#Preset]\Colors.inc')]', '[&ColorPickerUI:sub('[#CURRENTCONFIG]')]')"][#ConstChangeAction]
Hidden=
[StringVariableValue7]
Meter=String
Text=[#ColorA7]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!CommandMeasure ColorPickerUI "Change('ColorA7', '[&ColorPickerUI:sub('#@#\Variables\[#Preset]\Colors.inc')]', '[&ColorPickerUI:sub('[#CURRENTCONFIG]')]')"][#ConstChangeAction]
Hidden=
 [VariableIcon8]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle8]
Meter=String
Text=Live Alpha
MeterStyle=VarTitle | RightPanel
[VariableDescription8]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel

[ToggleOff8]
Meter=Shape
Shape=Line 0,0,([#s_ToggleLength]),0 | Extend Line
Shape2=Ellipse ([#s_TogglePadding]/2),0,(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2),(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2) | Extend Circle
Circle=StrokeWidth 0 | Fill Color [#s_RightPanelBackgroundColor]
Line=StrokeWidth [#s_ToggleSize] | Stroke Color [#s_FontColor] | StrokeStartCap Round | StrokeEndCap Round
Hidden=([#LiveAlphaBool])
Y=([VariableDescription8:Y] + [VariableDescription8:H] + ([#s_ToggleSize] / 2) + [#s_ValueYPadding])
MeterStyle=VarToggleValue | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables "LiveAlphaBool" 1 "#@#\Variables\[#Preset]\Colors.inc"][!SetVariable "LiveAlphaBool" 1][!Update][!Redraw][#s_OnChangeAction]

[ToggleOn8]
Meter=Shape
Shape=Line 0,0,([#s_ToggleLength]),0 | Extend Line
Shape2=Ellipse (([#s_ToggleLength]) - ([#s_TogglePadding]/2)),0,(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2),(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2) | Extend Circle
Circle=StrokeWidth 0 | Fill Color [#s_RightPanelBackgroundColor]
Line=StrokeWidth [#s_ToggleSize] | Stroke Color [#s_ToggleActiveColor] | StrokeStartCap Round | StrokeEndCap Round
Hidden=([#LiveAlphaBool] - 1)
Y=([VariableDescription8:Y] + [VariableDescription8:H] + ([#s_ToggleSize] / 2) + [#s_ValueYPadding])
MeterStyle=VarToggleValue | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables "LiveAlphaBool" 0 "#@#\Variables\[#Preset]\Colors.inc"][!SetVariable "LiveAlphaBool" 0][!Update][!Redraw][#s_OnChangeAction]

[ClearFloat8]
Meter=Image
W=[#s_RightPanelW]
H=([#s_ValueYPadding] + [#s_ToggleSize] + [#s_ValueYPadding])
MeterStyle=RightPanel
Y=([VariableDescription8:Y] + [VariableDescription8:H])
DynamicVariables=1

 [VariableIcon9]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle9]
Meter=String
Text=Max Alpha
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription9]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue9]
Meter=String
Text=[#MaxAlpha]
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
DefaultValue=[#MaxAlpha]
Command1=[!SetVariable "MaxAlpha" "$UserInput$"][!WriteKeyValue "Variables" "MaxAlpha" "[#MaxAlpha]" "#@#\Variables\[#Preset]\Colors.inc"][!UpdateMeter VariableValue9][!Redraw][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue9 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue9][!Redraw]
InputNumber=1

 [VariableIcon10]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle10]
Meter=String
Text=Min Alpha
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription10]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue10]
Meter=String
Text=[#MinAlpha]
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
DefaultValue=[#MinAlpha]
Command1=[!SetVariable "MinAlpha" "$UserInput$"][!WriteKeyValue "Variables" "MinAlpha" "[#MinAlpha]" "#@#\Variables\[#Preset]\Colors.inc"][!UpdateMeter VariableValue10][!Redraw][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue10 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue10][!Redraw]
InputNumber=1

 [VariableIcon14]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle14Title]
Meter=String
Text=StrokeColor
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription14]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[ColorVariableValue14]
Meter=Shape
Shape=Ellipse [#s_ColorSize],[#s_ColorSize],[#s_ColorSize],[#s_ColorSize] | Fill Color [#StrokeColor] | StrokeWidth [#s_ColorStrokeWidth] | Extend Outline
Outline=Stroke Color [#s_ColorStrokeColor]
MeterStyle=VarColorValue | RightPanel
LeftMouseUpAction=[!CommandMeasure ColorPickerUI "Change('StrokeColor', '[&ColorPickerUI:sub('#@#\Variables\[#Preset]\Colors.inc')]', '[&ColorPickerUI:sub('[#CURRENTCONFIG]')]')"][#ConstChangeAction]
Hidden=

 [VariableIcon11]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle11]
Meter=String
Text=Stroke Live Alpha
MeterStyle=VarTitle | RightPanel
[VariableDescription11]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel

[ToggleOff11]
Meter=Shape
Shape=Line 0,0,([#s_ToggleLength]),0 | Extend Line
Shape2=Ellipse ([#s_TogglePadding]/2),0,(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2),(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2) | Extend Circle
Circle=StrokeWidth 0 | Fill Color [#s_RightPanelBackgroundColor]
Line=StrokeWidth [#s_ToggleSize] | Stroke Color [#s_FontColor] | StrokeStartCap Round | StrokeEndCap Round
Hidden=([#StrokeLiveAlpha])
Y=([VariableDescription11:Y] + [VariableDescription11:H] + ([#s_ToggleSize] / 2) + [#s_ValueYPadding])
MeterStyle=VarToggleValue | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables "StrokeLiveAlpha" 1 "#@#\Variables\[#Preset]\Colors.inc"][!SetVariable "StrokeLiveAlpha" 1][!Update][!Redraw][#s_OnChangeAction]

[ToggleOn11]
Meter=Shape
Shape=Line 0,0,([#s_ToggleLength]),0 | Extend Line
Shape2=Ellipse (([#s_ToggleLength]) - ([#s_TogglePadding]/2)),0,(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2),(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2) | Extend Circle
Circle=StrokeWidth 0 | Fill Color [#s_RightPanelBackgroundColor]
Line=StrokeWidth [#s_ToggleSize] | Stroke Color [#s_ToggleActiveColor] | StrokeStartCap Round | StrokeEndCap Round
Hidden=([#StrokeLiveAlpha] - 1)
Y=([VariableDescription11:Y] + [VariableDescription11:H] + ([#s_ToggleSize] / 2) + [#s_ValueYPadding])
MeterStyle=VarToggleValue | RightPanel
LeftMouseUpAction=[!WriteKeyValue Variables "StrokeLiveAlpha" 0 "#@#\Variables\[#Preset]\Colors.inc"][!SetVariable "StrokeLiveAlpha" 0][!Update][!Redraw][#s_OnChangeAction]

[ClearFloat11]
Meter=Image
W=[#s_RightPanelW]
H=([#s_ValueYPadding] + [#s_ToggleSize] + [#s_ValueYPadding])
MeterStyle=RightPanel
Y=([VariableDescription11:Y] + [VariableDescription11:H])
DynamicVariables=1

 [VariableIcon12]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle12]
Meter=String
Text=Stroke Max Alpha
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription12]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue12]
Meter=String
Text=[#StrokeMaxAlpha]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText12" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText12]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=[#s_FontColor]
FontFace=[#s_FontFace]
FontSize=[#s_InputTextFontSize]
Disabled=
X=([VariableValue12:X])
Y=([VariableValue12:Y] + [#s_ValueYPadding])
H=[VariableValue12:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#StrokeMaxAlpha]
Command1=[!SetVariable "StrokeMaxAlpha" "$UserInput$"][!WriteKeyValue "Variables" "StrokeMaxAlpha" "[#StrokeMaxAlpha]" "#@#\Variables\[#Preset]\Colors.inc"][!UpdateMeter VariableValue12][!Redraw][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue12 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue12][!Redraw]
InputNumber=1

 [VariableIcon13]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle13]
Meter=String
Text=Stroke Min Alpha
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription13]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[VariableValue13]
Meter=String
Text=[#StrokeMinAlpha]
MeterStyle=VarStringValue | RightPanel
LeftMouseUpAction=[!CommandMeasure "InputText13" "ExecuteBatch All"][!SetOption #CURRENTSECTION# FontColor "0,0,0,0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=
[InputText13]
Measure=Plugin
Plugin=InputText
SolidColor=[#s_RightPanelBackgroundColor]
FontColor=[#s_FontColor]
FontFace=[#s_FontFace]
FontSize=[#s_InputTextFontSize]
Disabled=
X=([VariableValue13:X])
Y=([VariableValue13:Y] + [#s_ValueYPadding])
H=[VariableValue13:H]
W=([#s_RightPanelW] - ([#s_VariableXPadding] * 2))
DynamicVariables=1
DefaultValue=[#StrokeMinAlpha]
Command1=[!SetVariable "StrokeMinAlpha" "$UserInput$"][!WriteKeyValue "Variables" "StrokeMinAlpha" "[#StrokeMinAlpha]" "#@#\Variables\[#Preset]\Colors.inc"][!UpdateMeter VariableValue13][!Redraw][#s_OnChangeAction]
OnDismissAction=[!SetOption VariableValue13 FontColor "[#s_FontColor]"][!UpdateMeter VariableValue13][!Redraw]
InputNumber=1

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


