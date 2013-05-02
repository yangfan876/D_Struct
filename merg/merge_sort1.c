#include <stdio.h>
#include <stdlib.h>

void merg (int num[], int left1, int right1, int right2);
void merg_sort (int num[], int left, int right);

void main (void)
{
	int num[] = {2,3,34,545,14,2,45,1,24,5,1,34,245,1,354,52,134,4,3,4,3,24,32,5,254,354,3,6,3,56,356,55,36};
	int i;

#define len_arr (sizeof(num)/sizeof(int))

	merg_sort (num, 0, len_arr-1);

	for (i = 0; i < (sizeof (num)/sizeof (int)); i ++)
		printf ("%d\t", num[i]);
	printf ("\n");
	return;
}

void merg_sort (int num[], int left, int right)
{
	if (left == right)
		return;

	merg_sort (num, left, (left+right)/2);
	merg_sort (num, (left+right)/2+1, right);
	merg (num, left, (left+right)/2, right);

	return;
}


void merg (int num[], int start1, int end1,  int end2)
{
	int start2 = end1 + 1;
	int *tmp = (int *)malloc ((end2-start1+1)*4);
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
}
