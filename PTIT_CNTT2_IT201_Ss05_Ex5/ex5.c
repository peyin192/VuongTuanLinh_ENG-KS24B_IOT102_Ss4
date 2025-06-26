#include <stdio.h>
#include <string.h>
int check(char str[], int left, int right) {
    if (left >= right) {
        return 1;
    }
    if (arr[left] != arr[right]) {
        return 0;
    }
    return check(str, left + 1, right + 1);
}
int main() {
    char str[100];
    printf("Nhap chuoi : ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = 0;
    int len = strlen(str);
    int result = check(str, 0, len - 1);
    if (result == 0) {
        printf("Chuoi khong doi xung");
    } esle {
        printf("Chuoi doi xung");
    }
}