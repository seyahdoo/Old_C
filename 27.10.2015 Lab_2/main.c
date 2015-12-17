#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int ogrNo;
    float vizeNot;
    float odevNot;
    float finalNot;

} OGRENCI;


int main()
{
    OGRENCI* ogrenciler;
    int ogrenciSayisi;
    int i,j;

    printf("Ogrenci sayisini girin: ");
    scanf("%d",&ogrenciSayisi);

    ogrenciler = malloc(ogrenciSayisi*sizeof(OGRENCI));

    for(i=0;i<ogrenciSayisi;i++)
    {
        (ogrenciler+i) -> ogrNo = i+1;
        printf("Ogrenci %d vize: ",i);
        scanf("%f",&((ogrenciler+i) -> vizeNot) );
        printf("Ogrenci %d odev: ",i);
        scanf("%f",&((ogrenciler+i) -> odevNot ));
        printf("Ogrenci %d final: ",i);
        scanf("%f",&((ogrenciler+i) -> finalNot ));
        printf("\n");
    }

    for(i=0;i<ogrenciSayisi;i++)
    {
        float maxNot;
        int maxPos;
        OGRENCI cacheOgrenci;
        float cacheNot;
        maxNot = ((ogrenciler+i) -> finalNot )+((ogrenciler+i) -> odevNot ) + ((ogrenciler+i) -> vizeNot );
        maxPos = i;
        for(j=i+1;j<ogrenciSayisi;j++)
        {
            cacheNot = ((ogrenciler+j) -> finalNot )+((ogrenciler+j) -> odevNot ) + ((ogrenciler+j) -> vizeNot );
            if(cacheNot>maxNot)
            {
                maxPos = j;
                maxNot = cacheNot;
            }

        }
        cacheOgrenci = *(ogrenciler+i);
        *(ogrenciler+i) = *(ogrenciler+maxPos);
        *(ogrenciler+maxPos) = cacheOgrenci;

    }

    printf("Siralama...\n");
    for(i=0;i<ogrenciSayisi;i++)
    {
        printf("Ogrenci No : Vize Not : Odev Not : Final Not\n");
        printf("%d          %f             %f          %f\n",((ogrenciler+i) -> ogrNo ),((ogrenciler+i) -> finalNot ),((ogrenciler+i) -> odevNot ) , ((ogrenciler+i) -> vizeNot ));

    }



    return 0;
}
