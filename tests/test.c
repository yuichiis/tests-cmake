#include <stdio.h>

extern int libtest(int x);

void main(void) {
    int y = libtest(10);
    printf("y=%d\n",y);
}
