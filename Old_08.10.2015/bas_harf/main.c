#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char paragraf[1000];
    gets(paragraf);
    printf("%c,%d",'.','.');

    while (paragraf[i]!='\o') {
            if (paragraf[i]=='.') {
                    if ((paragraf[i+2]<='z') && (paragraf[i+2]>='a')) {
                        paragraf[i+2]=paragraf[i+2] + ('A'-'a');
                    }
            }
            i++;
    }
    puts(paragraf);

    printf("Hello world!\n");
    return 0;
}
