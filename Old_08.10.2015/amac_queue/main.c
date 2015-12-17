#include <stdio.h>
#include <stdlib.h>

int main()
{
    public static int myQueue[1000],front,rear,newHomie,max,i;





    printf("Hello world!\n");
    return 0;
}


void insertFunc(){
    if (rear-front > max) {
        printf("its full");
    }else{
        myQueue[rear]=newHomie;
        rear++;
        printf("success");
    }
    return;
}

void deleteFunc(){
    if (rear == front){
        printf("its empty");
    }else{
        front++;
        printf("deleted");
    }
    return;
}


