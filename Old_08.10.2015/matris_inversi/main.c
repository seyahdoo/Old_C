#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,matris[100][100];

    printf("%b",5);
    scanf("%d",&n);
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++){
            printf(":");
            scanf("%d",&matris[i][j]);
        }
        printf("\n");
    }

    for (i=0;i<n;i++) {
        for (j=0;j<n;j++){
            printf("%d",matris[i][j]);
        }
        printf("\n");
    }
    printf("%b",5);


    for (i=1;i<n;i++) {

            //invers al!

    }



    printf("Hello world!\n");
    return 0;
}
