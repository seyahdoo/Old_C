#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int gelen,pos,tmp,i,j,A[1000],PO[1000];

    A[0]=0;
    printf("Linked lister by seyyid ahmed dogan\n");
    printf("Give a starting value:");
    scanf("%d",&gelen);
    printf("\n");
    A[1]=gelen;
    PO[0]=1;
    PO[1]=-1;
    i=2;

    while(1) {
        printf("Give the next value:");
        scanf("%d",&gelen);
        printf("\n");

        A[i]=gelen;
        pos=PO[0];

        if ((pos != -1)&&(gelen > A[pos])) {
            tmp=pos;
            pos=PO[0];
            while (gelen > A[pos]) {
                tmp = pos;
                pos = PO[pos];
            }
            PO[i]=pos;
            PO[tmp]=i;
        }else {
            PO[i]=PO[0];
            PO[0]=i;
        }
        system("cls");
        printf("i : A[i] : PO[i]\n");
    for (j=0;j<=i;j++)  {
        printf("%d : %d : %d\n",j,A[j],PO[j]);
    }
    i++;
    }

    return 0;
}


