#include<stdio.h>
#include<stdlib.h>
#include"lib/math.h"

int main(){
    int f = 5;
    int part = 1;
    int total = 10;

    printf("Total %d part %d = %.2f%%\n", total, part, percent(part, total));
    printf("Factorial of %d is %d", f, factorial(5));

    return 0;
}