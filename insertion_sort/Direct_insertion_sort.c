/**************************************
 * @file 	Direct_insertion_sort.c
 * @auther	yangfan
 * @brief	just dirct insertion sort
**************************************/

#include <stdio.h>

#define MAX ((1 << 30) - 1)

void Direct_insert_sort (int O_arr[], int N_arr[], int num);

void main (void)
{
	int O_arr[] = {3, 5, 2, 6, 3, 1, 6, 1};
	int N_arr[sizeof (O_arr)];
	int i;
	 
	Direct_insert_sort (O_arr, N_arr, sizeof (O_arr)/sizeof (int));
	
	for (i = 0; i < sizeof (O_arr) / sizeof (int); i ++)
	{
		printf ("%d ", N_arr[i]);
	}

	printf ("\n");
	
	return;
}

void Direct_insert_sort (int O_arr[], int N_arr[], int num)
{
	int i;
	int min, load, count = num;
		
	load = 0;

	while (num >= 0)
	{
		min = 0;

		for (i = 1; i < count; i ++)
		{
			min = (O_arr[min] > O_arr[i]) ? i : min;
		}

		num --;
		N_arr[load] = O_arr[min];
		O_arr[min] = MAX;
		load ++;
	}
	return;
}
