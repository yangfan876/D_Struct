/**************************************
 * @file 	Half_insertion_sort	
 * @auther	yangfan
 * @brief	improve the Direct 
 * 			insertion sort
 **************************************/

#include <stdio.h>
#include "useful_code.h"

void half_selection_sort (int O_arr[], int N_arr[], int num);
int half_find_pos (int elem, int N_arr[], int count);

void main (void)
{
	int O_arr[] = {32, 23,46, 23,14,46,247,6,3,3,652,46,24,5,6254,23};

#define NUM_OARR (sizeof (O_arr) / sizeof (int))

	int N_arr[NUM_OARR];
	int i;

	half_selection_sort (O_arr, N_arr, NUM_OARR);
	
	for (i = 0; i < NUM_OARR; i ++)
	{
		printf ("%d ", N_arr[i]);
	}

	printf ("\n");
	return;
}

void half_selection_sort (int O_arr[], int N_arr[], int num)
{
	int i, count = 0;

	for (i = 0; i < num; i ++)
	{
		move_insert (O_arr[i], N_arr, \
			half_find_pos (O_arr[i], N_arr, count), count);
		count ++;
	}
}

int half_find_pos (int elem, int N_arr[], int count)
{
	int i, left = 0, right = count - 1;

	if (right < left)
		return left;

	while (left <= right)
	{
		if (elem < N_arr[left])
			return left;
		if (elem > N_arr[right])
			return right + 1;
		if (elem > N_arr[(left + right) / 2])
			left = (left + 1 + right) / 2;
		else if (elem < N_arr[(left + right) / 2])
			right = (left + right - 1) / 2;
		else
			return (right + left) / 2;
	}
}
