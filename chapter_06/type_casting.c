typedef struct t_address 
{
    char *street;
    int number;
} Address;

typedef struct t_person
{
    char *name;
    int age;
    Address address;
} Person;

#include <stdio.h>
#include <stdlib.h>

int main()
{
    Person *rodrigo = (Person *)malloc(sizeof(Person));
    if (!rodrigo)
        return (NULL);
    rodrigo->name = "rodrigo";
    rodrigo->age = 37;
    rodrigo->address.street = "Rua Leopoldo Miguez";
    rodrigo->address.number = 29;
    printf("%s\n", rodrigo->name);
    printf("%i\n", rodrigo->age);
    printf("%s\n", rodrigo->address.street);
    printf("%i\n", rodrigo->address.number);

    // Test to see if the casting works
    Address *address = (Address *)malloc(sizeof(Address));
    address = (Address *)rodrigo;
    printf("%s\n", address->street);
    printf("%i\n", address->number);

    free(rodrigo);
    free(address);
}