 [VariableIcon0]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle0]
Meter=String
Text=Solid 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription0]
Meter=String
Text=Solid colors for vector layers 
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
LeftMouseUpAction=[!CommandMeasure ColorPickerUI "Change('Layer1Color', '[&ColorPickerUI:sub('#@#Variables\Original\Vector\Solid.inc')]', '[&ColorPickerUI:sub('[#CURRENTCONFIG]')]')"]
Hidden=
[StringVariableValue1]
Meter=String
Text=[#Layer1Color]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!CommandMeasure ColorPickerUI "Change('Layer1Color', '[&ColorPickerUI:sub('#@#Variables\Original\Vector\Solid.inc')]', '[&ColorPickerUI:sub('[#CURRENTCONFIG]')]')"]
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
LeftMouseUpAction=[!CommandMeasure ColorPickerUI "Change('Layer2Color', '[&ColorPickerUI:sub('#@#Variables\Original\Vector\Solid.inc')]', '[&ColorPickerUI:sub('[#CURRENTCONFIG]')]')"]
Hidden=
[StringVariableValue2]
Meter=String
Text=[#Layer2Color]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!CommandMeasure ColorPickerUI "Change('Layer2Color', '[&ColorPickerUI:sub('#@#Variables\Original\Vector\Solid.inc')]', '[&ColorPickerUI:sub('[#CURRENTCONFIG]')]')"]
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
LeftMouseUpAction=[!CommandMeasure ColorPickerUI "Change('Layer3Color', '[&ColorPickerUI:sub('#@#Variables\Original\Vector\Solid.inc')]', '[&ColorPickerUI:sub('[#CURRENTCONFIG]')]')"]
Hidden=
[StringVariableValue3]
Meter=String
Text=[#Layer3Color]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!CommandMeasure ColorPickerUI "Change('Layer3Color', '[&ColorPickerUI:sub('#@#Variables\Original\Vector\Solid.inc')]', '[&ColorPickerUI:sub('[#CURRENTCONFIG]')]')"]
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
LeftMouseUpAction=[!CommandMeasure ColorPickerUI "Change('Layer4Color', '[&ColorPickerUI:sub('#@#Variables\Original\Vector\Solid.inc')]', '[&ColorPickerUI:sub('[#CURRENTCONFIG]')]')"]
Hidden=
[StringVariableValue4]
Meter=String
Text=[#Layer4Color]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!CommandMeasure ColorPickerUI "Change('Layer4Color', '[&ColorPickerUI:sub('#@#Variables\Original\Vector\Solid.inc')]', '[&ColorPickerUI:sub('[#CURRENTCONFIG]')]')"]
Hidden=