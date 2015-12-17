#include <stdio.h>
#include <stdlib.h>

#define max 999
static int myQueue[1000],front,rear,newHomie,i,selection;

int main()
{
    front=0;
    rear=-1;
    while(1){
        system("cls");
        printf("Choose \n 1.Insert\n 2.Delete \n 3.Display \n \n Selection:");
        scanf("%d",&selection);
        switch (selection) {
        case 1:
            system("cls");
            printf("Yeni girilecek degeri girin:");
            scanf("%d",&newHomie);
            insertFunc();
            break;
        case 2:
            system("cls");
            deleteFunc();
            break;
        case 3:
            system("cls");
            display();
            break;
        default:
            system("cls");
            printf("undefined controll");
            break;
        }
    }



    printf("Hello world!\n");
    return 0;
}


void insertFunc(){
    if (rear > max) {
        printf("its full");
    }else{
        rear++;
        myQueue[rear]=newHomie;
        printf("success");
        scanf("%d",&selection);
    }
    return;
}

void deleteFunc(){
    if (rear == front - 1){
        printf("its empty");
    }else{
        front++;
        printf("deleted");
    }
    return;
}

void display() {
    if (rear == front - 1) {
        printf("its empty");
    }else {
        for (i=front;i<=rear;i++) {
            printf("\n%d:%d",i,myQueue[i]);
        }
    }
    scanf("%d",&selection);
    return;
}






