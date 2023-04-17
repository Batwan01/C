#include <stdio.h>

int main() {
	int i = 0, j = 0, h = 0, n, m, a;
	int num[100] = { 0, };
	scanf("%d %d", &n, &m);
	while (i!=n) {
		scanf("%d", &a);
		num[i] = a;
		printf("%d", num[i]);
		i++;
	}
	
	
}