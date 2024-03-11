#include "stm32f4xx.h"
#include "pwm.h"



int main(void)
{
	uart2_rxtx_init();
	Tim2_Ch1_Init();
//	Tim4_Ch1_Init();

	Encoder_A_Init();
	reset_Encoder_A_counts();
	Motor_A_Forward(50);
	while(1)
	{
		int pulses = get_Encoder_A_counts();
		printf("Pulses: %d\n\n\r", pulses);

	}
}
