#include <stdio.h>
#include <stdlib.h>

struct point {

    int x;
    int y;

};

int main()
{
    struct point p1;
    p1.x = 3;
    p1.y = 2;


    struct{
        int x;
        int y;
    } p2,p3;

    p2.x = 2;

    printf("%d",p2.x);

    printf("%d",p1.x);
    return 0;
}



