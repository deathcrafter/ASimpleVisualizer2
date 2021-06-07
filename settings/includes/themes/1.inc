[Variables]

;@About | Name Theme 2 [#s_Theme1Name]
;@Topic | Name Customization
;@ | Name Background
;?Integer | Name Left panel width | Description 
s_LeftPanelW=200
;?Integer | Name Right panel width | Description 
s_RightPanelW=500
;?Integer | Name Skin height | Description 
s_PanelH=600
;?Color | Name Right panel background color | Description 
s_RightPanelBackgroundColor=26,26,38,125
;?Color | Name Left panel background color | Description 
s_LeftPanelBackgroundColor=28,28,43,125
;?Integer | Name Background corner radius | Description 
s_BackgroundRounding=0
;? | Name FrostedGlass mode | Description A certain Windows 10 update made Acrylic lag a lot, so it's not recommended#CRLF#Available modes: Acrylic, Blur, None
s_FrostedGlassMode=Blur
;? | Name FrostedGlass border | Description All, None, Left, Right, Top and Bottom. Can be combined with pipes
s_FrostedGlassBorders=None

;@ | Name Font
;? | Name Font face | Description 
s_FontFace=Segoe UI
;? | Name Icon font face | Description 
s_IconFontFace=Segoe MDL2 Assets
;?Color | Name Font color | Description 
s_FontColor=235,235,235
;?Integer | Name Font size 1 | Description Used for category titles
s_FontSize1=20
;?Integer | Name Font size 2 | Description Used for variable titles
s_FontSize2=16
;?Integer | Name Font size 3 | Description Used for variable values
s_FontSize3=12
s_InputTextFontSize=[#s_FontSize3]
;?Integer | Name Font size 4 | Description Used for descriptions
s_FontSize4=10
;?Integer | Name Font size 5 | Description Unused (for now)
s_FontSize5=8
;?Integer | Name Selected item font weight | Description 
s_SelectedFontWeight=500
;?Integer | Name Font weight | Description 
s_FontWeight=400

;@ | Name Scroll indicator
;?Integer | Name Scroll indicator Y padding | Description uses s_ValueYPadding | Hidden 1
s_scrollIndicatorYPadding=[#s_ValueYPadding]
s_ScrollIndicatorMaxHeight=([#s_PanelH] - ([#s_scrollIndicatorYPadding] * 2))
;?Integer | Name Scroll indicator X padding | Description 
s_scrollIndicatorXPadding=5
;?Integer | Name Scroll indicator width | Description 
s_ScrollIndicatorWidth=5
;?Color | Name Scroll indicator background color | Description 
s_ScrollIndicatorBackgroundColor=0,0,0,0
;?Color | Name Scroll indicator color | Description 
s_ScrollIndicatorColor=64,64,64
;?Integer | Name Scroll indicator rounding | Description 
s_ScrollIndicatorRounding=5
;?Info | Name Filler variable 0 | Description This is here to show the scroll indicator
 = 
;?Info | Name Filler variable 1 | Description This is here to show the scroll indicator
 = 
;?Info | Name Filler variable 2 | Description This is here to show the scroll indicator
 = 
;?Info | Name Filler variable 3 | Description This is here to show the scroll indicator
 = 
;?Info | Name Filler variable 4 | Description This is here to show the scroll indicator
 = 
;?Info | Name Filler variable 5 | Description This is here to show the scroll indicator
 = 

;@ | Name Selected indicator
;?Color | Name Selected color | Description Most selected items use this color
s_SelectedColor=1671D9
;?Integer | Name Indicator height padding | Description 
s_SelectorPadding=8
;?Integer | Name Indicator width  | Description 
s_SelectorWidth=3
;?Integer | Name Indicator rounding | Description default: [#s_SelectorWidth]
s_SelectorRounding=[#s_SelectorWidth]

;@Topic | Name Categories
;@ | Name Category
;? | Name Title icon nudge | Description Fixes the literal 1px offset caused by the title and description using different font sizes
s_TitleIconNudge=-1
;?Integer | Name Category title top and bottom padding | Description 
s_CategoryTitleXPadding=20
;?Integer | Name Category title top padding | Description 
s_CategoryTitleTopPadding=35
;?Integer | Name Category title bottom padding | Description 
s_CategoryTitleBottomPadding=20
;?Integer | Name Category title font weight | Description 
s_CategoryTitleFontWeight=500
;?Integer | Name Category description font weight | Description 
s_CategoryDescriptionFontWeight=500
;? | Name Category icon nudge | Description Visually center the category icon
s_CategoryIconNudge=5
s_CategoryIconTopPadding=([#s_CategoryTitleTopPadding] + [#s_CategoryIconNudge])

;@ | Name Category list
;?Integer | Name About item top padding | Description 
s_ListAboutTopPadding=35
;?Integer | Name About item left padding | Description 
s_ListAboutLeftPadding=20
;?Integer | Name Default item left padding | Description 
s_ListDefaultLeftPadding=35
;?Integer | Name Topic item left padding | Description 
s_ListTopicLeftPadding=20
;?Integer | Name List item top and bottom padding | Description 
s_ListYPadding=7
;? | Name List item right padding | Description Used for width calculations for ClipString=2
s_ListRightPadding=10
;?Info | Name Settings credit icon padding | Description Move the Settings link/credit icon
5=https://www.youtube.com/watch?v=dQw4w9WgXcQ
s_CreditIconPadding=5
s_CreditIconSize=12

;@Topic | Name Variables
;@ | Name Variable
;?Integer | Name Variable title font weight | Description s_VariableTitleFontWeight
s_VariableTitleFontWeight=400
;?Integer | Name Variable value meter top and bottom padding | Description s_ValueYPadding
s_ValueYPadding=5
;?Integer | Name Variable item left and right padding | Description s_VariableXPadding (applies for variable titles, descriptions and values)
s_VariableXPadding=20
;?Toggle | Name Indent variables | Description Not implemented
s_IndentVariables=1

;@ | Name Color
;?Integer | Name Color circle radius | Description s_ColorSize
s_ColorSize=15
;?Integer | Name Color circle stroke width | Description s_ColorStrokeWidth
s_ColorStrokeWidth=1
;?Integer | Name Color circle stroke width on hover | Description s_ColorStrokeWidthSelected
s_ColorStrokeWidthSelected=2
;?Color | Name Color circle stroke color | Description s_ColorStrokeColor (will change to s_Selected when hovered)
s_ColorStrokeColor=200,200,200
;?Integer | Name Gap between the circle and the string | Description s_ColorStringLeftPadding
s_ColorStringLeftPadding=10

;@ | Name Toggle
;?Integer | Name Toggle height | Description s_ToggleSize
s_ToggleSize=20
;?Integer | Name Toggle width | Description s_ToggleLength
s_ToggleLength=25
;?Integer | Name Toggle internal padding | Description s_TogglePadding
s_TogglePadding=2.5
;?Info | Name TODO | Link 0
More variables for Toggle customization=
s_ToggleActiveColor=[#s_SelectedColor]
s_ToggleInactiveColor=[#s_RightPanelBackgroundColor]

