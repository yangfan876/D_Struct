/*******************************************
 * implement the direct insert sort method
 * *****************************************/

#define MAX ((1 << 30) - 1)

void simple_selection_sort (int O_arr[], int N_arr[], int num)
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

/*******************************************
* implement the direct insert sort method
* *****************************************/
void tree_selection_sort (int O_arr, int num)
{
	
}

void adjust_heap (int O_arr[], int num, int start)
{
	if (O_arr[start] < O_arr[start*2+1] && \
			O_arr[start*2+1] >= O_arr[start*2+2] && (start*2+1) <= num)
	{
		O_arr[start] ^= O_arr[start*2+1];
		O_arr[start*2+1] ^= O_arr[start];
		O_arr[start] ^= O_arr[start*2+1];
		adjust_heap(O_arr, num, start*2+1);
	}
	if (O_arr[start] < O_arr[start*2+2] && (start*2+2) <= num)
	{
		O_arr[start] ^= O_arr[start*2+2];
		O_arr[start*2+2] ^= O_arr[start];
		O_arr[start] ^= O_arr[start*2+2];
		adjust_heap(O_arr, num, start*2+2);
	}
	return;
}

#define TRUE 1
#define FALSE 0

int is_heap (int O_arr[], int num, int start)
{
	int i, TF;
	for (i = 0; i <= num; i ++)	
	{
		
		if (i*2+1 < num)
		{
			if (O_arr[i] < O_arr[2*i+1])
				return FALSE;

		}
		else
			continue;

		if (i*2+2 < num)
		{
			if (O_arr[i] < O_arr[2*i+2])
				return FALSE;
		}
		else
			continue;

	}
	return TRUE;
}

void biuld_heap (int O_arr[], int num)
{
	int i;
	while (1)
	{
		for (i = 0; i < num; i ++)
		{
			if (is_heap (O_arr, num, 0))
				return;
			else
				adjust_heap (O_arr, num, i);
		}
	}
}

void heap_sort (int O_arr[], int num)
{
	num -= 1;
	
	biuld_heap (O_arr, num);

	while (num >= 1)
	{
		adjust_heap (O_arr, num, 0);
		O_arr[0] ^= O_arr[num];
		O_arr[num] ^= O_arr[0];
		O_arr[0] ^= O_arr[num];
		num --;
	}
}
