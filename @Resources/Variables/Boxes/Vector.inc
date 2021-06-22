[Variables]

;@ | Name Vector

;?Integer | Name LayerCount
LayerCount=4

;?Integer | Name Points
VectorBands=12

;?String | Name Width
VectorWidth=1366

;?String | Name Width
MinimumHeight=30

;?Integer | Name Layer1 Height
Layer1Height=160

;?Integer | Name Layer2 Height
Layer2Height=140

;?Integer | Name Layer3 Height
Layer3Height=110

;?Integer | Name Layer4 Height
Layer4Height=90

;?RadioButton | Name Color Mode | Options Solid; Gradient
BarType=Solid

;?Integer | Name Angle
Angle=0

;?String | Layer1
Layer1Gradient=180 | 112, 34, 231, 90;0.0 | 255, 46, 37, 90;1.0
;?String | Layer2
Layer2Gradient=180 | 255, 46, 37, 110;0.0 | 112, 34, 231, 110;1.0
;?String | Layer3
Layer3Gradient=180 | 112, 34, 231, 150;0.0 | 255, 46, 37, 150;1.0
;?String | Layer4
Layer4Gradient=180 | 255, 46, 37, 255;0.0 | 112, 34, 231, 255;1.0

@includeVectorColors=Vector\[#BarType].inc
