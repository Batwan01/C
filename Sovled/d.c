#include <stdio.h>

int main()
{
	int i, j, h, k, m, n;
	int count = 0, max = 0, num=0;
	char arr[50][50] = { 0, }, search[50][50] = { 0, };
	int answer[1000] = { 0, };
	scanf("%d %d", &n, &m);
	for (i = 0; i <n; i++)
	{
		scanf("%s", arr[i]);
	}
	for (i = 0; i < n-7; i++) //��
	{
		for (j = 0; j < m-7; j++) //��
		{
			for (h = i; h < 8+i; h++) //��
			{
 				for (k = j; k < 8+j; k++) //��
				{
					search[h][k] = arr[h][k]; //8*8�����
				}
			}
			for (h = i; h < 8 + i; h++)
			{
 				for (k = j; k <=8 + j; k++) 
				{
					if (search[h-1][0] != search[h][0] && search[h][k] != -52 && search[h][k-1] != 0 && search[h][k] != 0 && search[h][k - 1] != -52 && search[h][k - 1] != search[h][k]) answer[count]++; //ü���� ���յ� ����
				}
			}
			count++;
		}
	}
	for (i = 0; i < count; i++) //�ִ밪 ���ϱ�
	{
		if (answer[i] > max)
		{
			max = answer[i];
			num = i;
		}
	}
	if (num < m - 7)
	{
		printf("arr[%d][%d]\n", num / (m-7),num%(m-7));
	}
	else printf("arr[%d][%d]\n", num / (m - 7), num % (m - 7));

	for (i = num / (m - 7); i < num / (m - 7) + 8; i++)
	{
		for (h = num % (m - 7); h < num % (m - 7) + 8; h++)
		{
			printf("%c", arr[i][h]);
		}
		printf("\n");
	}
	

	for (i = 0; i < count; i++)
	{
		printf("%d ", answer[i]);
	}
	printf("\nmax : %d answer[%d] count : %d", max, num, count);
}