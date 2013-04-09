/******************************************
 * @file 	fast_sort.c
 * @auther	yangfan
 * @brief	implement the fast sort metho
 * ****************************************/

#include <stdio.h>
#include "sort_method.h"

void main (void)
{
	int O_arr[] = {12, 23, 21, 34,45, 653, 245,35327,686,254,68,254,53};
	int i;

	fast_sort (O_arr, sizeof (O_arr) / sizeof (int));

	for (i = 0; i < sizeof (O_arr) / sizeof (int); i ++)
	{
		printf ("%d ", O_arr[i]);
	}
	printf ("\n");

	return;
}
