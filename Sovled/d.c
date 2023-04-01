#include <stdio.h>

int main()
{
	int i, j, h = 0, k = 0, m, n;
	int count = 0;
	int num = 0;
	char arr[50][50];
	char search[50][50] = { 0, };
	int answer[1000] = { 0, };
	scanf("%d %d", &n, &m);
	for (i = 0; i <n; i++)
	{
		scanf("%s", arr[i]);
	}
	for (i = 0; i <n; i++)
	{
		for (j = 0; j <m; j++)
		{
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}
}