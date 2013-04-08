#include "useful_code.h"

/****************************************
 * Direct insert sort method
 ****************************************/

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

/******************************************
 * Half selection sort method
 ******************************************/
void half_insertion_sort (int O_arr[], int N_arr[], int num)
{
	int i, count = 0;

	for (i = 0; i < num; i ++)
	{
		move_insert (O_arr[i], N_arr, \
			half_find_pos (O_arr[i], N_arr, count), count);
		count ++;
	}
}

/*****************************************
 * Shell sort method
 *****************************************/

void shell_sort (int O_arr[], int N_arr[], int num, int dist)
{
	int i, j, step, load, count, pos;

	while (dist > 0)
	{
		for (step = 0; step < dist; step ++)
		{
			count = 0;
			for (i = step; i < num; i += dist)
			{
				pos = step;
	
				for (j = step; j < count * dist; j += dist)
				{
					if (O_arr[i] > N_arr[j])
						pos = j + dist;
					else
						break;
				}

				move_insert_dist (O_arr[i], N_arr, pos, count, dist, step);
				count ++;
			}
		}
		dist = (dist > 3) ? dist - 3 : 0;
	}
	Direct_insertion_sort (N_arr, O_arr, num);
}
