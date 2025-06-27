#include <stdio.h>

int calculateFactorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * calculateFactorial(n - 1);
    }
}

int main() {
    int positiveInteger;

    printf("Enter a positive integer: ");
    scanf("%d", &positiveInteger);

    if (positiveInteger < 0) {
        printf("Invalid input\n");
    } else {
        int result = calculateFactorial(positiveInteger);
        printf("%d\n", result);
    }

    return 0;
}