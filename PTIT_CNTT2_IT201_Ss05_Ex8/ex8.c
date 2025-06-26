#include <stdio.h>
#include <string.h>
#include <ctype.h>

int error = 0;

int toInt(char s[], int i, int len) {
    if (i == len) return 0;
    if (!isdigit(s[i])) {
        error = 1;
        return 0;
    }
    return (s[i] - '0') * power(len - i - 1) + toInt(s, i + 1, len);
}

int power(int n) {
    int p = 1;
    for (int i = 0; i < n; i++) p *= 10;
    return p;
}

int main() {
    char s[100];
    scanf("%s", s);

    int start = 0, negative = 0;
    if (s[0] == '-') {
        negative = 1;
        start = 1;
    }

    int len = strlen(s);
    if (start == len) {
        printf("Input khong hop le");
        return 0;
    }

    int result = toInt(s, start, len);

    if (error)
        printf("Input khong hop le");
    else {
        if (negative) result = -result;
        printf("%d\n", result);
    }

    return 0;
}

