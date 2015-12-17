#include <stdio.h>
#include <stdlib.h>

int main()
{
    void recursive();
    recurse();
    return 0;
}

void recurse() {
    printf("INFINITE LOOP");
    recurse();
}
