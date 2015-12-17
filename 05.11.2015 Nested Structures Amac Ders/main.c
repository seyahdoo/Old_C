#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char day;
    char month;
    short year;
} Date;

typedef struct
{
    char Name[20];
    Date birthdate;
    int Height;

} Person;


int main()
{
    Person prs = {{"abuzittin"},{20,03,2014},{55}};
    printf(prs.Name);

    return 0;
}
