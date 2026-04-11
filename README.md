Техническая инфа.
Коды правок по порядку:

//@001    - add Home/Capture in void LoadKMProfile

//@002    - Триггеры JoyCon в void LoadXboxProfile, теперь можно ремапить. Если закоментить в ini работают по старой схеме 

//@003    - Эмулируем Клава-мышь в XboxProfiles без геммора с профилями. wheel обрабатывается отдельно

//@004    - Правки в print из-за выведения Hotkeys копок режимов в консоль

//@005    - add Appstatus для новых Режимов и выведения привязанных кнопок в консоль

//@006    - add чтоб после смены профией (ALT+Q / PS+Left/Right) автоматически вызывалась нужная функция

//@007    - AimingMode (мышь / стик)  двухкнопочный bind

//@008    - отключаем ст. механизм триггеров для ZL/ZR Joy-Con только при переназначении

//@009    - ZL ZR HOME CAPTURE биндятся в XpoxProfile

//@010    - Сообщение о переносе блока Xbox Wheel в Универсальный блок Wheel для XBOX и KM, теперь он после старого блока Wheel в KM

//@011    - Driving Mode Hotkey двухкнопочный бинд 

//@012    - AimingToggleButton (Gyro on\off ) двухкнопочный bind + AimingByPressingMode 

//@013    - Фикс чтоб на HOME эмулировались кнопки KM в XboxProfile

//@014    - add EmuGamepadEnabled для эмуляции KM всех кнопок в XboxProfiles
//@015    - Разделене BACK START в KM для SONY и N как в Xbox

//@016    - CAPTURE и HOME в KM

//@017     -УНИВЕРСАЛЬНЫЙ БЛОК WHEEL Для Xbox и KM + Timer патч: Wheel плохо эмулировал (частые пропуски) кнопки Xbox при SleepTimeOut<15. Теперь SleepTimeOut=8 плавный Gyro и норм Wheel. При 66,67 реально видно как курсор мышки дрожит при пермещении, 125hz самое то.
