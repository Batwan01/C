#include <stdio.h>

int main()
{
	int a, b, i, h, max=0;
	char static arr[1000000];
	int alphabet[91];
	scanf("%s", arr);
	a = strlen(arr);
	for (i = 65; i <= 90; i++)
	{
		alphabet[i] = 0;
	}
	for (i = 0; i < a; i++)
	{
		if (arr[i] >= 97 && arr[i] <= 122)
		{
			a = arr[i] - 32;
			alphabet[a]++;
		}
		else
		{
			a = arr[i];
			alphabet[a]++;
		}
	}
	for (i = 65; i <= 90; i++)
	{
		if (alphabet[i] > max)
		{
			max = alphabet[i];
			a = i;
		}
		else if(alphabet[i] == max) a = 63;
	}
	printf("%c", a);
}