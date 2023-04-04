#include <stdio.h>

int main()
{
	int i, j, n, count = 0, max = 0, answer = 0;
	int num[100];
	scanf("%d", &n);
	for (i=0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}
	for (i=0; i < n; i++)
	{
		if (num[i] > max) max = num[i];
	}
	for (i = 0; i < n; i++)
	{
		count = 0;
		for (j = 1; j <= max; j++)
		{
			if (num[i] % j == 0) count++;
		}
		if (count == 2) answer++;
	}
	printf("%d", answer);
}