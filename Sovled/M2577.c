#include <stdio.h>
#define pow2(x) x*x
int main()
{
	int a, b, c, d, e,sum=0;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	sum = pow2(a) + pow2(b) + pow2(c) + pow2(d) + pow2(e);
	printf("%d", sum % 10);
}