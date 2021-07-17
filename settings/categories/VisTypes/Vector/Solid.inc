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
LeftMouseUpAction=[!WriteKeyValue Variables BarType "Solid" "#@#\Variables\[#Preset]\Vector.inc"][#ConstChangeAction][!Refresh]
[RadioString8Solid]
Meter=String
Text=Solid
Y=-1r
Padding=0,0,[#s_VariableXPadding],[#s_ValueYPadding]
MeterStyle=VarStringValue | VarColorString | RightPanel
InlinePattern=^$
InlineSetting=Weight | 600
LeftMouseUpAction=[!WriteKeyValue Variables BarType "Solid" "#@#\Variables\[#Preset]\Vector.inc"][#ConstChangeAction][!Refresh]

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
LeftMouseUpAction=[!WriteKeyValue Variables BarType "Gradient" "#@#\Variables\[#Preset]\Vector.inc"][#ConstChangeAction][!Refresh]
[RadioString8Gradient]
Meter=String
Text=Gradient
Y=-1r
Padding=0,0,[#s_VariableXPadding],[#s_ValueYPadding]
MeterStyle=VarStringValue | VarColorString | RightPanel
InlinePattern=^$
InlineSetting=Weight | 600
LeftMouseUpAction=[!WriteKeyValue Variables BarType "Gradient" "#@#\Variables\[#Preset]\Vector.inc"][#ConstChangeAction][!Refresh]
 [VariableIcon9]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=

 [VariableIcon1]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle1Title]
Meter=String
Text=Layer 1
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription1]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[ColorVariableValue1]
Meter=Shape
Shape=Ellipse [#s_ColorSize],[#s_ColorSize],[#s_ColorSize],[#s_ColorSize] | Fill Color [#Layer1Color] | StrokeWidth [#s_ColorStrokeWidth] | Extend Outline
Outline=Stroke Color [#s_ColorStrokeColor]
MeterStyle=VarColorValue | RightPanel
LeftMouseUpAction=[!CommandMeasure ColorPickerUI "Change('Layer1Color', '[&ColorPickerUI:sub('#@#Variables\[#Preset]\Vector\Solid.inc')]', '[&ColorPickerUI:sub('[#CURRENTCONFIG]')]')"][#ConstChangeAction]
Hidden=
[StringVariableValue1]
Meter=String
Text=[#Layer1Color]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!CommandMeasure ColorPickerUI "Change('Layer1Color', '[&ColorPickerUI:sub('#@#Variables\[#Preset]\Vector\Solid.inc')]', '[&ColorPickerUI:sub('[#CURRENTCONFIG]')]')"][#ConstChangeAction]
Hidden=
 [VariableIcon2]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle2Title]
Meter=String
Text=Layer 2
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription2]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[ColorVariableValue2]
Meter=Shape
Shape=Ellipse [#s_ColorSize],[#s_ColorSize],[#s_ColorSize],[#s_ColorSize] | Fill Color [#Layer2Color] | StrokeWidth [#s_ColorStrokeWidth] | Extend Outline
Outline=Stroke Color [#s_ColorStrokeColor]
MeterStyle=VarColorValue | RightPanel
LeftMouseUpAction=[!CommandMeasure ColorPickerUI "Change('Layer2Color', '[&ColorPickerUI:sub('#@#Variables\[#Preset]\Vector\Solid.inc')]', '[&ColorPickerUI:sub('[#CURRENTCONFIG]')]')"][#ConstChangeAction]
Hidden=
[StringVariableValue2]
Meter=String
Text=[#Layer2Color]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!CommandMeasure ColorPickerUI "Change('Layer2Color', '[&ColorPickerUI:sub('#@#Variables\[#Preset]\Vector\Solid.inc')]', '[&ColorPickerUI:sub('[#CURRENTCONFIG]')]')"][#ConstChangeAction]
Hidden=
 [VariableIcon3]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle3Title]
Meter=String
Text=Layer 3
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription3]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[ColorVariableValue3]
Meter=Shape
Shape=Ellipse [#s_ColorSize],[#s_ColorSize],[#s_ColorSize],[#s_ColorSize] | Fill Color [#Layer3Color] | StrokeWidth [#s_ColorStrokeWidth] | Extend Outline
Outline=Stroke Color [#s_ColorStrokeColor]
MeterStyle=VarColorValue | RightPanel
LeftMouseUpAction=[!CommandMeasure ColorPickerUI "Change('Layer3Color', '[&ColorPickerUI:sub('#@#Variables\[#Preset]\Vector\Solid.inc')]', '[&ColorPickerUI:sub('[#CURRENTCONFIG]')]')"][#ConstChangeAction]
Hidden=
[StringVariableValue3]
Meter=String
Text=[#Layer3Color]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!CommandMeasure ColorPickerUI "Change('Layer3Color', '[&ColorPickerUI:sub('#@#Variables\[#Preset]\Vector\Solid.inc')]', '[&ColorPickerUI:sub('[#CURRENTCONFIG]')]')"][#ConstChangeAction]
Hidden=
 [VariableIcon4]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle4Title]
Meter=String
Text=Layer 4
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription4]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden=
[ColorVariableValue4]
Meter=Shape
Shape=Ellipse [#s_ColorSize],[#s_ColorSize],[#s_ColorSize],[#s_ColorSize] | Fill Color [#Layer4Color] | StrokeWidth [#s_ColorStrokeWidth] | Extend Outline
Outline=Stroke Color [#s_ColorStrokeColor]
MeterStyle=VarColorValue | RightPanel
LeftMouseUpAction=[!CommandMeasure ColorPickerUI "Change('Layer4Color', '[&ColorPickerUI:sub('#@#Variables\[#Preset]\Vector\Solid.inc')]', '[&ColorPickerUI:sub('[#CURRENTCONFIG]')]')"][#ConstChangeAction]
Hidden=
[StringVariableValue4]
Meter=String
Text=[#Layer4Color]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!CommandMeasure ColorPickerUI "Change('Layer4Color', '[&ColorPickerUI:sub('#@#Variables\[#Preset]\Vector\Solid.inc')]', '[&ColorPickerUI:sub('[#CURRENTCONFIG]')]')"][#ConstChangeAction]
Hidden=