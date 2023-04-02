#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int compare(const void* a, const void* b) {    //qsort �ȿ� �Լ�
	char* w1 = (char*)a;
	char* w2 = (char*)b;
	int* n1 = strlen(w1);
	int* n2 = strlen(w2);
	if (n1 < n2) return -1;	//���� ��
	else if (n1 > n2) return 1;
	else {		//���̰� ������ ������ ����
		return strcmp(w1, w2);
	}
}

char text[20000][51];
int N;

int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%s", &text[i]);
	}
	qsort(text, N, sizeof(text[0]), compare);
	for (int i = 0; i < N; i++) {
		if (strcmp(text[i], text[i + 1]) != 0 || i == N - 1) {	//���ڰ� �ٸ� ��쿡�� ���
			printf("%s\n", text[i]);
		}
	}
	return 0;
}