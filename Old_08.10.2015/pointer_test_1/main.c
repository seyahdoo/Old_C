#include <stdio.h>
#include <stdlib.h>

int main()
{
    char dizi1[100],dizi2[100];

    gets(dizi1);
    copy(&dizi1,&dizi2);
    puts(dizi2);
    return 0;
}

void copy (char *gelen,char *giden) {
    int i=0;
    while (*gelen != 0) {
        *giden = *gelen;
        giden++;
        gelen++;
    }
    *giden= 0;
}
