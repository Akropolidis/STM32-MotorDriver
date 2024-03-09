#include "stm32f4xx.h"
#include "pwm.h"

int cycle = 0;
uint16_t counter = 0;
int main(void)
{
	uart2_rxtx_init();
	Tim4_Ch1_Init();
	Tim2_Ch1_Init();

	Motor_B_Forward(55);
	Motor_A_Forward(55);
	Delay(5000);

	Motor_A_Brake();
	Motor_B_Brake();
	Delay(5000);

	Motor_A_Reverse(55);
	Motor_B_Reverse(55);
	Delay(5000);

	Motor_A_Brake();
	Motor_B_Brake();
	Delay(5000);
//	tim2_pa5_pwm();
//	Encoder_A_Init();

	while(1)
	{
//		Motor_B_Forward(55);
//		Motor_A_Forward(55);
//		Delay(5000);
//
//		Motor_B_Brake();
//		Delay(5000);
//		Delay(5000);

		printf("Counter: %d\n\n\r", counter);
//		Delay(1000);
//		cycle++;

	}
}
