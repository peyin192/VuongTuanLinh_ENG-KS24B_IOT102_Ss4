#include <stdio.h>
void recursive (int n) {
    if (n > 0) {
        recursive(n - 1);
        printf("%d", n);

    }
}
int main() {
    int n;
    printf("Nhap phan tu can nhap: ");
    scanf("%d", &n);
    recursive(n);
    return 0;
}