#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int* solve(int a0, int a1, int a2, int b0, int b1, int b2, int *result_size){
  int a=0,b=0;

    if(a!=b)
    { if(a0>b0)
       a++;
    else b++;
    if(a1>b2)
        a++;
    else b++;

    if(a2>b2)
        a++;
    else b++;
    }
       // Complete this function
    return a,b;
}

int main() {
    int a0;
    int a1;
    int a2;
    scanf("%d %d %d", &a0, &a1, &a2);
    int b0;
    int b1;
    int b2;
    scanf("%d %d %d", &b0, &b1, &b2);
    int result_size;
    int* result = solve(a0, a1, a2, b0, b1, b2, &result_size);
    int result_i = 0;
    for(; result_i < result_size; result_i++)
        {
        if(result_i) {
            printf(" ");
        }
        printf("%d", result[result_i]);
    }
    puts("");


    return 0;
}
