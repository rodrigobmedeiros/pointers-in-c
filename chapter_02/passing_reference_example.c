struct data
{
	int x;
	int y;
};

void func(struct data *v1)
{
	struct data *v2 = v1;
	v2->x = 50;
	v2->y = 50;
}

#include <stdio.h>
int main()
{
	struct data var;
	var.x = 10;
	var.y = 20;
	func(&var);
	printf("%d\n", var.x);
	printf("%d\n", var.y);	
}
