#include "stm32f4xx.h"
#include "motor_driver.h"

#define MOTORDIAMETER	60 //Motor Diameter

int main(void)
{
	uart2_rxtx_init();
//	Tim2_Ch1_Init();
//	Tim4_Ch1_Init();

	Encoder_B_Init();
	reset_Encoder_B_counts();
//	Motor_A_Forward(50);
	while(1)
	{
//		int pulses = get_Encoder_B_counts();
//		printf("Pulses: %d\n\n\r", pulses);
		int distance = Motor_B_Dist_mm(MOTORDIAMETER);
		printf("Distance: %d mm\n\n\r", distance);

	}
}
