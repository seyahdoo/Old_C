#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void findShips(int matrix[11][11],int sizes[5]);
int finder(int matrix[11][11],int i, int j, int size,int harf);
void displayMatrix(int matrix[11][11]);
void placeShips(int matrix[11][11], int N, int shipMaxSize);
void writeOnes(int matrix[11][11],int shipSize, int i,int j,int direction);
int isThereCollision(int matrix[11][11], int shipSize, int i, int j,int direction);


int main()
{
    srand(time(NULL));

    static int matrix[11][11],sizes[5],N,shipMaxSize;

    //matrisi '0' la
    printf("Number of ships:");
    scanf("%d",&N);
    printf("Max ship size:");
    scanf("%d",&shipMaxSize);
    printf("\n\n");

    placeShips(matrix,N,shipMaxSize);
    displayMatrix(matrix);
    findShips(matrix,sizes);
    displayMatrix(matrix);
    printf("%d(1),%d(2),%d(3),%d(4),%d(5)\n",sizes[1],sizes[2],sizes[3],sizes[4],sizes[5]);

    return 0;
}

void findShips(int matrix[11][11],int sizes[5]){
    int i,j,size,harf='A';
    for (i=1;i<11;i++){
        for(j=1;j<11;j++){
            size=finder(matrix,i,j,0,harf);
            if (size>0){
                sizes[size]++;
                harf++;
            }
        }
    }
}

int finder(int matrix[11][11],int i, int j, int size,int harf){
    if (matrix[i][j]==1){
        matrix[i][j]=harf;
        size++;
        if(matrix[i+1][j]==1){
            i++;
            return finder(matrix,i,j,size,harf);
        }
        else if(matrix[i][j+1]==1){
            j++;
            return finder(matrix,i,j,size,harf);
        }else{
            return size;
        }
    }
    return 0;
}

void displayMatrix(int matrix[11][11]){
    int i,j;
    for (i=1;i<11;i++){
        for(j=1;j<11;j++){
            if (matrix[i][j]<2){
               printf("%d ",matrix[i][j]);

            }
            else{
                printf("%c ",matrix[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
}

void placeShips(int matrix[11][11], int N, int shipMaxSize) {
    int i,j,k,direction,shipSize;

    for (k=0;k<N;k++) {
loop:   i=rand()%10 + 1;//rasgele baþlangýç pozisyonu ve yönü üret
        j=rand()%10 + 1;
        direction=rand()%4;//0 sag, 1 assagi, 2 sol, 3 yukari
        shipSize=(rand()%shipMaxSize) + 1;
        if (isThereCollision(matrix,shipSize,i,j,direction)){
            goto loop;
        }else{
            writeOnes(matrix,shipSize,i,j,direction);
        }
    }
}

void writeOnes(int matrix[11][11],int shipSize, int i,int j,int direction){
    int k;
    switch (direction){
        case 0:
            for(k=0;k<shipSize;k++){
                matrix[i][j]=1;
                i++;
            }
            break;

        case 1:
            for(k=0;k<shipSize;k++){
                matrix[i][j]=1;
                j++;
            }
            break;

        case 2:
            for(k=0;k<shipSize;k++){
                matrix[i][j]=1;
                i--;
            }
            break;

        case 3:
            for(k=0;k<shipSize;k++){
                matrix[i][j]=1;
                j--;
            }
            break;
        default:
            printf("direction hatasi");
    }

}

int isThereCollision(int matrix[11][11], int shipSize, int i, int j,int direction) {
    int k;

    switch(direction) {
        case 0:
            if ((i+shipSize-1)>10){
                return 1;
            }
            else{
                for (k=0;k<shipSize;k++){
                    if((matrix[i][j]==1) || (matrix[i+1][j]==1) || (matrix[i-1][j]==1) || (matrix[i][j+1]==1) || (matrix[i][j-1]==1)){
                        return 1;
                    }
                    i++;
                }
                return 0;
            }
            break;

        case 1:
            if ((j+shipSize-1)>10){
                return 1;
            }
            else{
                for (k=0;k<shipSize;k++){
                    if((matrix[i][j]==1) || (matrix[i+1][j]==1) || (matrix[i-1][j]==1) || (matrix[i][j+1]==1) || (matrix[i][j-1]==1)){
                        return 1;
                    }
                    j++;
                }
                return 0;
            }
            break;

        case 2:
            if ((i-shipSize+1)<1){
                return 1;
            }
            else{
                for (k=0;k<shipSize;k++){
                    if((matrix[i][j]==1) || (matrix[i+1][j]==1) || (matrix[i-1][j]==1) || (matrix[i][j+1]==1) || (matrix[i][j-1]==1)){
                        return 1;
                    }
                    i--;
                }
                return 0;
            }
            break;

        case 3:
            if ((j-shipSize+1)<1){
                return 1;
            }
            else{
                for (k=0;k<shipSize;k++){
                    if((matrix[i][j]==1) || (matrix[i+1][j]==1) || (matrix[i-1][j]==1) || (matrix[i][j+1]==1) || (matrix[i][j-1]==1)){
                        return 1;
                    }
                    j--;
                }
                return 0;
            }
            break;

        default:
            printf("direction hatasý");
            return 1;
    }
}
