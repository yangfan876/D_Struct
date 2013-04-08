/*********************************************
 * move the pos position elems to the next
 * elem
 *********************************************/

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

void move_insert_dist (int elem, int N_arr[], int pos, int count, int dist, int step)
{
	int i;
//	for (i = (count - 1) * dist; i >= pos * dist; i -= dist)
	for (i = step + (count - 1)* dist; 	i >= pos; i -= dist)
	{
		N_arr[i + dist] = N_arr[i];
	}
	N_arr[pos] = elem;
	return;
}

/********************************************
 * find the half select position
 ********************************************/

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

