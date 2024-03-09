#ifndef PWM_H_
#define PWM_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdio.h>
#include "uart.h"

void tim2_pa5_pwm(void);
void Delay(uint32_t duration);

void Tim2_Ch1_Init(void); //32-bit resolution
void Tim2_Ch2_Init(void);
void Tim4_Ch1_Init(void);

void pwm_set_frequency(uint32_t Freq, uint32_t timer);
void pwm_set_dutycycle(uint32_t DutyCycle, uint32_t timer);

void Encoder_A_Init(void); //Initializing encoder on Motor A
void Motor_A_Forward(uint32_t speed);
void Motor_A_Reverse(uint32_t speed);
void Motor_A_Brake(void); // This is a soft break from the motor controller
void Motor_A_Status(void);

void Motor_B_Forward(uint32_t speed);
void Motor_B_Reverse(uint32_t speed);
void Motor_B_Brake(void); // Make soft break
void Motor_B_Status(void);

void Motors_Forward(uint32_t speed);

#ifdef __cplusplus
}
#endif

#endif /* PWM_H_ */
