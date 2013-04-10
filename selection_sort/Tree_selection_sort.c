/**************************************
 * @file	Tree_selection_sort.c
 * @auther	yangfan
 * @brief	DStruct study
 **************************************/
#include <stdio.h>
#include "sort_method.h"

void main (void)
{
	int O_arr[] = {23,3, 3,2,5,246,5,25,54,245,6,26,524,6,24,6,32,5,45,74,6,13,6475,3,8,721};
	int i;
	 
//	tree_selection_sort (O_arr, sizeof (O_arr)/sizeof (int));
	heap_sort (O_arr, sizeof (O_arr)/sizeof (int));

	for (i = 0; i < sizeof (O_arr) / sizeof (int); i ++)
	{
		printf ("%d ", O_arr[i]);
	}

	printf ("\n");
	
	return;
}
