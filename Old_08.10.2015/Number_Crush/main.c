#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main() {

    srand(time(NULL));

    int i,j,k,x,y,isBlown,direction,isOngoing,choice;
    int gameSize = 6;
    int gameDifficulty = 3;
    char ch;

    static int matrix[20][20];
    static int score[10]; //i use score[9] for points
    int types[9][3][3] ={

                                {  {1,1,1},
                                   {1,1,0},
                                   {1,1,1}
                                },
                                {
                                   {1,1,1},
                                   {1,0,1},
                                   {1,1,1}
                                },
                                {
                                   {1,1,1},
                                   {1,1,0},
                                   {1,0,0}
                                },
                                {
                                   {1,1,1},
                                   {1,0,0},
                                   {1,1,1}
                                },
                                {
                                   {1,0,1},
                                   {1,0,1},
                                   {1,1,1}
                                },
                                {
                                   {1,0,0},
                                   {1,0,0},
                                   {1,1,1}
                                },
                                {
                                   {1,1,1},
                                   {0,1,0},
                                   {0,1,0}
                                },
                                {
                                   {1,0,0},
                                   {1,0,0},
                                   {1,0,0}
                                },
                                {
                                   {0,0,1},//exeptional
                                   {0,0,1},
                                   {0,0,1}
                                }


};

while (1){

    system("cls");
    printf("Seyahdoo's Number Crush(14011038)\n");
    printf("\n");
    printf("1.Start Game\n");
    printf("2.Options\n");
    printf("3.Exit\n");
    printf("\n");
    printf("Choice:");

    ch=getch();
    choice=ch-'0';
    printf("%d\n",choice);

    switch(choice){
    case 1:

        resetMatrix(matrix,gameSize);
        resetScore(score);
        isOngoing=1;
        while(isOngoing){
            system("cls");
            slideMatrix(matrix,gameSize);
            fillMatrix(matrix,gameSize,gameDifficulty);
            showMatrix(matrix,gameSize);
            scoring(score);

            printf("satir numarasi:");
            ch=getch();
            i=ch-'0';
            printf("%d",i);
            printf("\n");
            printf("sutun numarasi:");
            ch=getch();
            j=ch-'0';
            printf("%d",j);
            printf("\n");
            printf("yon numarasi(2 assagi, 4 sol, 8 yukari, 6 sag):");
            ch=getch();
            direction=ch-'0';
            printf("%d",direction);
            printf("\n");


            swap(matrix,i,j,direction);
            isBlown=blowMatrix(matrix,types,gameSize,score);
            if(!isBlown){
                printf("bu hamle hicbirseyi patlatmadi.");
                swap(matrix,i,j,direction);
                getch();
            }
            showMatrix(matrix,gameSize);
        }

        break;
    case 2:

        printf("Oyun buyuklugu(4-9):");
        ch=getch();
        gameSize=ch-'0';
        printf("%d\n",gameSize);

        printf("Oyun Zorlugu:");
        ch=getch();
        gameDifficulty=ch-'0';
        printf("%d\n",gameDifficulty);
        break;
    case 3:
        return 0;
        break;
    default:

        printf("invalid Choice");
    }

}
    return 0;
}

void scoring(int score[9]){
    if (score[0]!=0){
        printf("You hit %d E structure,This gives you %d Points",score[0],score[0]*20);
        score[9]=score[9]+score[0]*20;
        score[0]=0;
        printf("\n");
    }

    if (score[1]!=0){
        printf("You hit %d O structure,This gives you %d Points",score[1],score[1]*18);
        score[9]=score[9]+score[1]*18;
        score[1]=0;
        printf("\n");
    }

    if (score[2]!=0){
        printf("You hit %d F structure,This gives you %d Points",score[2],score[2]*16);
        score[9]=score[9]+score[2]*16;
        score[2]=0;
        printf("\n");
    }

    if (score[3]!=0){
        printf("You hit %d C structure,This gives you %d Points",score[3],score[3]*14);
        score[9]=score[9]+score[3]*14;
        score[3]=0;
        printf("\n");
    }

    if (score[4]!=0){
        printf("You hit %d U structure,This gives you %d Points",score[4],score[4]*14);
        score[9]=score[9]+score[4]*14;
        score[4]=0;
        printf("\n");
    }

    if (score[5]!=0){
        printf("You hit %d L structure,This gives you %d Points",score[5],score[5]*10);
        score[9]=score[9]+score[5]*10;
        score[5]=0;
        printf("\n");
    }

    if (score[6]!=0){
        printf("You hit %d T structure,This gives you %d Points",score[6],score[6]*8);
        score[9]=score[9]+score[6]*8;
        score[6]=0;
        printf("\n");
    }

    if (score[7]!=0){
        printf("You hit %d I structure,This gives you %d Points",score[7],score[7]*6);
        score[9]=score[9]+score[7]*6;
        score[7]=0;
        printf("\n");
    }

    printf("Points:%d \n",score[9]);



}

