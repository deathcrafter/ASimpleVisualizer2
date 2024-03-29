function Initialize()
end

function ConvertToRGB(color) -- Converts HEX colors to RGB
	local rgb = {}

	for hex in color:gmatch('..') do
		table.insert(rgb, tonumber(hex, 16))
	end

	return table.concat(rgb, ',')
end



function ConvertToHex(color) -- Converts RGB colors to HEX
	local hex = {}

	for rgb in color:gmatch('%d+') do
		table.insert(hex, ('%02X'):format(tonumber(rgb)))
	end

	return table.concat(hex)
end



function ConvertToHSV()
    --local colorMeas=SKIN:GetMeasure('CursorColor')
    --local color=colorMeas:GetStringValue()
    local color=SKIN:GetVariable('CurrentColor')
    local r,g,b
    for a in color:gmatch('(%d+),%d+,%d+') do
        r=a
    end
    for a in color:gmatch('%d+,(%d+),%d+') do
        g=a
    end
    for a in color:gmatch('%d+,%d+,(%d+)') do
        b=a
    end
    r, g, b = r / 255, g / 255, b / 255
    local max, min = math.max(r, g, b), math.min(r, g, b)
    local h, s, v
    v = max 
    local d = max - min
    if max == 0 then s = 0 else s = d / max end 
    if max == min then
      h = 0 -- achromatic
    else
        if max == r then
        h = (g - b) / d
        if g < b then h = h + 6 end
        elseif max == g then h = (b - r) / d + 2
        elseif max == b then h = (r - g) / d + 4
        end
        h = h / 6
    end

    SKIN:Bang('!SetVariable', 'Hue', h)
    SKIN:Bang('!SetVariable', 'Saturation', s)
    SKIN:Bang('!SetVariable', 'Brightness', v)
    SKIN:Bang('!SetOption', 'BrightnessSlider', 'X', '215')
    SKIN:Bang('!CommandMeasure', 'ColorScript', 'hsvToRgb()')
end



function hsvToRgb()
    local h=SKIN:GetVariable('Hue')
    local s=SKIN:GetVariable('Saturation')
    local v=SKIN:GetVariable('Brightness')

    local r, g, b
  
    local i = math.floor(h * 6);
    local f = h * 6 - i;
    local p = v * (1 - s);
    local q = v * (1 - f * s);
    local t = v * (1 - (1 - f) * s);
  
    i = i % 6
  
    if i == 0 then r, g, b = v, t, p
    elseif i == 1 then r, g, b = q, v, p
    elseif i == 2 then r, g, b = p, v, t
    elseif i == 3 then r, g, b = p, q, v
    elseif i == 4 then r, g, b = t, p, v
    elseif i == 5 then r, g, b = v, p, q
    end
  
    SKIN:Bang('!SetVariable', 'RGBFinalColor', math.floor(r*255+0.5) ..','.. math.floor(g*255+0.5) ..','.. math.floor(b*255+0.5))
    SKIN:Bang('!SetVariable', 'HexFinalColor', ConvertToHex(math.floor(r*255+0.5) ..','.. math.floor(g*255+0.5) ..','.. math.floor(b*255+0.5)))
    SKIN:Bang('!UpdateMeterGroup', 'Preview')
    SKIN:Bang('!Redraw')
  end













function getShade(color,position)
    local rgb=ConvertToRGB(color)
    local rT = {}
    local gT = {}
    local bT = {}

    for a in rgb:gmatch('(%d+),%d+,%d+') do
        r=a
    end
    for a in rgb:gmatch('%d+,(%d+),%d+') do
        g=a
    end
    for a in rgb:gmatch('%d+,%d+,(%d+)') do
        b=a
    end

    for i=1,8,1 do
        table.insert(rT, (r+ i*(255-r)/8))
        table.insert(gT, (g+ i*(255-g)/8))
        table.insert(bT, (b+ i*(255-b)/8))
    end

    local endcolor=math.ceil(rT[position])..','..math.ceil(gT[position])..','..math.ceil(bT[position])
    return ConvertToHex(endcolor)
end

