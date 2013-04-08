/**************************************
 * @file 	Direct_insertion_sort.c
 * @auther	yangfan
 * @brief	just dirct insertion sort
 **************************************/

#include <stdio.h>
#include "sort_method.h"

void Direct_insertion_sort (int O_arr[], int N_arr[], int num);

void main (void)
{
	int O_arr[] = {12, 23, 21, 54, 32, 76, 23, 34,13, 46, 78, 34 ,67, 23, 90};
	int N_arr[sizeof (O_arr) / sizeof (int)];
	int i;

	Direct_insertion_sort (O_arr, N_arr, sizeof (O_arr) / sizeof (int));

	for (i = 0; i < sizeof (O_arr) / sizeof (int); i ++)
	{
		printf ("%d ", N_arr[i]);
	}
	printf ("\n");

	return;
}


