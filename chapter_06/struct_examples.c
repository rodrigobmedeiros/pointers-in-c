#include <stdio.h>
#include <malloc.h>

int main()
{
	struct Person
	{
		char	*name;
		int	age;
	};

	struct Person person = {"Rodrigo", 37};
	struct Person	*second_person;

	second_person = (struct Person*)malloc(sizeof(struct Person) * 1);
	second_person->age = 55;
	second_person->name = "Rony";
	printf("Nome da pessoa: %s\n", second_person->name);
	printf("Idade da pessoa: %d\n", second_person->age);
	printf("Size of structure data: %ld\n", sizeof(struct Person));
}

