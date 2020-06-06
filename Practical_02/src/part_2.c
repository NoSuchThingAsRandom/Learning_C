#include "stdio.h"
#include "stdbool.h"
struct coord
{
    float x;
    float y;
};
struct person{
    char name[50];
    char day_of_birth;
    char month_of_birth;
    short year_of_birth;

};
struct values{
    unsigned char a:1;
    unsigned char b:1;
    unsigned char c:1;
    unsigned char d:1;
    unsigned char e:1;
    unsigned char f:1;
    unsigned char g:2;
};
struct ad{
    unsigned char a:1;
};
int main()
{

    struct coord coord_1;
    struct person person_1;
    struct values values_1;
    struct ad values_2;
    values_1.a=1;
    values_1.b=1;
    values_1.c=1;
    values_1.d=1;
    values_1.e=1;
    values_1.f=1;
    values_1.g=2;
    coord_1.x = 1;
    printf("Hello %lu\n",sizeof(values_1));
    printf("Hello %lu",sizeof(values_2));
}
