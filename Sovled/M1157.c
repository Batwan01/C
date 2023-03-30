#include <stdio.h>

int main()
{
	int a, b, i, h, max=-1;
	char static arr[1000000];
	int alphabet[91];
	scanf("%s", arr);
	a = strlen(arr);
	for (i = 0; i <= 90; i++)
	{
		alphabet[i] = 0;
	}
	for (i = 0; i < a; i++)
	{
		if (arr[i] >= 97 && arr[i] <= 122)
		{
			b = arr[i] - 32;
			alphabet[b]++;
		}
		else if (arr[i] >= 65 && arr[i] <= 90)
		{
			b = arr[i];
			alphabet[b]++;
		}
	}

	for (i = 65; i <= 90; i++)
	{
		if (alphabet[i] > max)
		{
			max = alphabet[i];
			b = i;
		}
		else if(alphabet[i] == max) b = 63;
	}
	printf("%c", b);
}