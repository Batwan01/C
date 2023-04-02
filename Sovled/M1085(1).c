#include <stdio.h>
#include <math.h>

int main()
{
	int i=0, x, y, w, h,min;
	int num[10] = { 0, };
	scanf("%d %d %d %d", &x, &y, &w, &h);
	num[0] = x;
	num[1] = y;
	num[2] = h - y;
	num[3] = w - x;
	min = num[0];
	for (; i < 4; i++)
	{
		if (num[i] < min) min = num[i];
	}
	printf("%d", min);
}