#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    unsigned int a:2;//0..4
    unsigned int b:5;//0..32
    unsigned int c:9;//0..512

} ABC;


int main()
{


    ABC abc;
    abc.a = 3;
    printf("%d",abc.a );
    printf("%d",sizeof(int));


    return 0;
}
