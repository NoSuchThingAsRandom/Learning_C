//
// Created by sam on 06/06/2020.
//
#include "simple_math.h"
#include "stdio.h"



#ifdef QUESTION
#define ANSWER 42
#else
#define ANSWER 0;
#endif
#define CONST 4

int main() {
    int x =ANSWER;
    printf("%d",add(x, CONST));
    return 0;
}
