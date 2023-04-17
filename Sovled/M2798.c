#include <stdio.h>

int main() {
	int i = 0, j = 1, h = 2, n, m, a, answer = 0;
	int num[100] = { 0, };
	scanf("%d %d", &n, &m); //n : 카드 갯수, m : 원하는 값
	while (i!=n) {
		scanf("%d", &a);
		num[i] = a;
		i++;
	}
	i = 0;
	while (1) {
		if (num[i] + num[j] + num[h] == m) { //숫자가 같을 때 저장 후 break
			answer = m;
			break;
		}
		else if (m - (num[i] + num[j] + num[h]) < m - answer && m - (num[i] + num[j] + num[h]) > 0) { //m-세수합이 < m - 저장값보다 작을 때 저장
			answer = num[i] + num[j] + num[h];
		}

		if (h < n-1) { h++; } //h 증가 개수보다 적으면 정지
		else if (j < n - 2) { //n-1에서 멈춤 
			j++;
			h = j + 1; 
		}
		else if (i < n - 3) {
			i++;
			j = i + 1;
			h = j + 1;
		}
		else { break; }
	}
	printf("%d", answer);
}