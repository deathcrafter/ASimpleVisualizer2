
[Variables]
DevScroll=0
[DevicesContainer]
Meter=Shape
X=55
Y=295
Shape=Rectangle 0,0,370,190,7 | Fill Color 0090F0 | StrokeWidth 0
MouseScrollDownAction=[!SetVariable DevScroll "(Clamp([#DevScroll]+15, 0, (Max([Scroller]-172,0))))"][!Log Down][!UpdateMeterGroup DeviceList][!Redraw]
MouseScrollUpAction=[!SetVariable DevScroll "(Clamp([#DevScroll]-15, 0, (Max([Scroller]-172,0))))"][!Log Up][!UpdateMeterGroup DeviceList][!Redraw]
Group=DeviceList
Hidden=1
[DevicesBackground]
Meter=Shape
Shape=Rectangle 0,0,370,190,7 | Fill Color 81FCFDFF | StrokeWidth 0
Container=DevicesContainer
Group=DeviceList
Hidden=1
[DeviceStringStyle]
X=r
Y=3R
W=342
FontFace=Segoe UI Semibold
FontSize=11
FontColor=000000
AntiAlias=1
ClipString=1
Container=DevicesContainer
Group=DeviceList
Hidden=1
[Output]
Meter=String
Text=Click on the refresh button to get a list#CRLF#of audio devices connected
X=14
Y=(14-[#DevScroll])
FontFace=Segoe UI Bold
FontSize=12
FontColor=303030
AntiAlias=1
DynamicVariables=1
Container=DevicesContainer
Group=DeviceList
Hidden=1

[DevLastItem]
Meter=String
Y=([#DevScroll])R
DynamicVariables=1
Container=DevicesContainer
Group=DeviceList
Hidden=1
[Scroller]
Measure=Calc
DynamicVariables=1
Formula=([DevLastItem:Y]-[DevicesContainer:Y])

