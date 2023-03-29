#include <stdio.h>

int main()
{
	int i, h, try=0, a, sum=0, str;
	char arr[100];
	scanf("%d", &try);
	for (i = 0; i < try; i++)
	{
		scanf("%s", arr);
		a = 0;
		sum = 0;
		str = strlen(arr);
		for (h = 0; h < str; h++)
		{
			if (arr[h] == 'X')
			{
				a = 0;
				sum += a;
			}
			else if (arr[h - 1] == arr[h]) 
			{
				a++;
				sum += a;
			}
			else
			{
				a = 1;
				sum += a;
			}
		}
		printf("%d\n", sum);
	}
}