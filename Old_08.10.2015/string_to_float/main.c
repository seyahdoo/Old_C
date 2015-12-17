#include <stdio.h>
#include <stdlib.h>

    char dizi[1000];
int main()
{
    float stringToFloat();
    gets(dizi);

    printf("\n sonuc:%f",stringToFloat());
    return 0;
}



float stringToFloat() {

    static float virguldenOnce,virguldenSonra,sonuc;
    int i=0;
    while(dizi[i]!='.') {
        dizi[i]=dizi[i] - '0';
       virguldenOnce = (dizi[i] + virguldenOnce) * 10;
       i++;
    }
    virguldenOnce = virguldenOnce / 10;

    i++;

    while(dizi[i]!=0) {
        i++;
    }
    i--;

    while(dizi[i]!='.') {
        dizi[i]=dizi[i] - '0';
        virguldenSonra = (virguldenSonra + dizi[i]) / 10;
        i--;
    }

    sonuc=virguldenSonra+virguldenOnce;
    return sonuc;

}
