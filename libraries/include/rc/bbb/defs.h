#ifndef RC_BBB_DEFS_H
#define RC_BBB_DEFS_H

//// input pins
// gpio # for gpio_a.b = (32*a)+b
#define PAUSE_BTN 69 	//gpio2.5 P8.9
#define MODE_BTN  68	//gpio2.4 P8.10
#define IMU_INTERRUPT_PIN 117  //gpio3.21 P9.25

//// gpio output pins 
#define RED_LED 	66	//gpio2.2	P8.7
#define GRN_LED 	67	//gpio2.3	P8.8
#define MDIR1A    	60	//gpio1.28  P9.12
#define MDIR1A_BLUE 64  //gpio2.0 pin T13
#define MDIR1B    	31	//gpio0.31	P9.13
#define MDIR2A    	48	//gpio1.16  P9.15
#define MDIR2B    	81	//gpio2.17  P8.34
#define MDIR2B_BLUE 10  //gpio0.10  P8_31
#define MDIR4A    	70	//gpio2.6   P8.45
#define MDIR4B    	71	//gpio2.7   P8.46
#define MDIR3B    	72	//gpio2.8   P8.43
#define MDIR3A    	73	//gpio2.9   P8.44
#define MOT_STBY  	20	//gpio0.20  P9.41
#define DSM_PIN    30 	//gpio0.30 	P9.11
#define SERVO_PWR	80	//gpio2.16 P8.36
#define SPI1_SS1_GPIO_PIN 	113 //gpio3.17	P9.28 
#define SPI1_SS2_GPIO_PIN 	49  //gpio1.17	P9.23 

//// BB Blue GPIO OUT
#define BLUE_GP0_PIN_4 49 // gpio 1_17 pin P9.23

// Battery Indicator LEDs
#define BATT_LED_1	27 // P8.17
#define BATT_LED_2	65 // P8.18
#define BATT_LED_2_BLUE 11 // different on BB Blue
#define BATT_LED_3	61 // P8.26
#define BATT_LED_4	26 // P8.14

#define DC_JACK_OFFSET -0.15
#define LIPO_OFFSET -0.10
#define LIPO_ADC_CH 6
#define DC_JACK_ADC_CH  5
#define V_DIV_RATIO 11.0

#endif // RC_BBB_DEFS_H
