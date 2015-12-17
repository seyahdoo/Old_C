#include <stdio.h>
#include <stdlib.h>

int main()
{
    void find(int *,int *,int *);
    int sayilar[20]={12,23,3,24,33,21,45,24,12,43,0};
    int max,min;
    find(&sayilar,&max,&min);
    printf("%d,%d",max,min);


    return 0;
}

void find (int *dizi,int *max,int *min) {
    *max = *dizi;
    *min = *dizi;
    while (*dizi != 0) {
        if (*dizi > *max) {
            *max = *dizi;
        }
        if (*dizi < *min) {
            *min = *dizi;
        }
        dizi++;
    }
}
