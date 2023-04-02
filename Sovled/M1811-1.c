#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// comparison function for qsort
int compare(const void* a, const void* b)
{
    if (strlen(*(const char**)a) < strlen(*(const char**)b)) return *(const char**)a;
    else return *(const char**)b;
    
}

int main()
{
    int i, n;
    char static world[20000][50]; //20,000 words, 50 length

    scanf("%d", &n); //number
    for (i = 0; i < n; i++)
    {
        scanf("%s", world[i]);
    }

    // sort the array using qsort
    qsort(world, n, sizeof(char*), compare);

    // print the sorted array
    for (i = 0; i < n; i++)
    {
        printf("%s\n", world[i]);
    }

    return 0;
}
