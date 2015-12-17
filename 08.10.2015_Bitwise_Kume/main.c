#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    char x_old,x = 0;
    char kume[] ={3,'a','b','c'};
    int timetoCount=2;




    for(i=1;i<kume[0];i++){
        timetoCount = timetoCount + timetoCount;
    }

    for(j=0;j<timetoCount;j++)
    {
        x_old=x;
        for(i=0;i<kume[0];i++)
        {
            if((x & 1) == 1)
            {
                printf("%c  ",kume[i+1]);
            }
            x=x>>1;
        }

        printf("\n");
        x=x_old;
        x++;
    }
    system("PAUSE");


    return 0;
}
