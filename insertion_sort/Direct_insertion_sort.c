/**************************************
 * @file 	Direct_insertion_sort.c
 * @auther	yangfan
 * @brief	just dirct insertion sort
 **************************************/

#include <stdio.h>

void Direct_insertion_sort (int O_arr[], int N_arr[], int num);
void move_insert (int O_arr, int N_arr[], int pos, int count);

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

void Direct_insertion_sort (int O_arr[], int N_arr[], int num)
{
	int i, j, load, count, pos;
	
	count = 0;

	for (i = 0; i < num; i ++)
	{
		pos = 0;

		for (j = 0; j < count; j ++)
		{
			if (O_arr[i] > N_arr[j])
				pos = j + 1;
			else
				break;
		}

		move_insert (O_arr[i], N_arr, pos, count);
		count ++;
	}
}

void move_insert (int elem, int N_arr[], int pos, int count)
{
	int i;
	for (i = count - 1; i >= pos; i --)
	{
		N_arr[i + 1] = N_arr[i];
	}
	N_arr[pos] = elem;
	return;
}
