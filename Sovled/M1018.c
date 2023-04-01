#include <stdio.h>

int main()
{
	int i, j, h, k, m, n;
	int count = 0, max = 0, num;
	char arr[50][50] = { 0, }, search[50][50] = { 0, };
	int answer[1000] = { 0, };
	scanf("%d %d", &n, &m);
	for (i = 0; i <n; i++)
	{
		scanf("%s", arr[i]);
	}
	for (i = 0; i < n-7; i++) //행
	{
		for (j = 0; j < m-7; j++) //열
		{
			for (h = i; h < 8+i; h++) //행
			{
				for (k = j; k < 8+j; k++) //열
				{
					search[h][k] = arr[h][k]; //8*8만들기
				}
			}
			for (h = i; h < 8 + i; h++)
			{
				for (k = j; k < 8 + j; k++) if (search[h][k - 1] != search[h][k]) answer[count]++; //체스판 적합도 조사
			}
			count++;
		}
	}
	for (i = 0; i < count; i++) //최대값 구하기
	{
		if (answer[i] > max)
		{
			max = answer[i];
			num = i;
		}
	}
	for (i = num; i < num + 8; i++)
	{
		
	}

	for (i = 0; i < count; i++)
	{
		printf("%d ", answer[i]);
	}
	printf("\nmax : %d answer[%d] count : %d", max, num+1, count);
}