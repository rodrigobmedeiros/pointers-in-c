#include <stdio.h>

int main()
{
    struct Person {
        char *name;
        int age;
    };

    struct Person *rodrigo;
    rodrigo->name = "rodrigo";
    rodrigo->age = 37;

    printf("nome: %s\n", rodrigo->name);
    printf("idade: %i\n", rodrigo->age);
    printf("nome: %s\n", (*rodrigo).name);
    printf("idade: %i\n", (*rodrigo).age);
}