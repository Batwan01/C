#include <stdio.h>

int main() {
	int a, b, c, sum = 1, num, num1, i, j;
	scanf("%d %d", &a, &b);
	c = a > b ? a : b;
	for (i = 1; i <= c; i++)
	{
		if (a % i == 0 && b % i == 0) {
			num = i;
		}
	}
	i = 1; j = 1;
	while (1)
	{
		if (a * i > b * j)
		{
			j++;
		}
		else if (a * i == b * j)
		{
			num1 = a * i;
			break;
		}
		else i++;
	}
	printf("%d\n", num);
	printf("%d", num1);

}