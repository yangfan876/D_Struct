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
