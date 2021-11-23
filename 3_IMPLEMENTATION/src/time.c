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
#define cols_number 30
#define rows_number 8
#define number_of_elements 11

typedef struct{
	char element[rows_number][cols_number];
	char element_char;
}elements_struct;
	
elements_struct elements[number_of_elements];
