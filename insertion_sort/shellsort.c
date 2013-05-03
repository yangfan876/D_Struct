#include <stdio.h>

#define len_arr(arr) (sizeof(arr)/sizeof(arr[0]))

void print_arr (int *arr, int length);
void shell_sort (int *arr, int num);

main ()
{
	int arr[] = {2,3,34,545,14,2,45,1,24};
	
	print_arr (arr, len_arr(arr));

	shell_sort (arr, len_arr(arr));

	print_arr (arr, len_arr(arr));
	
}

void print_arr (int *arr, int length)
{
	int i;
	for (i = 0; i < length; i++)
	{
		printf ("%d\t", arr[i]);
	}
	printf ("\n");
}

void shell_sort (int *arr, int num)
{
	int stepL = 0;
	int i, j, tmp, k;

	while (stepL <= num)
	{
		stepL = stepL*3+1;
	}


#if 0

	for (stepL = (stepL-1)/3; stepL > 0; stepL = (stepL-1)/3)
	{
		for (i = 0; i < stepL; i++)
		{
			for (j = i+stepL; j < num; j += stepL)
			{
				if (arr[j] < arr[j-stepL])
				{
					tmp = arr[j];
					k = j-stepL;
					while (k >= 0 && arr[k] > tmp)
					{
						arr[k+stepL] = arr[k];
						k -= stepL;
					}
					arr[k+stepL] = tmp;
				}
			}
		}
	}

#else

	for (stepL = (stepL-1)/3; stepL > 0; stepL = (stepL-1)/3)
	{
		for (i = stepL; i < num; i++)
		{
			if (arr[i] < arr[i-stepL])
			{
				tmp = arr[i];
				k = i-stepL;
				while (k >= 0 && arr[k] > tmp)
				{
					arr[k+stepL] = arr[k];
					k -= stepL;
				}
				arr[k+stepL] = tmp;
			}
		}
	}

#endif

}


