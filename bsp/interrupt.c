//
// Created by 19182 on 25-3-10.
//

#include "interrupt.h"

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin) {
    if (GPIO_Pin == GPIO_PIN_1) {
        HAL_GPIO_TogglePin(LED_0_GPIO_Port, LED_0_Pin);
    }
}
