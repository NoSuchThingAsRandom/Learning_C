#include <stdio.h>
int main() {
    unsigned int x = 256;
    short y = 6000;
    unsigned long z = 100;
    x = x * y;
    z = z * x;
    z = z * y;
    printf("%ld\n", z); // should print 921600000000
}