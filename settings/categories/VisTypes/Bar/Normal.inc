 [VariableIcon0]
Meter=String
Text=
MeterStyle=VariableIcon | RightPanel
Hidden=
[VariableTitle0]
Meter=String
Text=Normal 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription0]
Meter=String
Text=Settings for Normal 
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
Text=Flip 
MeterStyle=VarTitle | RightPanel
Hidden=
[VariableDescription1]
Meter=String
Text=
MeterStyle=VarDescription | RightPanel
Hidden= 
[MeasureList1FlipX]
Measure=Calc
Formula=[#flipX]
DynamicVariables=1
IfEqualValue=1
IfEqualAction=[!SetOption "ListCheck1FlipX" Text "[\xE73A]"][!Update][!Redraw]
IfBelowValue=1
IfBelowAction=[!SetOption "ListCheck1FlipX" Text "[\xE739]"][!Update][!Redraw]
[ListCheck1FlipX]
Meter=String
Text=[\xE739]
FontSize=15
MeterStyle=VariableIcon | RightPanel
DynamicVariables=1
LeftMouseUpAction=[!SetVariable flipX "(1-[#flipX])"][!WriteKeyValue Variables flipX "[#flipX]" "#@#\Variables\[#Preset]\Bar\Normal.inc"][!UpdateMeasure "MeasureList1FlipX"][!Redraw][#s_OnChangeAction]
[ListString1FlipX]
Meter=String
Text=FlipX
Y=-1r
Padding=0,0,[#s_VariableXPadding],[#s_ValueYPadding]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!SetVariable flipX "(1-[#flipX])"][!WriteKeyValue Variables flipX "[#flipX]" "#@#\Variables\[#Preset]\Bar\Normal.inc"][!UpdateMeasure "MeasureList1FlipX"][!Redraw][#s_OnChangeAction]
 
[MeasureList1FlipY]
Measure=Calc
Formula=[#flipY]
DynamicVariables=1
IfEqualValue=1
IfEqualAction=[!SetOption "ListCheck1FlipY" Text "[\xE73A]"][!Update][!Redraw]
IfBelowValue=1
IfBelowAction=[!SetOption "ListCheck1FlipY" Text "[\xE739]"][!Update][!Redraw]
[ListCheck1FlipY]
Meter=String
Text=[\xE739]
FontSize=15
MeterStyle=VariableIcon | RightPanel
DynamicVariables=1
LeftMouseUpAction=[!SetVariable flipY "(1-[#flipY])"][!WriteKeyValue Variables flipY "[#flipY]" "#@#\Variables\[#Preset]\Bar\Normal.inc"][!UpdateMeasure "MeasureList1FlipY"][!Redraw][#s_OnChangeAction]
[ListString1FlipY]
Meter=String
Text=FlipY
Y=-1r
Padding=0,0,[#s_VariableXPadding],[#s_ValueYPadding]
MeterStyle=VarStringValue | VarColorString | RightPanel
LeftMouseUpAction=[!SetVariable flipY "(1-[#flipY])"][!WriteKeyValue Variables flipY "[#flipY]" "#@#\Variables\[#Preset]\Bar\Normal.inc"][!UpdateMeasure "MeasureList1FlipY"][!Redraw][#s_OnChangeAction]