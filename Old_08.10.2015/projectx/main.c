#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
/* int x,y,z;

int a,b,c,result;
char sa, as;
char harf=291;


sa = 65;
as = 66;



x+=y+z; //x=x+y; also applies to -,*,/,%
printf("%d %d", sa, as);


a=2;
b=2;
c=3;

printf("%c", harf);

if(harf) {

    printf("True!");
    printf("More True!");
}


else

{
    printf("False!");
    printf("And More FALSE!!!");
}

if (a<b){
    if (a<c) {
    result=a; }
else
    result=c;}
else if (b<c) {
    result=b; }
else {
    result=c; }


printf("%d", result);



switch (sa) {

case 65: {

printf("65");
break;

}

case 2: {

printf("2");
break;
}


default : {

printf("DEFAULT!");
break;
}
} */

/*
int i, j;
for(i=0, j=10; i<10; i++) {
    j--;
    printf("%d\n", j);
}

printf("dasdas");
printf("n");

*/
/*
int n,low,high;


printf("Dizinin uzunluðu:");
low = 1;


int s;
sscanf("%d",&s);
s = -1;a
printf(" %d ",s);

*/

/*
int j=0, m=1, n=-1;
float x=2.5, y=0.0;

printf("%d", (j>m));
printf("%d", (m/n<x));
*/



/*

char x = 882;
printf("%d", x);


unsigned short int a, b, c;
printf("Birinci sayiyi gir : "); scanf("%d", &a);
printf("\nIkinci sayiyi gir : "); scanf("%d", &b);
c=a-b; printf("%d, %d, %d", a, b, c);
*/
// AND:&&  OR:||  negation:!
/*
float x,y,z;
printf("x :"); scanf("%f", &x);
printf("y :"); scanf("%f", &y);
printf("%f %f", x,y);


if(y)
    z = ( y > x) ? x / y : x*y;
else
    z = 0.0;
printf("\nz :%f \n", z);


int check=2;
switch(check) {
case 1: {
printf("1"); break;
}
case 2: {
printf("2"); break;
}
case 3: {
printf("3"); break;
}
default: {
printf("default"); break;
} }

*/

/*

int inpFag;
while(1) {
puts("\n*** The DOS Faggots ***");
puts("[1] New Fagame");
puts("[2] Fagredits");
puts("[3] Fagbye");

printf("Input a fagbeer, mongrel: "); scanf("%d", &inpFag);
switch (inpFag) {
case(1): { system("cls"); break;}
case(2): {printf("\nMurto made it, faggot. Now play it."); getch(); system("cls"); break;}
case(3):
    {
        printf("\nFagbye, mongrel. Gay."); getch();
        system("cls"); return 1; break; }
default: {printf("\nYou are so stupid that you cannot fagput the right fagbeer."); getch(); break;}
}}

*/

int x,y,obeb,bolen;

printf("x :");scanf("%d",&x);
printf("y :");scanf("%d",&y);
printf("%d,%d" ,x,y);


obeb = 1;
bolen = 2;

while ( ((x%bolen)==1) and ((y%bolen)==1)) {
    x=x/bolen;
    y=y/bolen;
    obeb=obeb*bolen;
}

 bolen++;

while ( (x!=1) and (y!=1)) ) {

while ( ((x%bolen)==1) and ((y%bolen)==1)) {
    x=x/bolen;
    y=y/bolen;
    obeb=obeb*bolen;
}

bolen=bolen+2;



}















    return 0;
}
