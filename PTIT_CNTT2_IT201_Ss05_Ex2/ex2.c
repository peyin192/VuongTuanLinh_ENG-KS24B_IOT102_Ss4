#include <stdio.h>
int sum (int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + sum(n - 1);
    }
}
int main() {
    int n;
    printf("Nhap so: ");
    scanf("%d", &n);

    sum(n);
    printf("%d", sum(n));
    return 0;
}