/**************************************
 * @file	Simple_selection_sort.c
 * @auther	yangfan
 * @brief	DStruct study
 **************************************/

#include <stdio.h>
#include "sort_method.h"

void main (void)
{
	int O_arr[] = {23, 3, 12 ,23, 2, 23, 54, 234};
	int N_arr[sizeof (O_arr) / sizeof (int)];
	int i;
	 
	simple_selection_sort (O_arr, N_arr, sizeof (O_arr)/sizeof (int));
	
	for (i = 0; i < sizeof (O_arr) / sizeof (int); i ++)
	{
		printf ("%d ", N_arr[i]);
	}

	printf ("\n");
	
	return;
}


