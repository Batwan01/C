#include <stdio.h>

int main() {
	int i = 0, j = 1, h = 2, n, m, a, answer = 0;
	int num[100] = { 0, };
	scanf("%d %d", &n, &m); //n : ī�� ����, m : ���ϴ� ��
	while (i!=n) {
		scanf("%d", &a);
		num[i] = a;
		i++;
	}
	i = 0;
	while (1) {
		if (num[i] + num[j] + num[h] == m) { //���ڰ� ���� �� ���� �� break
			answer = m;
			break;
		}
		else if (m - (num[i] + num[j] + num[h]) < m - answer && m - (num[i] + num[j] + num[h]) > 0) { //m-�������� < m - ���尪���� ���� �� ����
			answer = num[i] + num[j] + num[h];
		}

		if (h < n-1) { h++; } //h ���� �������� ������ ����
		else if (j < n - 2) { //n-1���� ���� 
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