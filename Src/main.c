#include "stm32f4xx.h"
#include "motor_driver.h"

#define MOTORDIAMETER	60 //Motor Diameter

int main(void)
{
	uart2_rxtx_init();
	Tim2_Ch1_Init();
//	tim2_pa5_pwm();
//	Tim4_Ch1_Init();

	Encoder_A_Init();
//	Encoder_B_Init();
//	reset_Encoder_A_counts();
//	Motor_A_Reverse(70);
	Motor_A_Forward(60);
	while(1)
	{
		int pulses = get_Encoder_A_counts();
		printf("Pulses: %d\n\n\r", pulses);
		reset_Encoder_A_counts();
		Delay(4000);
//		int distanceA = Motor_A_Dist_mm(MOTORDIAMETER);
//		int distanceB = Motor_B_Dist_mm(MOTORDIAMETER);
//		printf("DistanceA: %d mm\n\n\n\n\r", distanceA);
//		printf("DistanceB: %d mm\n\n\n\n\r", distanceB);


	}
}
