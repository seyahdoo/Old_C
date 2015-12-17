#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int N,i,j,k,tmp;
    unsigned char matris[200][200],siralama[10],m,max,maxlocation;
    printf("Matris buyuklugu:");
    scanf("%d",&N);

    srand(time(NULL));


    matris_doldur(N,matris);
    matris_yazdir(N,matris);
    matris_1_0_koy(N,matris);
    matris_yazdir(N,matris);


    for (i=1;i<=N-2;i++) {        //madyan filtreleme yap
        for(j=1;j<=N-2;j++){

            for(k=1;k<=9;k++) {
                siralama[k]=matris[i+(k/3)][j+((k-1)%3)];

            }

//            siralama[1]=matris[i][j];
//            siralama[2]=matris[i][j+1];
//            siralama[3]=matris[i][j+2];
//            siralama[4]=matris[i+1][j];
//            siralama[5]=matris[i+1][j+1];
//            siralama[6]=matris[i+1][j+2];
//            siralama[7]=matris[i+2][j];
//            siralama[8]=matris[i+2][j+1];
//            siralama[9]=matris[i+2][j+2];

            for(k=1;k<9;k++){
                max=siralama[k];
                maxlocation=k;
                for(m=k+1;m<=9;m++){
                    if(siralama[m]>max){
                        max=siralama[m];
                        maxlocation=m;
                    }
                }
                siralama[maxlocation]=siralama[k];
                siralama[k]=max;
            }
            for(k=1;k<=9;k++){
                printf("%d:",siralama[k]);
            }
            printf("\n");

            matris[i+1][j+1]=siralama[5];
        }
    }


    matris_yazdir(N,matris);




    printf("Hello world!\n");
    return 0;
}


void matris_yazdir(int N,unsigned char matris[200][200]){

    int i,j;

    for (i=1;i<=N;i++) {
        for(j=1;j<=N;j++){
            printf("%4d ",matris[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
}

void matris_doldur(int N,unsigned char matris[200][200]){

    int i,j;

    for (i=1;i<=N;i++) {
        for(j=1;j<=N;j++){
            matris[i][j]= rand()%256;
        }
    }
}

void matris_1_0_koy(int N,unsigned char matris[200][200]){

    int i,j,k;

    for (k=0;k<=10;k++) {

        do {
        i= rand()%(N+1);
        j= rand()%(N+1);
         }while(matris[i][j]==1 || matris[i][j]==0);
        matris[i][j]=rand()%2;
    }
}
