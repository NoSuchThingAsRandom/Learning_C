#include <stdio.h>
int main() {
    signed int x = 9;
    unsigned int y = 32;
    signed int z = 3;
    x = x - y;
    z = z * x;
    z = z - y;
    printf("%d\n", z); // should print -101
}