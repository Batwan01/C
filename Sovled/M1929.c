#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
void nums(int x);

int main() {
	int n, m, num, count;
	scanf("%d %d", &n, &m);
	for (int i = n; i <= m; i++)
	{
		if (i == 1) continue;
		else if (i == 2 || i == 3 || i == 5 || i == 7) printf("%d\n", i);
		else nums(i);
	}
}

void nums(int x) {
	for (int j = 2; j < sqrt(x) + 1; j++)
	{
		if (x % j == 0) return;
	}
	printf("%d\n", x);
}
