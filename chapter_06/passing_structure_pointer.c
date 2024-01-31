#include <stdio.h>
#include <stdlib.h>

struct Person 
    {
        char *name;
        int age;
    };

void redefine_values(struct Person **person)
{
    printf("address: %p\n", *person);
    *person = (struct Person*)malloc(sizeof(struct Person));
    printf("address: %p\n", *person);
    (*person)->name = "rodrigo";
    (*person)->age = 37;
};

int main()
{
    struct Person *rodrigo;
    rodrigo = NULL;
    redefine_values(&rodrigo);
    printf("address: %p\n", rodrigo);
    printf("nome: %s\n", rodrigo->name);
    printf("idade: %i\n", rodrigo->age);
}