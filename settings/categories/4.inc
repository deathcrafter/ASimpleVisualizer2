[Rainmeter]
OnRefreshAction=[!UpdateMeasure FileCount][!UpdateMeasure FileViewParent][!Update][!Redraw]

[Variables]
Index=1

[FirstRightPanel]
Meter=String
Text=First
FontColor=0,0,0,0
MeterStyle=FirstItem | RightPanel
Y=[#s_ScrollRightPanel]
[CategoryIcon4]
Meter=String
Text=[\xE81E]
MeterStyle=CategoryIcon | RightPanel

[Title4]
Meter=String
Text=Image Underlay 
MeterStyle=CategoryTitle | RightPanel
W=([#s_RightPanelW] - [CategoryIcon4:W])

[CategoryDescription4]
Meter=String
Text=Add an image underlay to your visualizer 
MeterStyle=VarDescription | ThickDescription | RightPanel

[CategoryTitleSeparator4]
Meter=Image
MeterStyle=CategoryTitleSeparator | RightPanel

[DragNDrop]
Measure=Plugin
Plugin=Drag&Drop
Action=Copy
FilePath=#@#UserImages
OnDropAction=[!WriteKeyValue Variables ImageUnderlayName "#*@*#UserImages\$Name$.$Type$" "#@#Variables\Main.inc"][!WriteKeyValue Variables ImageUnderlay "1" "#@#Variables\Main.inc"][!Refresh "[#ROOTCONFIG]"][!Refresh]

[PreviewContainer]
Meter=Shape
X=63
Y=100
Shape=Rectangle 0,0,352,198,10 | Fill Color 303030 | StrokeWidth 0

[PreviewImage]
Meter=Image
H=198
W=352
ImageName=[#ImageUnderlayName]
PreserveAspectRatio=2
Greyscale=(1-[#ImageUnderlay])
SolidColor=000000
DynamicVariables=1
Container=PreviewContainer

 [VariableIcon1]
Meter=String
X=r
Y=10R
Text=
MeterStyle=VariableIcon
Hidden=
[VariableTitle1]
Meter=String
X=r
Y=10R
Text=
MeterStyle=VarTitle
[VariableDescription1]
Meter=String
X=r
Y=10R
Text=Drag and drop an image to set as image underlay
MeterStyle=VarDescription

[ToggleOff1]
Meter=Shape
X=10r
Shape=Line 0,0,([#s_ToggleLength]),0 | Extend Line
Shape2=Ellipse ([#s_TogglePadding]/2),0,(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2),(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2) | Extend Circle
Circle=StrokeWidth 0 | Fill Color [#s_RightPanelBackgroundColor]
Line=StrokeWidth [#s_ToggleSize] | Stroke Color [#s_FontColor] | StrokeStartCap Round | StrokeEndCap Round
Hidden=([#ImageUnderlay])
Y=([VariableDescription1:Y] + [VariableDescription1:H] + ([#s_ToggleSize] / 2) + [#s_ValueYPadding])
MeterStyle=VarToggleValue
LeftMouseUpAction=[!WriteKeyValue Variables "ImageUnderlay" 1 "#@#Variables\Main.inc"][!SetVariable "ImageUnderlay" 1][!Update][!Redraw][!Refresh "[#ROOTCONFIG]"]

[ToggleOn1]
Meter=Shape
X=10r
Shape=Line 0,0,([#s_ToggleLength]),0 | Extend Line
Shape2=Ellipse (([#s_ToggleLength]) - ([#s_TogglePadding]/2)),0,(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2),(([#s_ToggleSize] - ([#s_TogglePadding] * 2))/2) | Extend Circle
Circle=StrokeWidth 0 | Fill Color [#s_RightPanelBackgroundColor]
Line=StrokeWidth [#s_ToggleSize] | Stroke Color [#s_ToggleActiveColor] | StrokeStartCap Round | StrokeEndCap Round
Hidden=([#ImageUnderlay] - 1)
Y=([VariableDescription1:Y] + [VariableDescription1:H] + ([#s_ToggleSize] / 2) + [#s_ValueYPadding])
MeterStyle=VarToggleValue
LeftMouseUpAction=[!WriteKeyValue Variables "ImageUnderlay" 0 "#@#Variables\Main.inc"][!SetVariable "ImageUnderlay" 0][!Update][!Redraw][!Refresh "[#ROOTCONFIG]"]

[FileCount]
Measure=Plugin
Plugin=FileView
Path="#@#UserImages\"
Type=FileCount

[FileViewParent]
Measure=Plugin
Plugin=FileView
Path="#@#UserImages"
ShowDotDot=0
ShowFolder=0
Count=[FileCount]
DynamicVariables=1

[FileView1]
Measure=Plugin
Plugin=FileView
Path=[FileViewParent]
Type=FilePath
Index=#Index#
DynamicVariables=1
[FileView2]
Measure=Plugin
Plugin=FileView
Path=[FileViewParent]
Type=FilePath
Index=(#Index#+1)
DynamicVariables=1
[FileView3]
Measure=Plugin
Plugin=FileView
Path=[FileViewParent]
Type=FilePath
Index=(#Index#+2)
DynamicVariables=1
[FileView4]
Measure=Plugin
Plugin=FileView
Path=[FileViewParent]
Type=FilePath
Index=([#Index]+3)
DynamicVariables=1

[ImageView1]
Meter=Image
ImageName=[FileView1]
X=-11r
Y=380
W=80
H=45
SolidColor=30303030
DynamicVariables=1
PreserveAspectRatio=1
MouseScrollDownAction=[!SetVariable Index "(Clamp([#Index]+1, 1, Max([&FileCount]-3, 0)))"][!Update][!Redraw]
MouseScrollUpAction=[!SetVariable Index "(Clamp([#Index]-1, 1, Max([&FileCount]-3, 0)))"][!Update][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables ImageUnderlayName """[FileView1]""" "#@#Variables\Main.inc"][!Refresh "#ROOTCONFIG#"][!Refresh]
Hidden=([FileCount]=0 ? 1 : 0)

[ImageView2]
Meter=Image
ImageName=[FileView2]
X=5R
Y=r
W=80
H=45
SolidColor=30303030
DynamicVariables=1
PreserveAspectRatio=1
MouseScrollDownAction=[!SetVariable Index "(Clamp([#Index]+1, 1, Max([&FileCount]-3, 0)))"][!Update][!Redraw]
MouseScrollUpAction=[!SetVariable Index "(Clamp([#Index]-1, 1, Max([&FileCount]-3, 0)))"][!Update][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables ImageUnderlayName """[FileView2]""" "#@#Variables\Main.inc"][!Refresh "#ROOTCONFIG#"][!Refresh]
Hidden=([FileCount]<2 ? 1 : 0)

[ImageView3]
Meter=Image
ImageName=[FileView3]
Hidden=([FileCount]<3 ? 1 : 0)
MeterStyle=ImageView2
MouseScrollDownAction=[!SetVariable Index "(Clamp([#Index]+1, 1, Max([&FileCount]-3, 0)))"][!Update][!Redraw]
MouseScrollUpAction=[!SetVariable Index "(Clamp([#Index]-1, 1, Max([&FileCount]-3, 0)))"][!Update][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables ImageUnderlayName "[FileView3]" "#@#Variables\Main.inc"][!Refresh "#ROOTCONFIG#"][!Refresh]

[ImageView4]
Meter=Image
ImageName=[FileView4]
Hidden=([FileCount]<4 ? 1 : 0)
MeterStyle=ImageView2
MouseScrollDownAction=[!SetVariable Index "(Clamp([#Index]+1, 1, Max([&FileCount]-3, 0)))"][!Update][!Redraw]
MouseScrollUpAction=[!SetVariable Index "(Clamp([#Index]-1, 1, Max([&FileCount]-3, 0)))"][!Update][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables ImageUnderlayName "[FileView4]" "#@#Variables\Main.inc"][!Refresh "#ROOTCONFIG#"][!Refresh]

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


