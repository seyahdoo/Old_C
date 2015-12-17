#include <stdio.h>
#include <stdlib.h>

int main()
{
//    int *ptr1;
//    ptr1 = (int*) malloc(25*sizeof(int));
//    *ptr1 = 23;
//    *(ptr1+1) = 254;
//    printf("%d",*ptr1);
//    printf("%d",*(ptr1+1));

    //malloc,calloc,relloc,free;

    char *myCharlist;
    int boyut = 25;
    myCharlist =DynAlloc(boyut);

    *myCharlist = '2';
    printf("%c",*myCharlist);

    printf("Hello world!\n");
    return 0;
}

char *DynAlloc(int boyut)
{
    char *ayrilmis_alan;
    ayrilmis_alan =(char*) malloc(boyut*sizeof(char));
    return ayrilmis_alan;
}

