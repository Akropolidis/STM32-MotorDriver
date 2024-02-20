//#include <stdint.h>
//#include <stdio.h>
#include "stm32f4xx.h"
#include "pwm.h"

int cycle = 0;
uint16_t counter = 0;
int main(void)
{
	uart2_rxtx_init();
	Tim2_Ch1_Init();
	Tim2_Ch2_Init();
	Encoder_A_Init();

	while(1)
	{
		Motor_A_Forward(75);
		counter = TIM4->CNT;
//		Motor_B_Forward(75);
//		Delay(5000);
//
//		Motor_A_Brake();
//		Delay(5000);
//		Delay(5000);

		printf("Counter: %d\n\n\r", counter);
//		Delay(1000);
//		cycle++;

	}
}
