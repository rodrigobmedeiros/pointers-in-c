#include <stdio.h>

int main()
{
	int x = 10;
	int *ptr = &x;
	printf("Address of variable \"x\" = %p\n", &x);
	printf("Address of variable \"x\" = %p\n", ptr);
	printf("Value of variable x = %d\n", x);
	printf("Value stores at address ptr = %p is %d\n", ptr, *ptr);
}
