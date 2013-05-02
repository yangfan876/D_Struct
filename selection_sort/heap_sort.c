/********************************************
 *@filename:	heap_sort.c
 *@auther:	yangfan
 *@brief:	this code implement the heap
 *			sort function.
 ********************************************/


#include <stdio.h>

int heap_sort (int arr[], int num);
void sink_down (int arr[], int i, int num);
void create_heap (int arr[], int num);

void main (void)
{
	int arr [] = {2,4,3,6,5,1,8,7};
	int i;

#define len_arr(arr) ((sizeof (arr))/(sizeof (arr[0])))
	for (i = 0; i < len_arr(arr); i ++)
	{
		printf ("%d\t", arr[i]);
	}
	printf ("\n");

	
	create_heap (arr, len_arr(arr)-1);
	heap_sort (arr, len_arr(arr)-1);
	for (i = 0; i < len_arr(arr); i ++)
	{
		printf ("%d\t", arr[i]);
	}
	printf ("\n");
}

void sink_down (int arr[], int i, int num)
{
/*递归的代码。
 * int tmp;
	if (2*i+2 <= num)
	{
		if (arr[i] < arr[2*i+1] && arr[2*i+1] > arr[2*i+2])
		{
			arr[i] ^= arr[2*i+1];
			arr[2*i+1] ^= arr[i];
			arr[i] ^= arr[2*i+1];
			tmp = 2*i+1;
	    }
		else if (arr[i] < arr[2*i+2])
		{
			arr[i] ^= arr[2*i+2];
			arr[2*i+2] ^= arr[i];
			arr[i] ^= arr[2*i+2];
			tmp = 2*i+2;
		}
	}
	else if (2*i+1 <= num)
	{
		if (arr[i] < arr[2*i+1])
		{
			arr[i] ^= arr[2*i+1];
			arr[2*i+1] ^= arr[i];
			arr[i] ^= arr[2*i+1];
			tmp = 2*i+1;
	    }
	}
	else
	{
		return;
	}
	sink_down (arr, tmp, num);
	return;
*/

/*非递归代码*/
	int done = 0;

	while (2*i+1 <= num && (!done))
	{
		i = 2*i+1;

		if (i < num && arr[i+1] > arr[i])
		{
			i++;
		}

		if (arr[(i-1)/2] < arr[i])
		{
			arr[(i-1)/2] ^= arr[i];
			arr[i] ^= arr[(i-1)/2];
			arr[(i-1)/2] ^= arr[i];
		}
		else
		{
			done = 1;
		}
	}
}

void create_heap (int arr[], int num)
{
	int i;

	i = num%2 == 0 ? num/2-1 : num/2;
	for (; i >= 0; i --)
	{
		if (arr[i] < arr[2*i+1] || arr[i] < arr[2*i+2])
		{
			sink_down (arr, i, num);
		}
	}
}

int heap_sort (int arr[], int num)
{
	
	int i, tmp = num + 1;

	while (num > 0)
	{
		arr[0] ^= arr[num];
		arr[num] ^= arr[0];
		arr[0] ^= arr[num];
		sink_down (arr, 0, --num);

/*		for (i = 0; i < tmp; i ++)
		{
			printf ("%d\t", arr[i]);
		}
		printf ("\n");
*/
	}

	return 1;	
}
