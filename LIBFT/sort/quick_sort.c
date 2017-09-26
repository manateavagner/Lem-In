#include "../libft.h"

void	quick_sort(int *arr, int low, int high)
{
	int	pivot;
	int i;
	int j;

	if (low < high)
	{
		pivot = low;
		i = low;
		j = high;
		while (i < j)
		{
			while (arr[i] <= arr[pivot] && i < high)
				i++;
			while (arr[j] > arr[pivot])
				j--;
			if (i < j)
				ft_swap(&arr[i], &arr[j]);
		}
		ft_swap(&arr[pivot], &arr[j]);
		quick_sort(arr, low, j - 1);
		quick_sort(arr, j + 1, high);
	}
}
