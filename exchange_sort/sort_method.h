/**************************************
 * bubble sort method
 **************************************/

#define TRUE 1
#define FALSE 0

typedef int BOOL;

void bubble_sort (int O_arr[], int num)
{
	int i, j;
	BOOL  changed = TRUE;
	
	for (i = 0; i < num - 1 && changed; i ++)
	{
		changed = FALSE;
		for (j = 0; j < num - i; j ++)
		{
			if (O_arr[j] > O_arr[j + 1])
			{
				O_arr[j] ^= O_arr[j + 1];
				O_arr[j + 1] ^= O_arr[j];
				O_arr[j] ^= O_arr[j + 1];
				changed = TRUE;
			}
		}
	}

}

/**************************************
 * fast sort method
 **************************************/

#define LOW 0x1
#define HIGH 0x0
#define is_low(direc)	direc|0x0
						  
void fast_sort_once (int O_arr[], int head, int end)
{
	int L = head, H = end;
	int mid = O_arr[head];
	int LH = LOW;

	if (end == head || end < head)
		return;


	while (L < H)
	{
		if (is_low (LH))
		{
			if (O_arr[H] < mid)
			{
				O_arr[L] = O_arr[H];
				LH = HIGH;
				L ++;
			}
			else
				H --;
		}
		else 
		{
			if (O_arr[L] > mid)
			{
				O_arr[H] = O_arr[L];
				LH = LOW;
				H --;
			}
			else
				L ++;
		}
	}

	O_arr[L] = mid; 
	
	fast_sort_once (O_arr, head, L - 1);
	fast_sort_once (O_arr, L + 1, end);
	
	return;
}

void fast_sort (int O_arr[], int num)
{
	fast_sort_once (O_arr, 0, num - 1);	
}

