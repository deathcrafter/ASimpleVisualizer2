[Background]
Meter=Shape
Shape=Rectangle 0,0,(#s_RightPanelW# + #s_LeftPanelW#),(#s_PanelH#),(#s_BackgroundRounding#) | Extend BackgroundModifiers
Shape2=Rectangle (#s_LeftPanelW#),0,(#s_RightPanelW#),(#s_PanelH#),(#s_BackgroundRounding#) | Extend PanelModifiers
Shape3=Rectangle (#s_LeftPanelW#),0,(#s_BackgroundRounding#),(#s_PanelH#) | Extend PanelModifiers
PanelModifiers=Fill Color #s_RightPanelBackgroundColor# | StrokeWidth 0
BackgroundModifiers=Fill Color #s_LeftPanelBackgroundColor# | StrokeWidth 0

[LeftPanelContainer]
Meter=Shape
Shape=Rectangle 0,0,(#s_LeftPanelW#),(#s_PanelH#),[#s_BackgroundRounding] | Extend PanelModifiers
PanelModifiers=Fill Color 255,255,255 | StrokeWidth 0
MouseScrollDownAction=[!EnableMeasure "ScrollDownLeftPanel"][!UpdateMeasure "ScrollDownLeftPanel"]
MouseScrollUpAction=[!EnableMeasure "ScrollUpLeftPanel"][!UpdateMeasure "ScrollUpLeftPanel"]
MouseActionCursor=0

[RightPanelContainer]
Meter=Shape
Shape=Rectangle 0,0,(#s_RightPanelW#),(#s_PanelH#),(#s_BackgroundRounding#) | Extend PanelModifiers
PanelModifiers=Fill Color 255,255,255 | StrokeWidth 0
X=(#s_LeftPanelW#)
MouseScrollDownAction=[!EnableMeasure "ScrollDownRightPanel"][!UpdateMeasure "ScrollDownRightPanel"]
MouseScrollUpAction=[!EnableMeasure "ScrollUpRightPanel"][!UpdateMeasure "ScrollUpRightPanel"]
MouseActionCursor=0

[CategoryListSelectedIndicator]
Meter=Shape
Shape=Rectangle 0,[#s_SelectorPadding],([#s_SelectorWidth] * 2),([ListItem[#s_CurrentCategory]:H] - ([#s_SelectorPadding] * 2)),[#s_SelectorRounding] | Extend Line, Square
Line=StrokeWidth 0
Square=Fill Color [#s_SelectedColor]
X=(-[#s_SelectorWidth])
Y=([ListIcon[#s_CurrentCategory]:Y])
Container=LeftPanelContainer
DynamicVariables=1

; Scroll indicator. This can be optimized a lot

[MaxScroll]
Measure=Calc 
Formula=([LastRightPanel:Y] + ([#s_PanelH] - [#s_ScrollTreshold]) - [#s_PanelH])
DynamicVariables=1
OnUpdateAction=!PauseMeasure MaxScroll

[ScrollerHeight]
Measure=Calc 
Formula=([#s_ScrollIndicatorMaxHeight]) * (([LastRightPanel:Y] + ([#s_PanelH] - [#s_ScrollTreshold]) - [#s_PanelH]) / [LastRightPanel:Y])
DynamicVariables=1
OnUpdateAction=!PauseMeasure ScrollerHeight

[ScrollLeft]
Measure=Calc 
Formula=([#s_ScrollIndicatorMaxHeight]) - ScrollerHeight
DynamicVariables=1
OnUpdateAction=!PauseMeasure ScrollerHeight

[CurrScroll]
Measure=Calc 
Formula=Clamp((-[#s_ScrollRightPanel] / MaxScroll),0,1)
DynamicVariables=1

[CategoryCurrentScroll]
Measure=Calc
Formula=ScrollLeft * CurrScroll
DynamicVariables=1

[CategoryScrollIndicator]
Meter=Shape
Shape=Rectangle 0,0,[#s_ScrollIndicatorWidth],[#s_ScrollIndicatorMaxHeight],[#s_ScrollIndicatorRounding] | Fill Color [#s_ScrollIndicatorBackgroundColor] | StrokeWidth 0
Shape2=Rectangle 0,[CategoryCurrentScroll],[#s_ScrollIndicatorWidth],[ScrollerHeight],[#s_ScrollIndicatorRounding] | Fill Color [#s_ScrollIndicatorColor] | StrokeWidth 0
Y=[#s_scrollIndicatorYPadding]
X=([#s_RightPanelW] - ([#s_ScrollIndicatorWidth] + [#s_scrollIndicatorXPadding]))
Hidden=([ScrollerHeight] > 0) ? 0 : 1
Container=RightPanelContainer
DynamicVariables=1

[LeftPanel]
Container=LeftPanelContainer

[RightPanel]
Container=RightPanelContainer

[FirstItem]
H=0
W=0
X=0
SolidColor=0,0,0,0
DynamicVariables=1

[LastITem]
H=0
W=0
Y=0R
X=0
SolidColor=0,0,0,0

