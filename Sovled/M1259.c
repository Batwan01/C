#include <stdio.h>

int main()
{
	int i, n, num = 0;
	char world[10];
	while (1)
	{
		scanf("%s", world);
		if (world[0] == '0') break;
		n = strlen(world)-1;
		for (i = 0; i <=n; i++)
		{
			if (world[i] == world[n - i]) num = 0;
			else
			{
				num = 1;
				break;
			}
		}
		if (num == 0) printf("yes\n");
		else printf("no\n");
	}
}