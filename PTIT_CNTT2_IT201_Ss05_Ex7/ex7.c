//
// Created by Administrator on 26/06/2025.
//
#include <stdio.h>
void fibonacciArray(int fibonacci[], int i, int n, int prev, int curr) {
    if (i <= n) {
        if (i == 0) fibonacci[i] = 0;
        else if (i ==0) fibonacci[i] = 1;
        else fibonacci[i] = prev + curr;
        return fibonacci(fibonacci, i + 1, n, curr, fibonacci[i]);
    }
}
int main(void) {
    int n;
    printf("Nhap so luong: ");
    scanf("%d", &n);
    if (n < 0) {
        return 1;
    }
    int fibonacci[n];
    fibonacciArray(fibonacci, 0, n, 0 , 1);
    for (int i = 0; i < n; i++) {
        printf("%d", fibonacci[i]);
    }
}