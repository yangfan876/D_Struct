#include <stdio.h>
#include <stdlib.h>

#define len_arr(arr) ((sizeof (arr))/(sizeof (arr[0])))

/*void merg (int num[], int start1, int end1,  int end2);

void main (void)
{
	
	int num[] = {2, 43, 4, 23 ,452 ,354, 2, 3, 3,2,53, 34, 54, 134, 653, 245};


	int i, start1, end1, end2;
	
	printf ("the lenth of arr is: %d\n", len_arr(num));

	for (i = 0; i < len_arr(num); i *= 2)
	{
		for (start1 = 0; start1 < len_arr(num)-i; start1 = end2+1)
		{
			end1 = start1+i;
			end2 = end1+i;
			if (end2 > len_arr(num))
			{
				end2 = len_arr(num)-1;
			}
			merg (num, start1, end1, end2);
		}
		if (i == 0)
		{
			i = 1;
		}
	}
	

	
	for (i = 0; i < len_arr(num); i ++)
	{
		printf ("%d\t", num[i]);
	}
	printf ("\n");
}

void merg (int num[], int start1, int end1,  int end2)
{
	int start2 = end1;
	int *tmp = (int *)malloc (18*4);
	int k = 0, start = start1;
	int i = 0;

	while (start1 <= end1 && start2 <= end2)
	{
		if (num[start1] <= num[start2])
		{
			tmp[k++] = num[start1++];
		}
		else if (num[start2] < num[start1])
		{
			tmp[k++] = num[start2++];
		}
	}
	while (start1 <= end1)
	{
		tmp[k++] = num[start1++];
	}
	start1 = start;
	while (start < start1+k)
	{
		num[start++] = tmp[i++];
	}
	return;
}*/


main ()
{
	int i;
	int num[] = {2, 43, 4, 23 ,452 ,354, 2, 3, 3,2,53, 34, 54, 134, 653, 245};
	merge_sort (num, sizeof(num)/sizeof(num[0]));

	for (i = 0; i < len_arr(num); i ++)
	{
		printf ("%d\t", num[i]);
	}
	printf ("\n");
}

merge_sort (int *num, int length)
{
	int *tmp = (int *) malloc (length*sizeof (int));
	int start1, end1, start2, end2, i;
	int k;

	for (i = 1; i < length; i *= 2)
	{
		for (start1 = 0; start1 < length-i; start1 = end2)
		{
			end1 = start2 = start1+i;
			end2 = start2+i;
			
			if (end2 > length)
			{
				end2 = length;
			}
			k = 0;
	
			while (start1 < end1 && start2 < end2)
			{
				tmp[k++] = num[start1] < num[start2] ? num[start1++] : num[start2++];
			}
			while (start1 < end1)
			{
				num[--start2] = num[--end1];
			}
			while (k > 0)
			{
				num[--start2] = tmp[--k];
			}
		
		}
	}
}
