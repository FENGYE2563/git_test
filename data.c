#include <stdio.h>

// 计算阶乘
unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    printf("%d\n\r",n);
    printf("%d\n\r",n+5);
    printf("%d\n\r",n+9);
    return result;
}