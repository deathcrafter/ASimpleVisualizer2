function Update {
    return 'Enjoy!'
}
function main {

}

function Vector {
    Craft -type vector
}
function Round {
    Craft -type round
}
function Bar {

    $barType=$RmAPI.VariableStr('BarType')

    Craft -type bar -barType $barType
}

function Craft {
    param(
        [Parameter(Mandatory=$true)]
        [ValidateSet('bar', 'round', 'vector')]
        $type,
        [Parameter()]
        [ValidateSet('normal','reflection','mirrorX','mirrorY','mirrorXY')]
        $barType
    )
    $resources=$RmAPI.VariableStr('@')

    $measureContent = @"
"@

    $bands = $RmAPI.Variable("Bands")


#measure switch
    switch ($type) {
        'vector' {
            $layerCount=$RmAPI.Variable("LayerCount")

            $k=$RmAPI.Variable("VectorBands")

            for ($j=1; $j -lt $layerCount+1; $j++) {
                for ($i=1; $i -lt $k+1; $i++) {
                    $measureContent+=@"

[MeasureL$j$i]
Measure=Plugin
Plugin=AudioAnalyzer
Parent=AudioAnalyzer
Type=Child
Index=$i
Channel=Auto
HandlerName=Layer$($j)Output

"@
                }
                $k=2*$k-1
            }
            $measureContent | Out-File -FilePath $($resources + 'Measures\AudioMeasures.inc') -Encoding utf8
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
            $measureContent | Out-File -FilePath $($resources + 'Measures\AudioMeasures.inc') -Encoding utf8
            
        }
    }


#visualizer switch
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

            $shapeContent=@"
"@

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
TransformationMatrix=$([math]::Cos(-$angle%360*([math]::PI/180)));$(-[math]::Sin(-$angle%360*([math]::PI/180)));$([math]::Sin(-$angle%360*([math]::PI/180)));$([math]::Cos(-$angle%360*([math]::PI/180)));$($(if ($angle%360 -gt 90 -and $angel%360 -lt 270){$angleCos*$width1}else{0})+$(if ($angle%360 -gt 0 -and $angel%360 -lt 180){$angleSin*$height1}else{0}));$($(if ($angle%360 -gt 180 -and $angel%360 -lt 360){$angleSin*$width1}else{0})+$(if ($angle%360 -gt 90 -and $angel%360 -lt 270){$angleCos*$height1}else{0}))

"@
                    for ($i=1; $i -lt $bands+1; $i++) {
                        $shapeContent+=@"

Shape$(if ($i -ne 1){$i}else{''})=Rectangle $(if($i -eq 1){$barStrokeWidth/2}else{$barStrokeWidth/2+($i-1)*$a}), $((1-$flipY)*$barHeight), $barWidth, ($(-1+2*$flipY)*Clamp($barHeight*[Measure$(if ($flipX -eq 0){$i}else{$bands-$i+1})], $minimumHeight, $barHeight)), $cornerRadius | Fill Color [#Color$i]

"@
                    }
                    break
                }


                'mirrorX' {
                    $gr1XOff = $RmAPI.Variable("Group1XOffset")
                    $gr1YOff = $RmAPI.Variable("Group1YOffset")
                    $gr1flipX= $RmAPI.Variable("Group1XFlip")
                    $gr1flipY= $RmAPI.Variable("Group1YFlip")
                    $gr2XOff = $RmAPI.Variable("Group2XOffset")
                    $gr2YOff = $RmAPI.Variable("Group2YOffset")
                    $gr2flipX= $RmAPI.Variable("Group2XFlip")
                    $gr2flipY= $RmAPI.Variable("Group2YFlip")
                    $gr2Complement=$RmAPI.Variable("Group2Complement")

                    $groupWidth = $(if (($gr1XOff+($barWidth+$barGap)*$bands-$barGap) -le ($gr2XOff+2*($barWidth+$barGap)*$bands-$barGap)){($gr2XOff+2*($barWidth+$barGap)*$bands-$barGap)}else{($gr1XOff+($barWidth+$barGap)*$bands-$barGap)})
                    $groupHeight = $(if ($gr1YOff -ge $gr2YOff){$gr1YOff}else{$gr2YOff})

                    $a = $barWidth + $barGap
                    $RmAPI.Log("$($a*$bands-$barGap)")
                    $width1 = $groupWidth+$barStrokeWidth
                    $height1 = $barHeight+$levitate+$barStrokeWidth+$groupHeight

                    $shapeContent+=@"

[Shape]
Meter=Shape
DynamicVariables=1
W=$($angleCos*$width1 + $angleSin*$height1)
H=$($angleSin*$width1 + $angleCos*$height1)
TransformationMatrix=$([math]::Cos(-$angle%360*([math]::PI/180)));$(-[math]::Sin(-$angle%360*([math]::PI/180)));$([math]::Sin(-$angle%360*([math]::PI/180)));$([math]::Cos(-$angle%360*([math]::PI/180)));$($(if ($angle%360 -gt 90 -and $angel%360 -lt 270){$angleCos*$width1}else{0})+$(if ($angle%360 -gt 0 -and $angel%360 -lt 180){$angleSin*$height1}else{0}));$($(if ($angle%360 -gt 180 -and $angel%360 -lt 360){$angleSin*$width1}else{0})+$(if ($angle%360 -gt 90 -and $angel%360 -lt 270){$angleCos*$height1}else{0}))

"@
                    for ($i=1; $i -lt $bands+1; $i++) {                        
                        $shapeContent+=@"

Shape$(if ($i -ne 1){$i}else{''})=Rectangle $($gr1XOff+$barStrokeWidth/2+($i-1)*$a), $($gr1YOff+(1-$gr1flipY)*$barHeight), $barWidth, ($(-1+2*$flipY)*Clamp($barHeight*[Measure$(if ($gr1flipX -eq 0){$i}else{$bands-$i+1})], $minimumHeight, $barHeight)), $cornerRadius | Fill Color [#Color$(if ($gr1flipX -eq 0){$i}else{$bands-$i+1})]

"@
                    }
                    $b=$a*$bands
                    for ($i=$bands+1; $i -lt 2*$bands+1; $i++) {
                        $shapeContent+=@"

Shape$i=Rectangle $($gr2XOff+$b+($i-1-$bands)*$a), $($gr2YOff+(1-$gr2flipY)*$barHeight), $barWidth, ($(-1+2*$gr2flipY)*Clamp($barHeight*($(if ($gr2Complement -eq 1){'1-'}else{''})[Measure$(if ($gr2flipX -eq 0){2*$bands+1 - $i}else{$i-$bands})]), $minimumHeight, $barHeight)), $cornerRadius | Fill Color [#Color$(if ($gr2flipX -eq 0){2*$bands+1 - $i}else{$i-$bands})]

"@
                    }
                    break
                }


                'mirrorY' {
                    $gr1XOff = $RmAPI.Variable("Group1XOffset")
                    $gr1YOff = $RmAPI.Variable("Group1YOffset")
                    $gr1flipX= $RmAPI.Variable("Group1XFlip")
                    $gr1flipY= $RmAPI.Variable("Group1YFlip")
                    $gr2XOff = $RmAPI.Variable("Group2XOffset")
                    $gr2YOff = $RmAPI.Variable("Group2YOffset")
                    $gr2flipX= $RmAPI.Variable("Group2XFlip")
                    $gr2flipY= $RmAPI.Variable("Group2YFlip")

                    $groupWidth = $(if ($gr1XOff -le $gr2XOff){($gr2XOff+($barWidth+$barGap)*$bands-$barGap)}else{($gr1XOff+($barWidth+$barGap)*$bands-$barGap)})
                    $groupHeight = $gr1YOff+$gr2YOff

                    $a = $barWidth + $barGap
                    $width1 = $groupWidth+$barStrokeWidth
                    $height1 = 2*($barHeight+$levitate+$barStrokeWidth)+$groupHeight

                    $shapeContent+=@"

[Shape]
Meter=Shape
DynamicVariables=1
W=$($angleCos*$width1 + $angleSin*$height1)
H=$($angleSin*$width1 + $angleCos*$height1)
TransformationMatrix=$([math]::Cos(-$angle%360*([math]::PI/180)));$(-[math]::Sin(-$angle%360*([math]::PI/180)));$([math]::Sin(-$angle%360*([math]::PI/180)));$([math]::Cos(-$angle%360*([math]::PI/180)));$($(if ($angle%360 -gt 90 -and $angel%360 -lt 270){$angleCos*$width1}else{0})+$(if ($angle%360 -gt 0 -and $angel%360 -lt 180){$angleSin*$height1}else{0}));$($(if ($angle%360 -gt 180 -and $angel%360 -lt 360){$angleSin*$width1}else{0})+$(if ($angle%360 -gt 90 -and $angel%360 -lt 270){$angleCos*$height1}else{0}))

"@
                    for ($i=1; $i -lt $bands+1; $i++) {                        
                        $shapeContent+=@"

Shape$(if ($i -ne 1){$i}else{''})=Rectangle $($gr1XOff+$barStrokeWidth/2+($i-1)*$a), $($gr1YOff+(1-$gr1flipY)*$barHeight), $barWidth, ($(-1+2*$gr1flipY)*Clamp($barHeight*[Measure$(if ($gr1flipX -eq 0){$i}else{$bands-$i+1})], $minimumHeight, $barHeight)), $cornerRadius | Fill Color [#Color$(if ($gr1flipX -eq 0){$i}else{$bands-$i+1})]

"@
                    }
                    for ($i=$bands+1; $i -lt 2*$bands+1; $i++) {
                        $shapeContent+=@"

Shape$i=Rectangle $($gr2XOff+$barStrokeWidth/2+($i-1-$bands)*$a), $(($barHeight+$barStrokeWidth)+$gr2YOff+$gr2flipY*$barHeight), $barWidth, ($(1-2*$gr2flipY)*Clamp($barHeight*[Measure$(if ($gr2flipX -eq 0){$i-$bands}else{2*$bands+1-$i})], $minimumHeight, $barHeight)), $cornerRadius | Fill Color [#Color$(if ($gr2flipX -eq 0){$i}else{$bands-$i+1})]

"@
                    }
                    break
                }


                'mirrorXY' {
                    $gr1XOff = $RmAPI.Variable("Group1XOffset")
                    $gr1YOff = $RmAPI.Variable("Group1YOffset")
                    $gr1flipX= $RmAPI.Variable("Group1XFlip")
                    $gr1flipY= $RmAPI.Variable("Group1YFlip")
                    $gr2XOff = $RmAPI.Variable("Group2XOffset")
                    $gr2YOff = $RmAPI.Variable("Group2YOffset")
                    $gr2flipX= $RmAPI.Variable("Group2XFlip")
                    $gr2flipY= $RmAPI.Variable("Group2YFlip")
                    $gr3XOff = $RmAPI.Variable("Group3XOffset")
                    $gr3YOff = $RmAPI.Variable("Group3YOffset")
                    $gr3flipX= $RmAPI.Variable("Group3XFlip")
                    $gr3flipY= $RmAPI.Variable("Group3YFlip")
                    $gr4XOff = $RmAPI.Variable("Group4XOffset")
                    $gr4YOff = $RmAPI.Variable("Group4YOffset")
                    $gr4flipX= $RmAPI.Variable("Group4XFlip")
                    $gr4flipY= $RmAPI.Variable("Group4YFlip")

                    $groupWidthRawTop = $(if (($gr1XOff+($barWidth+$barGap)*$bands-$barGap) -le ($gr2XOff+2*($barWidth+$barGap)*$bands-$barGap)){($gr2XOff+2*($barWidth+$barGap)*$bands-$barGap)}else{($gr1XOff+($barWidth+$barGap)*$bands-$barGap)})
                    $groupHeightRawTop = $(if ($gr1YOff -ge $gr2YOff){$gr1YOff}else{$gr2YOff})

                    $groupWidthRawBottom = $(if (($gr3XOff+($barWidth+$barGap)*$bands-$barGap) -le ($gr4XOff+2*($barWidth+$barGap)*$bands-$barGap)){($gr4XOff+2*($barWidth+$barGap)*$bands-$barGap)}else{($gr3XOff+($barWidth+$barGap)*$bands-$barGap)})
                    $groupHeightRawBottom = $(if ($gr3YOff -ge $gr4YOff){$gr3YOff}else{$gr4YOff})

                    $groupWidth = $(if ($groupWidthRawTop -ge $groupWidthRawBottom){$groupWidthRawTop}else{$groupWidthRawBottom})
                    $groupHeight = $groupHeightRawTop+$groupHeightRawBottom

                    $a = $barWidth + $barGap
                    $b = $a*$bands

                    $width1 = $groupWidth+$barStrokeWidth
                    $height1 = 2*($barHeight+$levitate+$barStrokeWidth)+$groupHeight

                    $shapeContent+=@"

[Shape]
Meter=Shape
DynamicVariables=1
W=$($angleCos*$width1 + $angleSin*$height1)
H=$($angleSin*$width1 + $angleCos*$height1)
TransformationMatrix=$([math]::Cos(-$angle%360*([math]::PI/180)));$(-[math]::Sin(-$angle%360*([math]::PI/180)));$([math]::Sin(-$angle%360*([math]::PI/180)));$([math]::Cos(-$angle%360*([math]::PI/180)));$($(if ($angle%360 -gt 90 -and $angel%360 -lt 270){$angleCos*$width1}else{0})+$(if ($angle%360 -gt 0 -and $angel%360 -lt 180){$angleSin*$height1}else{0}));$($(if ($angle%360 -gt 180 -and $angel%360 -lt 360){$angleSin*$width1}else{0})+$(if ($angle%360 -gt 90 -and $angel%360 -lt 270){$angleCos*$height1}else{0}))

"@
                    for ($i=1; $i -lt $bands+1; $i++) {                        
                        $shapeContent+=@"

Shape$(if ($i -ne 1){$i}else{''})=Rectangle $($gr1XOff+$barStrokeWidth/2+($i-1)*$a), $($gr1YOff+(1-$gr1flipY)*$barHeight), $barWidth, ($(-1+2*$flipY)*Clamp($barHeight*[Measure$(if ($gr1flipX -eq 0){$i}else{$bands-$i+1})], $minimumHeight, $barHeight)), $cornerRadius | Fill Color [#Color$(if ($gr1flipX -eq 0){$i}else{$bands-$i+1})]

"@
                    }
                    for ($i=$bands+1; $i -lt 2*$bands+1; $i++) {
                        $shapeContent+=@"

Shape$i=Rectangle $($gr2XOff+$barStrokeWidth/2+$b+($i-1-$bands)*$a), $($gr2YOff+(1-$gr2flipY)*$barHeight), $barWidth, ($(-1+2*$gr2flipY)*Clamp($barHeight*($(if ($gr2Complement -eq 1){'1-'}else{''})[Measure$(if ($gr2flipX -eq 0){2*$bands+1 - $i}else{$i-$bands})]), $minimumHeight, $barHeight)), $cornerRadius | Fill Color [#Color$(if ($gr2flipX -eq 0){2*$bands+1 - $i}else{$i-$bands})]

"@
                    }
                    for ($i=2*$bands+1; $i -lt 3*$bands+1; $i++) {
                        $shapeContent+=@"

Shape$i=Rectangle $($gr3XOff+$barStrokeWidth/2+($i-1-2*$bands)*$a), $(($barHeight+$barStrokeWidth)+$gr3YOff+$gr3flipY*$barHeight), $barWidth, ($(1-2*$gr3flipY)*Clamp($barHeight*[Measure$(if ($gr3flipX -eq 0){$i-2*$bands}else{3*$bands+1-$i})], $minimumHeight, $barHeight)), $cornerRadius | Fill Color [#Color$(if ($gr3flipX -eq 0){$i-2*$bands}else{4*$bands-$i+1})]

"@
                    }
                    for ($i=3*$bands+1; $i -lt 4*$bands+1; $i++) {
                        $shapeContent+=@"

Shape$i=Rectangle $($gr4XOff+$barStrokeWidth/2+$b+($i-1-3*$bands)*$a), $(($barHeight+$barStrokeWidth)+$gr4YOff+$gr4flipY*$barHeight), $barWidth, ($(1-2*$gr4flipY)*Clamp($barHeight*[Measure$(if ($gr4flipX -eq 0){4*$bands+1-$i}else{$i-3*$bands})], $minimumHeight, $barHeight)), $cornerRadius | Fill Color [#Color$(if ($gr4flipX -eq 0){4*$bands+1-$i}else{$i-3*$bands})]

"@
                    }
                    break                    
                }


                'reflection' {

                }
            }
            $shapeContent | Out-File -FilePath $($resources + 'Visualizer\Bar.inc') -Encoding utf8
        }




        'round' {
            $bands = $RmAPI.Variable("Bands")

            $barWidth= $RmAPI.Variable("BarWidth")

            $height= $RmAPI.Variable("Height")

            $minimumHeight=$RmAPI.Variable("MinimumHeight")

            $radius= $RmAPI.Variable("Radius")

            $angleStart= $RmAPI.Variable("StartAngle")

            $totalAngle= $RmAPI.Variable("TotalAngle")

            $shapeContent=@"

[Shape]
Meter=Shape
DynamicVariables=1
W=$(2*($height+$radius)+$barWidth)
H=$(2*($height+$radius)+$barWidth)

"@

            for ($i=1; $i -lt $bands+1; $i++) {
                $shapeContent+=@"

Shape$(if($i -ne 1){$i}else{''})=Line $((-([math]::Cos($(Math -f rad -v $($angleStart+$i*($totalAngle/$bands)))))*$radius) + $height+$radius), $((-([math]::Sin($(Math -f rad -v $($angleStart+$i*($totalAngle/$bands)))))*$radius) + $height+$radius), ($(-([math]::Cos($(Math -f rad -v $($angleStart + $i*$TotalAngle/$bands)))))*($radius+(Clamp($height*[Measure$i], $minimumHeight, $height))) + $($height+$radius)), ($(-([math]::Sin($(Math -f rad -v $($angleStart + $i*$TotalAngle/$bands)))))*($radius+(Clamp($height*[Measure$i], $minimumHeight, $height))) + $($height+$radius)) | StrokeWidth $barWidth | Stroke Color [#Color$i]
"@
            }
            $shapeContent | Out-File -FilePath $($resources + 'Visualizer\Round.inc') -Encoding utf8
        }




        'vector' {
#Getting variables
            $vectorBands=$RmAPI.Variable("VectorBands")

            $layerCount=$RmAPI.Variable("LayerCount")

            $vectorWidth=$RmAPI.Variable("VectorWidth")

            $vectorHeight=$RmAPI.Variable("VectorHeight")

            $angle = $RmAPI.Variable("Angle")

            $angleSin = Math -f sin -v $($angle%360)

            $angleCos = Math -f cos -v $($angle%360)

            $k=$vectorBands

            $layerHash=@{}

            $mainUnit="Unit-Main=Channels [#Channel] | Handlers MainFFT"

            $Handlers=@"
"@
#Getting heights for different layers and putting them into an array for later use
            $heightArray=@('')

            for ($j=1; $j -lt $layerCount+1; $j++) {
                $RmAPI.Log('Getting heights')
                $heightArray+=$RmAPI.Variable("Layer$($j)Height")
            }
            $RmAPI.Log($heightArray)

            $maxHeight=($heightArray | Measure-Object -Maximum).Maximum

#Creating required content
            for ($j=1; $j -lt $layerCount+1; $j++) {
                $RmAPI.Log("Creating Layer $j")
                $vectorLine="Layer$j = 0,$maxHeight | "

                for ($i=1; $i -lt $k+1; $i++) {
                    $vectorLine+="LineTo $(if ($i -ne 1){$i*($VectorWidth/$k)}else{0}), ($($maxHeight-$heightArray[$j]) + $($heightArray[$j])*(1-[MeasureL$j$i])) | "
                }
                $RmAPI.Log("Completed layer $j")
                $mainUnit+=", Layer$($j)BR(MainFFT), Layer$($j)BCT(Layer$($j)BR), Layer$($j)Output(Layer$($j)BCT)"
                $layerHash.Add("L$j", $vectorLine)
                $Handlers+=@"

Handler-Layer$($j)BR=Type BandResampler | Bands Log(Count $($k+1), FreqMin 20, FreqMax 16000) | CubicInterpolation true
Handler-Layer$($j)BCT=Type BandCascadeTransformer | MixFunction Average | MinWeight 0.01 | TargetWeight 2 | ZeroLevelMultiplier 1
Handler-Layer$($j)Output=Type TimeResampler | Attack [#Attack] | Decay [#Decay] | Transform dB, Map(From -[#MaxSensitivity] : -[#MinSensitivity]), Clamp


"@
                $k=2*$k-1
            }

            $audioMeasureContent=@"

[AudioAnalyzer]
Measure=Plugin
Plugin=AudioAnalyzer
Type=Parent
Source=[#AnalyzerPort]
ProcessingUnits=Main
$mainUnit | Filter Custom bqHighPass(Q 0.2, Freq 20, ForcedGain 5.58), bqLowPass(Q 1, Freq 16000, ForcedGain 20)
Handler-MainFFT=Type FFT | BinWidth 8 | OverlapBoost 10 | CascadesCount 2 | WindowFunction [#WindowFunction]
$Handlers

"@
            $shapeContent=@"

[Shape]
Meter=Shape
DynamicVariables=1
W=$($angleCos*$vectorWidth + $angleSin*$maxHeight)
H=$($angleSin*$vectorWidth + $angleCos*$maxHeight)
TransformationMatrix=$(Math -f cos -v $(Math -f rad -v $(-$angle%360)));$(Math -f sin -v $(Math -f rad -v $(-$angle%360)));$(Math -f sin -v $(Math -f rad -v $(-$angle%360)));$(Math -f cos -v $(Math -f rad -v $(-$angle%360)));$($(if ($angle%360 -gt 90 -and $angel%360 -lt 270){$angleCos*$vectorWidth}else{0})+$(if ($angle%360 -gt 0 -and $angel%360 -lt 180){$angleSin*$vectorHeight}else{0}));$($(if ($angle%360 -gt 180 -and $angel%360 -lt 360){$angleSin*$vectorWidth}else{0})+$(if ($angle%360 -gt 90 -and $angel%360 -lt 270){$angleCos*$vectorHeight}else{0}))

"@
            for ($i=1; $i -lt $layerCount+1; $i++) {
                $shapeContent+=@"

Shape$(if($i -ne 1){$i}else{''})=Path Layer$i | StrokeWidth 0 | Fill Color $($RmAPI.VariableStr("Layer$($i)Color"))
$($layerHash["L$i"])LineTo $vectorWidth,$maxHeight | ClosePath 1

"@
            }
            $audioMeasureContent | Out-File -FilePath $($resources + 'Measures\VectorAnalyzer.inc') -Encoding utf8
            $shapeContent | Out-File -FilePath $($resources + 'Visualizer\Vector.inc') -Encoding utf8
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