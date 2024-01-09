#include <stdio.h>

int main()
{
	int iArray[32];
	int i;
	
	i = 0;
	while (i < 32)
	{
		iArray[i] = i;
		i++;
	}
	i = 0;
	while (i < 32)
	{
		printf("a[%d] %p %d ", i, &iArray[i], iArray[i]);
		if ((i % 4 == 3) && (i != 0))
			printf("\n");
		i++;
	}
}
