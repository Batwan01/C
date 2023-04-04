#include <stdio.h>
#include <string.h>

int main()
{
	int i, j, h, n, count, min = 51, num;
	char static world[20000][50]; //2만개 단어, 50길이
	scanf("%d", &n); //횟수
	count = n;
	for (i = 0; i < n; i++)
	{
		scanf("%s", world[i]);
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (strcmp(world[i],world[j])== 0 && i != j) world[j][0] = NULL; //중복 제거
		}
	}
	printf("\n");
	while (count != 0)
	{
		for (i = 0; i < n; i++)
		{
			if (world[i][0] != NULL && strlen(world[i]) < min) //한 번 최솟값 제외, 최솟값 구하기
			{
				min = strlen(world[i]); 
				num = i;
			}
			else if (world[i][0] != NULL && strlen(world[i]) == min && world[i][0] < world[num][0])
			{
				min = strlen(world[i]);
				num = i;
			}
			else if (world[i][0] != NULL && strlen(world[i]) == min && world[i][0] == world[num][0] && num != i)
			{//글자 수 같고, 첫 글자 같으면 그 후 비교
				for (h = 0; h < n; h++)
				{
					if (world[i][h] < world[num][h])
					{
						min = strlen(world[i]);
						num = i;
						break;
					}
				}
			}
		}
		printf("%s\n", world[num]);
		world[num][0] = NULL;
		min = 51;
		count--;
	}
}