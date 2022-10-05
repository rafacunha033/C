#include <stdio.h>

int main(void) {
    // The variable "n" will be allocated at any place in memory using 4 bytes
    int n = 50;
    int *p = &n;
    printf("%p\n", p);
}