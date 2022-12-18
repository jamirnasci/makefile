#include <stdio.h>
#include "math.h"

int factorial(int n);
float percent(float part, float total);

int factorial(int n){
    int f=1;
    for(n; n > 1; n--){
        f = f * n;
    }
    return f;
}
float percent(float part, float total){
    return (100 * part) / total;
}