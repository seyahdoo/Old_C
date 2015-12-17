#include <stdio.h>
#include <stdlib.h>
int add (int,int);
int subtract (int,int);
int domath(int (*mathop)(int,int),int,int);

int add (int x, int y){
    return x+y;
}
int subtract (int x,int y){
    return x-y;
}
int domath(int (*mathop)(int,int),int x,int y){
    return (*mathop)(x,y);
}

int main()
{
    char str[10];
    gets(str);
    puts(str);

    //int a = domath(str,10,2); str didnt work...
    //printf("a: %d \n",a);

    register b = domath(subtract,20,34);
    printf("b: %d \n",b);


    return 0;
}
