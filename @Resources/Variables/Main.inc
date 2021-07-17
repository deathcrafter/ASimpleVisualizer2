;                                      __ __            
;|\                /|        /\          |   |\        |
;| \              / |       /  \         |   | \       |
;|  \            /  |      /    \        |   |  \      |
;|   \          /   |     /      \       |   |   \     |
;|    \        /    |    /        \      |   |    \    |
;|     \      /     |   /----------\     |   |     \   |
;|      \    /      |  /            \    |   |      \  |
;|       \  /       | /              \   |   |       \ |
;|        \/        |/                \__|__ |        \|

[Variables]
;@About | Name Settings | Description Control how your visualizer is rendered here. | Icon [\xE771]
;@Topic | Name Personalization | Icon [\xE771]
;@ | Name Visualizer | Icon [\xF61F]
;?RadioButton | Name Visualizer Type | Options Bar; Round; Vector
VisualizerType=Vector
;@ | Name Extra | Icon [\xF0B9]
;@ | Name Image Underlay | Description Add an image underlay to your visualizer | Icon [\xE81E]
;@ | Name Colors | Description Define colors of your visualizer | Icon [\xE790]
;@Topic | Name Equalizer Settings | Icon [\xF4C3]
;@ | Name Device | Description Select a specific device(for advanced users) | Icon [\xE95B]
;@ | Name AudioAnalyzer | Icon [\xF0ED]

Preset=VectorBar

ImageUnderlay=1
ImageUnderlayName=C:\Users\sahoo\OneDrive\Documents\Rainmeter\Skins\ASimpleVisualizer2\@Resources\UserImages\vectorbar.jpg

DeviceName=
DeviceID=

;?RadioButton | Name Audio Source | Options Output,DefaultOutput; Input,DefaultInput; DeviceID,"ID: [#DeviceID]"
AnalyzerPort=DefaultOutput

@includeVariables=#@#Variables\[#Preset]\[#VisualizerType].inc
@includeAnalyzer=#@#Variables\[#Preset]\AudioAnalyzerSettings.inc
@includeColors=#@#Variables\[#Preset]\Colors.inc
