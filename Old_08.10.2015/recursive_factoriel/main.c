#include <stdio.h>
#include <stdlib.h>

int main()
{


    printf("%d",fact(6));
    return 0;
}

int fact (int sayi) {
    if (sayi<2)
        return 1;
    else
        return sayi * fact(sayi-1);
}
