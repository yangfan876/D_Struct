/**************************************
 * @file 	bubble_sort.c
 * @auther	yangfan
 * @brief	implement for bubble sort
 **************************************/

#include <stdio.h>
#include "sort_method.h"

void main (void)
{
	int O_arr[] = {12, 23, 21, 54, 32, 76, 23, 34,13, 46, 78, 34 ,67, 23, 90};
	int i;

	bubble_sort (O_arr, sizeof (O_arr) / sizeof (int));

	for (i = 0; i < sizeof (O_arr) / sizeof (int); i ++)
	{
		printf ("%d ", O_arr[i]);
	}
	printf ("\n");

	return;
}



