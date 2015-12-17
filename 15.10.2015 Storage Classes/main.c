#include <stdio.h>
#include <stdlib.h>

int main()
{

    testMethodOverload();
    //testNormalVarible();
    //testIncrement();
    return 0;
}


void testMethodOverload(){

 printf("something void");
}

//void testMethodOverload(int a){
//
//printf("something int")
//}



void testRegister(){
    int i;
    register x = 0;
    for(i=0;i<100000;i++){
        x++;
    }

}

void testNormalVarible(){
    int i;
    int x =0;
    for (i=0;i<10000;i++){
        x++;
    }

}


void testIncrement(){
    increment();
    increment();

}

void increment ()
{
    static int x = 1;
    x++;
    printf("%d",x);


}