void slideMatrix(int matrix[20][20],int gameSize){
    int i,j;

    for(j=0;j<gameSize;j++){
        i=gameSize-2;
        while(i>=0){
            while(matrix[i][j]!=0 && matrix[i+1][j]==0 && i<=gameSize-2){
                matrix[i+1][j]=matrix[i][j];
                matrix[i][j]=0;
                i++;
            }
            i--;
        }

    }

}

void swap(int matrix[20][20], int i, int j, int direction){
    int tmp;
    switch(direction){
    case 2:
        tmp=matrix[i+1][j];
        matrix[i+1][j]=matrix[i][j];
        matrix[i][j]=tmp;
        break;
    case 4:
        tmp=matrix[i][j-1];
        matrix[i][j-1]=matrix[i][j];
        matrix[i][j]=tmp;
        break;
    case 8:
        tmp=matrix[i-1][j];
        matrix[i-1][j]=matrix[i][j];
        matrix[i][j]=tmp;
        break;
    case 6:
        tmp=matrix[i][j+1];
        matrix[i][j+1]=matrix[i][j];
        matrix[i][j]=tmp;
        break;
    default:
        printf("invalid direction.");
    }

    return;
}

int blowMatrix(int matrix[20][20], int types[9][3][3],int gameSize,int score[10]) {

    int i,j,k,x,y,error,control,isBlown;

    isBlown=0;

    for (k=0;k<=7;k++){
        for (i=0;i<=(gameSize-3);i++){
            for (j=0;j<=(gameSize-3);j++){
                if(matrix[i][j]!=0){
                    control=matrix[i][j];
                    error=0;
                    for (x=0;x<=2;x++){
                        for (y=0;y<=2;y++){
                            if(types[k][x][y]==1){
                                if(matrix[i+x][j+y]!=control){
                                    error=1;
                                }
                            }
                        }
                    }
                    if(error==0){
                        isBlown=1;
                        score[k]++;
                        for (x=0;x<=2;x++){
                            for (y=0;y<=2;y++){
                                if(types[k][x][y]==1){
                                    matrix[i+x][j+y]=0;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    k=8;

    for (i=0;i<=(gameSize-3);i++){
        for (j=0;j<=(gameSize-3);j++){
            if(matrix[i][j+2]!=0){
                control=matrix[i][j+2];
                error=0;
                for (x=0;x<=2;x++){
                    for (y=0;y<=2;y++){
                        if(types[k][x][y]==1){
                            if(matrix[i+x][j+y]!=control){
                                error=1;
                            }
                        }
                    }
                }
                if(error==0){
                    isBlown=1;
                    score[7]++;
                    for (x=0;x<=2;x++){
                        for (y=0;y<=2;y++){
                            if(types[k][x][y]==1){
                                matrix[i+x][j+y]=0;
                            }
                        }
                    }
                }
            }
        }
    }



    return isBlown;
}

void showTypes(int types[9][3][3]){ //for debug purposes
int k,x,y;

for(k=0;k<=8;k++){
    for (x=0;x<=2;x++){
        for (y=0;y<=2;y++){
            printf("%d",types[k][x][y]);
        }
        printf("\n");
    }
    printf("\n\n");
}


}

void resetMatrix(int matrix[20][20],int gameSize){
    int i,j;

    for (i=0;i<gameSize;i++){
        for(j=0;j<gameSize;j++){
            matrix[i][j]=0;
        }
    }
    return;
}

void resetScore(int score[10]){

    int i;

    for(i=0;i<10;i++){
        score[i]=0;
    }
    return;
}

void fillMatrix(int matrix[20][20],int gameSize, int gameDifficulty){
int i,j;

for (i=0;i<gameSize;i++){
    for(j=0;j<gameSize;j++){
        if (matrix[i][j]==0){
            matrix[i][j]=1 + (rand()%gameDifficulty);
        }
    }
}

}

void showMatrix(int matrix[20][20],int gameSize){
int i,j;

//system("cls");
    printf("\n");
for (i=0;i<gameSize;i++){
    for(j=0;j<gameSize;j++){
//        switch (matrix[i][j]) {
//
//            case 1: //background color changes
//                    break;
//            case 2: //background color changes
//                    break;
//
//            default:
//                    break;
//        }

        printf(":%d",matrix[i][j]);
    }

    printf("\n");
}
i=getch();

return;
}





