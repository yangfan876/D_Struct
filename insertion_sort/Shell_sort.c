/*********************************
 * @file	Shell_sort
 * @auther	yangfan
 * @brief	implement the shell
 * 			sort method
 *********************************/

#include <stdio.h>
#include "sort_method.h"

void main (void)
{
	int O_arr[] = {32, 23,46, 23,14,46,247,6,3,3,652,46,24,5,6254,23};

#define NUM_OARR (sizeof (O_arr) / sizeof (int))

	int N_arr[NUM_OARR];
	int i;

	shell_sort (O_arr, N_arr, NUM_OARR, 5);

	for (i = 0; i < NUM_OARR; i ++)
	{
		printf ("%d ", O_arr[i]);
	}

	printf ("\n");
	return;

	
}
