function Update {
    return 'Enjoy!'
}
function main {

}
funtion craft {
    param(
        [Parameter(Mandatory=$true)]
        [ValidateSet('bar', 'round', 'vector')]
        $type='bar',
        [Parameter()]
        [ValidateSet('normal','reflection','mirrorX','mirrorY','mirrorXY')]
        $barType,
        [Parameter()]
        $combine
    )
    $measureContent = @"
"@
    $bands = $RmAPI.Variable("Bands")
    switch ($type) {
        'vector' {
            $layerCount=$RmAPI.Variable("LayerCount")
            for ($j=1; $j -lt $layerCount+1; $j++) {
                for ($i=1; $i -lt ($bands/$j)+1; $i++) {
                    $measureContent+=@"

[MeasureL$j$i]
Measure=Plugin
Plugin=AudioAnalyzer
Parent=AudioAnalyzer
Type=Child
Index=$i
Channel=Auto
HandlerName=MainLayer$($j)Output

"@
                }
            }
            break
        }
        default {
            for ($i=1; $i -lt $bands+1; $i++) {
                $measureContent+=@"

[Measure$i]
Measure=Plugin
Plugin=AudioAnalyzer
Parent=AudioAnalyzer
Type=Child
Index=$i
Channel=Auto
HandlerName=MainFinalOutput

"@          
            }
        }
    }
    $shapeContent=@"
"@
    switch ($type) {
        'bar' {
            
            $barWidth = $RmAPI.Variable("BarWidth")
        
            $barGap = $RmAPI.Variable("BarGap")
        
            $flipY = $RmAPI.Variable("flipY")

            $flipX = $RmAPI.Variable("flipX")
        
            $barStrokeWidth = $RmAPI.Variable("BarStrokeWidth")
        
            $barHeight = $RmAPI.Variable("Height")
        
            $levitate = $RmAPI.Variable("Levitate")
        
            $angle = $RmAPI.Variable("Angle")

            $angleSin = Math -f sin -v $($angle%360)

            $angleCos = Math -f cos -v $($angle%360)
        
            $cornerRadius = $RmAPI.Variable("CornerRounding")
        
            $minimumHeight = $RmAPI.Variable("MinimumHeight")
            switch ($barType) {
                'normal' {
                    $a = $barWidth + $barGap
                    $width1= ($barWidth+$barGap)*$bands+$barStrokeWidth-$barGap
                    $height1= $barHeight+$levitate+$barStrokeWidth

                    $shapeContent+=@"

[Shape]
Meter=Shape
DynamicVariables=1
W=$($angleCos*$width1 + $angleSin*$height1)
H=$($angleSin*$width1 + $angleCos*$height1)
TransformationMatrix=$(Math -f cos -v $(Math -f rad -v $(-$angle%360)));$(Math -f sin -v $(Math -f rad -v $(-$angle%360)));$(Math -f sin -v $(Math -f rad -v $(-$angle%360)));$(Math -f cos -v $(Math -f rad -v $(-$angle%360)));$($(if ($angle%360 -gt 90 -and $angel%360 -lt 270){$angleCos*$width1}else{0})+$(if ($angle%360 -gt 0 -and $angel%360 -lt 180){$angleSin*$height1}else{0}));$($(if ($angle%360 -gt 180 -and $angel%360 -lt 360){$angleSin*$width1}else{0})+$(if ($angle%360 -gt 90 -and $angel%360 -lt 270){$angleCos*$height1}else{0}))

"@
                    for ($i=1; $i -lt $bands+1; $i++) {
                        if ($i -eq 1) {
                        $shapeContent+=@"

Shape=Rectangle $($barStrokeWidth/2), $((1-$flipY)*$barHeight), $barWidth, ($(-1+2*$flipY)*Clamp($barHeight*[Measure$(if ($flipX -eq 0){$i}else{$bands-$i+1})], $minimumHeight, $barHeight)), $cornerRadius | Fill Color [#Color1]

"@
                        }else{
                            $shapeContent+=@"

Shape$i=Rectangle $($a*($i-1)), $((1-$flipY)*$barHeight), $barWidth, ($(-1+2*$flipY)*Clamp($barHeight*[Measure$(if ($flipX -eq 0){$i}else{$bands-$i+1})], $minimumHeight, $barHeight)), $cornerRadius | Fill Color [#Color$i]

"@
                        }
                    }
                }
                'mirrorX' {
                    $gr1XOff = $RmAPI.Variable("Group1XOffset")
                    $gr1YOff = $RmAPI.Variable("Group1YOffset")
                    $gr2XOff = $RmAPI.Variable("Group2XOffset")
                    $gr2YOff = $RmAPI.Variable("Group2YOffset")

                    $groupWidth = $(if (($gr1XOff+($barWidth+$barGap)*$bands-$barGap) -le ($gr2XOff+2*($barWidth+$barGap)*$bands-$barGap)){($gr2XOff+2*($barWidth+$barGap)*$bands-$barGap)}else{($gr1XOff+($barWidth+$barGap)*$bands-$barGap)})
                    $groupHeight = $(if ($gr1YOff -ge $gr2YOff){$gr1YOff}else{$gr2YOff})

                    $a = $barWidth + $barGap
                    $width1 = $groupWidth+$barStrokeWidth
                    $height1 = $group+$levitate+$barStrokeWidth+$groupHeight

                    $shapeContent+=@"

[Shape]
Meter=Shape
DynamicVariables=1
W=$($angleCos*$width1 + $angleSin*$height1)
H=$($angleSin*$width1 + $angleCos*$height1)
TransformationMatrix=$(Math -f cos -v $(Math -f rad -v $(-$angle%360)));$(Math -f sin -v $(Math -f rad -v $(-$angle%360)));$(Math -f sin -v $(Math -f rad -v $(-$angle%360)));$(Math -f cos -v $(Math -f rad -v $(-$angle%360)));$($(if ($angle%360 -gt 90 -and $angel%360 -lt 270){$angleCos*$width1}else{0})+$(if ($angle%360 -gt 0 -and $angel%360 -lt 180){$angleSin*$height1}else{0}));$($(if ($angle%360 -gt 180 -and $angel%360 -lt 360){$angleSin*$width1}else{0})+$(if ($angle%360 -gt 90 -and $angel%360 -lt 270){$angleCos*$height1}else{0}))

"@
                    for ($i=1; $i -lt $bands+1; $i++) {
                        if ($i -eq 1) {
                        $shapeContent+=@"

Shape=Rectangle $($barStrokeWidth/2), $((1-$flipY)*$barHeight), $barWidth, ($(-1+2*$flipY)*Clamp($barHeight*[Measure$(if ($flipX -eq 0){$i}else{$bands-$i+1})], $minimumHeight, $barHeight)), $cornerRadius | Fill Color [#Color1]

"@
                        }else{
                            $shapeContent+=@"

Shape$i=Rectangle $($a*($i-1)), $((1-$flipY)*$barHeight), $barWidth, ($(-1+2*$flipY)*Clamp($barHeight*[Measure$(if ($flipX -eq 0){$i}else{$bands-$i+1})], $minimumHeight, $barHeight)), $cornerRadius | Fill Color [#Color$i]

"@
                        }
                    }
                }
                'mirrorY' {

                }
                'mirrorXY' {

                }
                'reflection' {

                }
            }
        }
        'round' {

        }
        'vector' {
            $layerCount=$RmAPI.Variable("LayerCount")
            for ($j=1; $j -lt $layerCount+1; $j++) {
                for ($i=1; $j -lt $vectorBands) {
                    
                }
            }
        }
    }
}
function Math {
    Param(
        [Parameter(Mandatory=$true)]
        [ValidateSet('rad','sin','cos')]
        [Alias('f')]
        $func,
        [Parameter(Mandatory=$true)]
        [Alias('v')]
        $value
    )
    switch ($func) {
        rad {return $value*([math]::PI/180)}
        sin {return [math]::Abs([math]::Sin($value*([math]::PI/180)))}
        cos {return [math]::Abs([math]::Cos($value*([math]::PI/180)))}
    }
}