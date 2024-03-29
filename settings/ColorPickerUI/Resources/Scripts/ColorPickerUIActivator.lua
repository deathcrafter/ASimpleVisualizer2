function Change(variableName, fileName, refreshConfig1, refreshConfig2, refreshConfig3)
    local userFile=SKIN:GetVariable('ROOTCONFIGPATH')..'settings\\ColorPickerUI\\UserVariables.inc'
    SKIN:Bang('!WriteKeyValue', 'Variables', 'FileName', fileName, userFile)
    SKIN:Bang('!WriteKeyValue', 'Variables', 'ConfigName1', refreshConfig1, userFile)
    SKIN:Bang('!WriteKeyValue', 'Variables', 'VariableName', variableName, userFile)
    SKIN:Bang('!WriteKeyValue', 'Variables', 'PrevColor', SKIN:GetVariable(variableName), userFile)
    if not refreshConfig2 then
        SKIN:Bang('!WriteKeyValue', 'Variables', 'RefreshAction', '[!Refresh "[#ConfigName1]"]', userFile)
    end
    if refreshConfig2 then
        SKIN:Bang('!WriteKeyValue', 'Variables', 'ConfigName2', refreshConfig2, userFile)
        SKIN:Bang('!WriteKeyValue', 'Variables', 'RefreshAction', '[!Refresh "[#ConfigName1]"][!Refresh "[#ConfigName2]"]', userFile)
    end
    if refreshConfig2 and refreshConfig3 then
        SKIN:Bang('!WriteKeyValue', 'Variables', 'ConfigName3', refreshConfig3, userFile)
        SKIN:Bang('!WriteKeyValue', 'Variables', 'RefreshAction', '[!Refresh "[#ConfigName1]"][!Refresh "[#ConfigName2]"][!Refresh "[#ConfigName3]"]', userFile)
    end
    SKIN:Bang('!ActivateConfig', SKIN:GetVariable('CURRENTCONFIG')..'\\ColorPickerUI')
    SKIN:Bang('!Refresh', SKIN:GetVariable('CURRENTCONFIG')..'\\ColorPickerUI')
end

function sub(str)
    return str:gsub([[\]], [[\\]])
end