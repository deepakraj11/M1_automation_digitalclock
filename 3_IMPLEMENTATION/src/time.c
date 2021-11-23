/**
 * @file main.c
 * @author deepak
 * @brief 
 * @version 0.1
 * @date 2021-11-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <time.h>
#include <stdio.h>
int main(int argc, char **argv){
	int position;
	int i;
	int colour_1;

	if(argc==1){
		// Default colour: white
		colour_1 = 7;	
	}
	else if(argc==3){
		char *colour=(argv[2]);
		colour_1 = input_colour(colour);	// Required colour
			if(colour_1==100){
				printf("You have entered an invalid colour\n");
				return 0;
			}
	}

	else{
		printf("Too many arguments\n");
			return 0;
	}
	
