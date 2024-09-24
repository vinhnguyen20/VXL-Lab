/*
 * Lab_1_Ex_4.c
 *
 *  Created on: Sep 10, 2024
 *      Author: vinhn
 */

#include "Lab_1_Ex_4.h"
#include "stm32f1xx_hal.h"


int counter_4 = 9;


void init_exercise4(){
	HAL_GPIO_TogglePin(GPIOB, SEGMENT_0_EX4_Pin);
	HAL_GPIO_TogglePin(GPIOB, SEGMENT_1_EX4_Pin);
	HAL_GPIO_TogglePin(GPIOB, SEGMENT_2_EX4_Pin);
	HAL_GPIO_TogglePin(GPIOB, SEGMENT_3_EX4_Pin);
	HAL_GPIO_TogglePin(GPIOB, SEGMENT_4_EX4_Pin);
	HAL_GPIO_TogglePin(GPIOB, SEGMENT_5_EX4_Pin);
	HAL_GPIO_TogglePin(GPIOB, SEGMENT_6_EX4_Pin);
}



void exercise4_run(){

	switch(counter_4){
	   case 0:
		   HAL_GPIO_WritePin(GPIOB, SEGMENT_0_EX4_Pin, GPIO_PIN_RESET);
		   HAL_GPIO_WritePin(GPIOB, SEGMENT_1_EX4_Pin, GPIO_PIN_RESET);
		   HAL_GPIO_WritePin(GPIOB, SEGMENT_2_EX4_Pin, GPIO_PIN_RESET);
		   HAL_GPIO_WritePin(GPIOB, SEGMENT_3_EX4_Pin, GPIO_PIN_RESET);
		   HAL_GPIO_WritePin(GPIOB, SEGMENT_4_EX4_Pin, GPIO_PIN_RESET);
		   HAL_GPIO_WritePin(GPIOB, SEGMENT_5_EX4_Pin, GPIO_PIN_RESET);
		   HAL_GPIO_WritePin(GPIOB, SEGMENT_6_EX4_Pin, GPIO_PIN_SET);
	       break;
	  case 1:
		   HAL_GPIO_WritePin(GPIOB, SEGMENT_0_EX4_Pin, GPIO_PIN_SET);
		   HAL_GPIO_WritePin(GPIOB, SEGMENT_1_EX4_Pin, GPIO_PIN_RESET);
		   HAL_GPIO_WritePin(GPIOB, SEGMENT_2_EX4_Pin, GPIO_PIN_RESET);
		   HAL_GPIO_WritePin(GPIOB, SEGMENT_3_EX4_Pin, GPIO_PIN_SET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_4_EX4_Pin, GPIO_PIN_SET);
		   HAL_GPIO_WritePin(GPIOB, SEGMENT_5_EX4_Pin, GPIO_PIN_SET);
		   HAL_GPIO_WritePin(GPIOB, SEGMENT_6_EX4_Pin, GPIO_PIN_SET);
		   break;
	  case 2:
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_0_EX4_Pin, GPIO_PIN_RESET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_1_EX4_Pin, GPIO_PIN_RESET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_2_EX4_Pin, GPIO_PIN_SET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_3_EX4_Pin, GPIO_PIN_RESET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_4_EX4_Pin, GPIO_PIN_RESET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_5_EX4_Pin, GPIO_PIN_SET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_6_EX4_Pin, GPIO_PIN_RESET);
	       break;
	  case 3:
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_0_EX4_Pin, GPIO_PIN_RESET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_1_EX4_Pin, GPIO_PIN_RESET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_2_EX4_Pin, GPIO_PIN_RESET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_3_EX4_Pin, GPIO_PIN_RESET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_4_EX4_Pin, GPIO_PIN_SET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_5_EX4_Pin, GPIO_PIN_SET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_6_EX4_Pin, GPIO_PIN_RESET);
	       break;
	  case 4:
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_0_EX4_Pin, GPIO_PIN_SET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_1_EX4_Pin, GPIO_PIN_RESET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_2_EX4_Pin, GPIO_PIN_RESET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_3_EX4_Pin, GPIO_PIN_SET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_4_EX4_Pin, GPIO_PIN_SET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_5_EX4_Pin, GPIO_PIN_RESET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_6_EX4_Pin, GPIO_PIN_RESET);
	       break;
	   case 5:
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_0_EX4_Pin, GPIO_PIN_RESET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_1_EX4_Pin, GPIO_PIN_SET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_2_EX4_Pin, GPIO_PIN_RESET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_3_EX4_Pin, GPIO_PIN_RESET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_4_EX4_Pin, GPIO_PIN_SET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_5_EX4_Pin, GPIO_PIN_RESET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_6_EX4_Pin, GPIO_PIN_RESET);
	       break;
	   case 6:
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_0_EX4_Pin, GPIO_PIN_RESET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_1_EX4_Pin, GPIO_PIN_SET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_2_EX4_Pin, GPIO_PIN_RESET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_3_EX4_Pin, GPIO_PIN_RESET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_4_EX4_Pin, GPIO_PIN_RESET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_5_EX4_Pin, GPIO_PIN_RESET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_6_EX4_Pin, GPIO_PIN_RESET);
	       break;
	   case 7:
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_0_EX4_Pin, GPIO_PIN_RESET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_1_EX4_Pin, GPIO_PIN_RESET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_2_EX4_Pin, GPIO_PIN_RESET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_3_EX4_Pin, GPIO_PIN_SET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_4_EX4_Pin, GPIO_PIN_SET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_5_EX4_Pin, GPIO_PIN_SET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_6_EX4_Pin, GPIO_PIN_SET);
	       break;
	   case 8:
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_0_EX4_Pin, GPIO_PIN_RESET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_1_EX4_Pin, GPIO_PIN_RESET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_2_EX4_Pin, GPIO_PIN_RESET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_3_EX4_Pin, GPIO_PIN_RESET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_4_EX4_Pin, GPIO_PIN_RESET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_5_EX4_Pin, GPIO_PIN_RESET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_6_EX4_Pin, GPIO_PIN_RESET);
	       break;
	   case 9:
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_0_EX4_Pin, GPIO_PIN_RESET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_1_EX4_Pin, GPIO_PIN_RESET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_2_EX4_Pin, GPIO_PIN_RESET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_3_EX4_Pin, GPIO_PIN_RESET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_4_EX4_Pin, GPIO_PIN_SET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_5_EX4_Pin, GPIO_PIN_RESET);
	       HAL_GPIO_WritePin(GPIOB, SEGMENT_6_EX4_Pin, GPIO_PIN_RESET);
	       break;
	   default:
	       break;
  }

	counter_4--;
	if(counter_4 < 0){
		counter_4 = 9;
	}
}



