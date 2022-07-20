#include <stdio.h>
#include <stdlib.h>
size_t josephus(size_t num);
int main()
{

	printf("\n%ld\n", josephus(100));
	return 0;
}

size_t josephus(size_t num)
{
	size_t i = 0, j = num, k = 0, res;
	size_t *arr = (size_t *)malloc(sizeof(size_t) * num * 2);

	/* fill the inital position */
	for (k = 0; k < num; k++)
	{
		arr[k] = k;
	}
	/* kill the next one how is alive and take its target */
	while (i < j)
	{
		arr[j] = arr[i];
		j++;
		i += 2;
	}
	res = arr[j - 1];
	free(arr);
	return res;
}
