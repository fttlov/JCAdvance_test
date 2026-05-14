// Код с фильтрами сглаживания мыши и стика. Стик сильно шумит в простое - отключил 
	  // Выбираем коэффициенты в зависимости от текущего режима (Мышь или Стик)
	  /*float currentSmoothX = AppStatus.AimMode == AimMouseMode ? PrimaryGamepad.Motion.MouseSmoothX : PrimaryGamepad.Motion.JoySmoothX; // Экранная горизонталь
	  float currentSmoothY = AppStatus.AimMode == AimMouseMode ? PrimaryGamepad.Motion.MouseSmoothY : PrimaryGamepad.Motion.JoySmoothY; // Экранная вертикаль


	  // Применяем Фильтры: velocityX - наклон кисти вверх-вниз (экранная ось Y), применяем currentSmoothY
	  PrimaryGamepad.Motion.SmoothVelX = (PrimaryGamepad.Motion.SmoothVelX * currentSmoothY) + (velocityX * (1.0f - currentSmoothY));

	  // velocityY - поворот кисти влево-вправо (экранная ось X), применяем currentSmoothX
	  PrimaryGamepad.Motion.SmoothVelY = (PrimaryGamepad.Motion.SmoothVelY * currentSmoothX) + (velocityY * (1.0f - currentSmoothX));

      if (AppStatus.AimMode == AimMouseMode) {
        // Механика "стягивания" (отсечения дрожи) работает ТОЛЬКО для мыши.
        // Фильтр от тряски "руки алкаша" для мыши. Юзаемм оригинальный сырой InputSize, чтобы порог срабатывал четко.
        if (InputSize < Tightening && Tightening > 0)
          TightenedSensitivity *= InputSize / Tightening;

		// Передаем СГЛАЖЕННУЮ скорость в эмулятор мыши
        MouseMove(-PrimaryGamepad.Motion.SmoothVelY * TightenedSensitivity * AppStatus.FrameTime *
                      PrimaryGamepad.Motion.SensX *
                      PrimaryGamepad.Motion.CustomMulSens,
                  -PrimaryGamepad.Motion.SmoothVelX * TightenedSensitivity * AppStatus.FrameTime *
                      PrimaryGamepad.Motion.SensY *
                      PrimaryGamepad.Motion.CustomMulSens);

      } else { // Mouse-Joystick. Тут дело не в тряске, а неровном положении в руке Joy-con, особенно для для оси Y
        report.sThumbRX =	// Передаем СГЛАЖЕННУЮ скорость в стики Xbox
            std::clamp((int)(ClampFloat(-(PrimaryGamepad.Motion.SmoothVelY * TightenedSensitivity *
                                          AppStatus.FrameTime *
                                          PrimaryGamepad.Motion.JoySensX *
                                          PrimaryGamepad.Motion.CustomMulSens),
                                        -1, 1) *
                                 32767 +
                             report.sThumbRX),
                       -32767, 32767);
        report.sThumbRY =
            std::clamp((int)(ClampFloat(PrimaryGamepad.Motion.SmoothVelX * TightenedSensitivity *
                                            AppStatus.FrameTime *
                                            PrimaryGamepad.Motion.JoySensY *
                                            PrimaryGamepad.Motion.CustomMulSens,
                                        -1, 1) *
                                 32767 +
                             report.sThumbRY),
                       -32767, 32767);
      }*/