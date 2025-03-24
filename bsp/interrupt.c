//
// Created by 19182 on 25-3-10.
//

#include "interrupt.h"

extern uint8_t g_btn1_flag;
extern uint8_t g_btn2_flag;
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin) {
    if (GPIO_Pin == GPIO_PIN_1) {
        g_btn1_flag = 1;
    }
    if (GPIO_Pin == GPIO_PIN_2) {
        g_btn2_flag = 1;
    }
}

extern uint8_t g_tim6_flag;
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
    g_tim6_flag = 1;
}
