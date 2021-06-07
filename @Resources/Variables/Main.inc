[Variables]
;@About | Name Settings | Description Control how your visualizer is rendered here. | Icon [\xE771]
;@Topic | Name Personalization | Icon [\xE771]
;@ | Name Visualizer | Icon [\xF61F]
;?RadioButton | Name Visualizer Type | Options Bar; Round; Vector
VisualizerType=Round
;@ | Name Extra | Icon [\xF0B9]
;@ | Name Image Underlay | Description Add an image underlay to your visualizer | Icon [\xE81E]
;@ | Name Colors | Description Define colors of your visualizer | Icon [\xE790]
;@Topic | Name Equalizer Settings | Icon [\xF4C3]
;@ | Name Device | Description Select a specific device(for advanced users) | Icon [\xE95B]
;@ | Name AudioAnalyzer | Icon [\xF0ED]

Preset=Original
@includeVariables=#@#Variables\[#Preset]\[#VisualizerType].inc
@includeAnalyzer=#@#Variables\[#Preset]\AudioAnalyzerSettings.inc
@includeColors=#@#Variables\[#Preset]\Colors.inc
