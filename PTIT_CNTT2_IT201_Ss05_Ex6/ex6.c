//
// Created by Administrator on 26/06/2025.
//
#include <stdio.h>
int sum(int arr, int n) {
    if (n == 0) return 0;
    return arr[n - 1] + sum(arr, n - 1);
}
int main() {
    int n;
    printf("Nhap sl ptu");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("nhap phan tu");
        scanf("%d", &arr[i]);
    }
    int result = sum(arr, n);
    printf("sl phan tu %d = %d",);
}