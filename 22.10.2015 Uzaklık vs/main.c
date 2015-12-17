#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[20];
    float x;
    float y;
    float z;
    int test;
} PLANET;


int main()
{
    int planetsSize,i;
    PLANET *planets;
    printf("Enter amount of planets: ");
    scanf("%d",&planetsSize);
    planets = malloc(planetsSize*sizeof(PLANET));
    for (i=0;i<planetsSize;i++)
    {
        printf("\n%dth planet name: ",i);
        scanf("%s",(planets+i) -> name);
        //printf("%s",(planets+i) -> name);

        printf("\n%dthplanet test: ",i);
        scanf("%d", &(planets+i) -> test );
        printf("%d",(planets+i) -> test);

        printf("\n%dthplanet x: ",i);
        scanf("%f", (planets+i) -> x );
        printf("\n%dthplanet y: ",i);
        scanf("%f",(planets+i) -> y);
        printf("\n%dthplanet z: ",i);
        scanf("%f",(planets+i) -> z);
    }



    return 0;
}
