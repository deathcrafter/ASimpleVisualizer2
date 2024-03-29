[FirstLeftPanel]
Meter=String
Text=First
FontColor=0,0,0,0
MeterStyle=FirstItem | LeftPanel
Y=[#s_ScrollLeftPanel]
[ListIcon0]
Meter=String
Text=[\xE713]
Y=[#s_ListAboutTopPadding]R
MeterStyle=ListIcon | ListAboutIcon | LeftPanel
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 0 "#ROOTCONFIGPATH#settings\includes\Variables.inc"][!Refresh]
[ListItem0]
Meter=String
Text=Settings 
MeterStyle=ListItem | ListAboutItem | LeftPanel
W=([#s_LeftPanelW] - ([ListIcon0:W] + [#s_ListRightPadding]))
FontWeight=([#s_CurrentCategory] = 0) ? [#s_SelectedFontWeight] : [#s_VariableTitleFontWeight]
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 0 "#ROOTCONFIGPATH#settings\includes\Variables.inc"][!Refresh]
ToolTipTitle=Settings 
ToolTipText=

[ListIcon1]
Meter=String
Text=[\xE771]
MeterStyle=ListIcon | ListTopicIcon | LeftPanel
[ListItem1]
Meter=String
Text=Personalization 
MeterStyle=ListItem | ListTopicItem | LeftPanel
W=([#s_LeftPanelW] - ([ListIcon1:W] + [#s_ListRightPadding]))
FontWeight=([#s_CurrentCategory] = 1) ? [#s_SelectedFontWeight] : [#s_FontWeight]
ToolTipTitle=Personalization 
ToolTipText=

[ListIcon2]
Meter=String
Text=[\xF61F]
MeterStyle=ListIcon | ListDefaultIcon | LeftPanel
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 2 "#ROOTCONFIGPATH#settings\includes\Variables.inc"][!Refresh]
[ListItem2]
Meter=String
Text=Visualizer 
MeterStyle=ListItem | ListDefaultItem | LeftPanel
W=([#s_LeftPanelW] - ([ListIcon2:W] + [#s_ListRightPadding]))
FontWeight=([#s_CurrentCategory] = 2) ? [#s_SelectedFontWeight] : [#s_FontWeight]
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 2 "#ROOTCONFIGPATH#settings\includes\Variables.inc"][!Refresh]
ToolTipTitle=Visualizer 
ToolTipText=


[ListIcon3]
Meter=String
Text=[\xF0B9]
MeterStyle=ListIcon | ListDefaultIcon | LeftPanel
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 3 "#ROOTCONFIGPATH#settings\includes\Variables.inc"][!Refresh]
[ListItem3]
Meter=String
Text=Extra 
MeterStyle=ListItem | ListDefaultItem | LeftPanel
W=([#s_LeftPanelW] - ([ListIcon3:W] + [#s_ListRightPadding]))
FontWeight=([#s_CurrentCategory] = 3) ? [#s_SelectedFontWeight] : [#s_FontWeight]
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 3 "#ROOTCONFIGPATH#settings\includes\Variables.inc"][!Refresh]
ToolTipTitle=Extra 
ToolTipText=


[ListIcon4]
Meter=String
Text=[\xE81E]
MeterStyle=ListIcon | ListDefaultIcon | LeftPanel
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 4 "#ROOTCONFIGPATH#settings\includes\Variables.inc"][!Refresh]
[ListItem4]
Meter=String
Text=Image Underlay 
MeterStyle=ListItem | ListDefaultItem | LeftPanel
W=([#s_LeftPanelW] - ([ListIcon4:W] + [#s_ListRightPadding]))
FontWeight=([#s_CurrentCategory] = 4) ? [#s_SelectedFontWeight] : [#s_FontWeight]
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 4 "#ROOTCONFIGPATH#settings\includes\Variables.inc"][!Refresh]
ToolTipTitle=Image Underlay 
ToolTipText=


[ListIcon5]
Meter=String
Text=[\xE790]
MeterStyle=ListIcon | ListDefaultIcon | LeftPanel
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 5 "#ROOTCONFIGPATH#settings\includes\Variables.inc"][!Refresh]
[ListItem5]
Meter=String
Text=Colors 
MeterStyle=ListItem | ListDefaultItem | LeftPanel
W=([#s_LeftPanelW] - ([ListIcon5:W] + [#s_ListRightPadding]))
FontWeight=([#s_CurrentCategory] = 5) ? [#s_SelectedFontWeight] : [#s_FontWeight]
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 5 "#ROOTCONFIGPATH#settings\includes\Variables.inc"][!Refresh]
ToolTipTitle=Colors 
ToolTipText=


[ListIcon6]
Meter=String
Text=[\xF4C3]
MeterStyle=ListIcon | ListTopicIcon | LeftPanel
[ListItem6]
Meter=String
Text=Equalizer Settings 
MeterStyle=ListItem | ListTopicItem | LeftPanel
W=([#s_LeftPanelW] - ([ListIcon6:W] + [#s_ListRightPadding]))
FontWeight=([#s_CurrentCategory] = 6) ? [#s_SelectedFontWeight] : [#s_FontWeight]
ToolTipTitle=Equalizer Settings 
ToolTipText=

[ListIcon7]
Meter=String
Text=[\xE95B]
MeterStyle=ListIcon | ListDefaultIcon | LeftPanel
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 7 "#ROOTCONFIGPATH#settings\includes\Variables.inc"][!Refresh]
[ListItem7]
Meter=String
Text=Device 
MeterStyle=ListItem | ListDefaultItem | LeftPanel
W=([#s_LeftPanelW] - ([ListIcon7:W] + [#s_ListRightPadding]))
FontWeight=([#s_CurrentCategory] = 7) ? [#s_SelectedFontWeight] : [#s_FontWeight]
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 7 "#ROOTCONFIGPATH#settings\includes\Variables.inc"][!Refresh]
ToolTipTitle=Device 
ToolTipText=


[ListIcon8]
Meter=String
Text=[\xF0ED]
MeterStyle=ListIcon | ListDefaultIcon | LeftPanel
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 8 "#ROOTCONFIGPATH#settings\includes\Variables.inc"][!Refresh]
[ListItem8]
Meter=String
Text=AudioAnalyzer 
MeterStyle=ListItem | ListDefaultItem | LeftPanel
W=([#s_LeftPanelW] - ([ListIcon8:W] + [#s_ListRightPadding]))
FontWeight=([#s_CurrentCategory] = 8) ? [#s_SelectedFontWeight] : [#s_FontWeight]
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 8 "#ROOTCONFIGPATH#settings\includes\Variables.inc"][!Refresh]
ToolTipTitle=AudioAnalyzer 
ToolTipText=

[ListIcon9]
Meter=String
Text=[\xE771]
MeterStyle=ListIcon | ListTopicIcon | LeftPanel
[ListItem9]
Meter=String
Text=Personalization 
MeterStyle=ListItem | ListTopicItem | LeftPanel
W=([#s_LeftPanelW] - ([ListIcon9:W] + [#s_ListRightPadding]))
FontWeight=([#s_CurrentCategory] = 9) ? [#s_SelectedFontWeight] : [#s_FontWeight]
ToolTipTitle=Personalization 
ToolTipText=

[ListIcon10]
Meter=String
Text=[\xE74C]
MeterStyle=ListIcon | ListDefaultIcon | LeftPanel
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 10 "#ROOTCONFIGPATH#settings\includes\Variables.inc"][!Refresh]
[ListItem10]
Meter=String
Text=Presets
MeterStyle=ListItem | ListDefaultItem | LeftPanel
W=([#s_LeftPanelW] - ([ListIcon8:W] + [#s_ListRightPadding]))
FontWeight=([#s_CurrentCategory] = 10) ? [#s_SelectedFontWeight] : [#s_FontWeight]
LeftMouseUpAction=[!WriteKeyValue Variables s_CurrentCategory 10 "#ROOTCONFIGPATH#settings\includes\Variables.inc"][!Refresh]
ToolTipTitle=AudioAnalyzer 
ToolTipText=

[LastLeftPanel]
Meter=String
Text=Last
FontColor=255,0,0,0
MeterStyle=LastItem | LeftPanel

[ScrollDownLeftPanel]
Measure=Calc
Formula=[#s_ScrollLeftPanel] - [#s_ScrollSpeed]
IfCondition=([LastLeftPanel:Y] > [#s_ScrollTreshold])
IfTrueAction=[!SetVariable "s_ScrollLeftPanel" "[&ScrollDownLeftPanel]"][!DisableMeasure "ScrollDownLeftPanel"][!Update][!Redraw]
IfFalseAction=[!DisableMeasure "ScrollDownLeftPanel"]
IfConditionMode=1
Disabled=1
DynamicVariables=1

[ScrollUpLeftPanel]
Measure=Calc
Formula=[#s_ScrollLeftPanel] + [#s_ScrollSpeed]
IfCondition=([FirstLeftPanel:Y] < 0)
IfTrueAction=[!SetVariable "s_ScrollLeftPanel" "[&ScrollUpLeftPanel]"][!DisableMeasure "ScrollUpLeftPanel"][!Update][!Redraw]
IfFalseAction=[!DisableMeasure "ScrollUpLeftPanel"]
IfConditionMode=1
Disabled=1
DynamicVariables=1

[CreditIcon]
FontSize=[#s_CreditIconSize]
AntiAlias=1
Meter=String
Text=[\xF259]
FontWeight=400
AccurateText=1
Padding=0,0,0,0
DynamicVariables=1
SolidColor=0,0,0,1
MeterStyle=LeftPanel
FontColor=[#s_FontColor]
X=[#s_CreditIconPadding]
FontWeight=[#s_FontWeight]
FontFace=Segoe MDL2 Assets
ToolTipTitle=Generated by Settings
ToolTipText=https://github.com/sceleri/settings
LeftMouseUpAction=["https://github.com/sceleri/settings"]
Y=([#s_PanelH] - [CreditIcon:H] - [#s_CreditIconPadding])
