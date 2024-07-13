#include "led.h"
void flash_led(led_t *led_o , led_t led_i){
	cnt_t i;
	for(i=0;i<CNT_MAX;i++)
	{
		if(i==FLASH_FLAG)
		{
			*led_o = ~led_i;
		}
	}
}