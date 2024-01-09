#include <stdio.h>

int main(int argc, char **argv)
{
	int	arr[4] = {1, 2, 3, 4};

	printf("first position address: %p\n", arr);
	printf("first position address: %p\n", &arr[0]);
}
