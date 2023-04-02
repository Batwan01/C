#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmpfunc(const void* a, const void* b) {
    return strcmp(*(const char**)a, *(const char**)b);
}

int main() {
    int i, n;
    char world[20000][50];

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%s", world[i]);
    }

    qsort(world, n, sizeof(char*), cmpfunc);

    for (i = 0; i < n; i++) {
        printf("%s\n", world[i]);
    }

    return 0;
}
