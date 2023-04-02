#include <stdio.h>

int main()
{
	int i = 0, j = 0, h = 0, k = 0, m, n, num = 0, max=0, p=0, p1=1;
	char answer_w[8][8], answer_b[8][8];
	char arr[500][500];
	int  count[2][100] = { 0, };
	for (i = 0; i < 8; i++)
	{
		if (i % 2 == 0) j = 0;
		else j = 1;
		for (; j < 8; j+=2)
		{
			answer_w[i][j] = 'W';
			answer_b[i][j] = 'B';
		}
		if (i % 2 == 0) j = 1;
		else j = 0;
		for (; j < 8; j += 2)
		{
			answer_w[i][j] = 'B';
			answer_b[i][j] = 'W';
		}
	}
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
	{
		scanf("%s", arr[i]);
	}
	for (i = 0; i <n-7; i++)
	{
		for (j = 0; j <=m-7; j++)
		{
			for (h = i; h <i + 8; h++)
			{
				for (k = j; k < j + 8; k++)
				{
					if (answer_w[h-i][k-j] == arr[h][k]) count[0][num]++;
					if (answer_b[h-i][k-j] == arr[h][k]) count[1][num]++;
				}
			}
			num++;
		}
	}
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j <=num; j++)
		{
			if (count[i][j] > max)
			{
				max = count[i][j];
			}
		}
	}
	printf("%d", 64 - max);
}
