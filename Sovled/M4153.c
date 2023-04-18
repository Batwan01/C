#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c, num, answer;
	while (1) {
		scanf("%d %d %d", &a, &b, &c);
		num = a > b ? a : b;
		if (a + b + c == 0) break;
		num = num > c ? num : c;
		if (num == a)
		{
			answer = pow(b, 2) + pow(c, 2);
			if (pow(a, 2) == answer) printf("right\n");
			else printf("wrong\n");
		}
		else if (num == b)
		{
			answer = pow(a, 2) + pow(c, 2);
			if (pow(b, 2) == answer) printf("right\n");
			else printf("wrong\n");
		}
		else
		{
			answer = pow(a, 2) + pow(b, 2);
			if (pow(c, 2) == answer) printf("right\n");
			else printf("wrong\n");
		}
	}
}