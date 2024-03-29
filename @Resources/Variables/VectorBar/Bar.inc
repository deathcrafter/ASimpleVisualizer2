[Variables]
;@Default | Name Visualizer Settings | Icon [\xF61F]

;?String | Name Dummy
Dummy=Dummy

;?RadioButton | Name Bar Type | Options Normal,normal; MirrorX,mirrorX; MirrorY,mirrorY; MirrorXY,mirrorXY; Reflection,reflection 
BarType=mirrorXY    

;?Integer | Name BarCount | Description Number of Bars
Bands=40

;?Integer | Name Height | Description Height of Bars
Height=0

;?Integer | Name Bar Width | Description Width of individual Bars
BarWidth=25

;?Integer | Name Bar Gap | Description Gap between consecutive Bars
BarGap=0

;?Integer | Name StrokeWidth | Description Stroke width of Bars
BarStrokeWidth=0

;?Integer | Name Corner Rounding | Description How rounded the bars are
CornerRounding=0

;?Integer | Name Levitation | Description The amount bars go up while visualizing
Levitate=5

;?Integer | Name Angle | Description Angle of visualizer
Angle=0

;?Integer | Name Minimum Height | Description Minimun height of Bars
MinimumHeight=28

@includeBarType=Bar\[#BarType].inc
