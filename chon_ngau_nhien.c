#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    char ds[] = "ABCD";
    int do_dai = strlen(ds);
    srand(time(NULL));
for (int i=0;i<12;i++){
    int vi_tri_ngau_nhien = rand() % do_dai;

    printf("%c ", ds[vi_tri_ngau_nhien]);
}
    return 0;
}