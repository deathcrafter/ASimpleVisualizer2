[Variables]
;@Default | Name Visualizer Settings | Icon [\xF61F]

;?String | Name Bar Type
BarType=mirrorXY

;?Integer | Name BarCount | Description Number of Bars
Bands=50

;?Integer | Name Height | Description Height of Bars
Height=150

;?Integer | Name Bar Width | Description Width of individual Bars
BarWidth=5

;?Integer | Name Bar Gap | Description Gap between consecutive Bars
BarGap=3

;?Integer | Name StrokeWidth | Description Stroke width of Bars
BarStrokeWidth=2

;?Integer | Name Corner Rounding | Description How rounded the bars are
CornerRounding=2

;?Integer | Name Levitation | Description The amount bars go up while visualizing
Levitate=0

;?Toggle | Name Flip
flipX=0

;?Toggle | Name Flip
flipY=0

;?Integer | Name Angle | Description Angle of visualizer
Angle=0

;?Integer | Name Minimum Height | Description Minimun height of Bars
MinimumHeight=1

;?Integer | Name Update Rate | Description Update Rate of visualizer(Value between 16 to 25 recommended)
UpdateRate=16

WindowFunction=Kaiser

;?Integer | Name Maximum Sensititvity
MaxSensitivity=45

;?Integer | Name Minimum Sensitivity
MinSensitivity=9

;?Integer | Name Rising Delay | Description in milliseconds
Attack=0

;?Integer | Name Falling Delay | Description in milliseconds
Decay=0

;?Integer | Name Smoothing Level | Description How smooth your visuallizer is
BlurRadius=1

Channel=Auto

AnalyzerPort=DefaultOutput

@includeBarType=#@#Variables\Bar\[#BarType].inc