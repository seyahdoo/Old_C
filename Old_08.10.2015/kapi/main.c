#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,temp,kapisayisi=0;
    char kapi;
    printf("kapaliysa 0 yaz");
    printf("\n");
    for (i=0;i<8;i++) {
        scanf("%d",&temp);
        kapi=kapi+temp;
        kapi=kapi<<1;
    }

    for (i=0;i<8;i++) {
        kapisayisi += (kapi & 1);
        kapi=kapi>>1;
    }
    printf("%d,%d",kapisayisi,kapi);



    kapi >> 1;




    printf("Hello world!\n");
    return 0;
}
