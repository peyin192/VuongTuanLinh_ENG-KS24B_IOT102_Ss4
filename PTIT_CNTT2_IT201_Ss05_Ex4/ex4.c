#include <stdio.h>
int sum(int start, int end) {
    if (start >= end) {
        return end;
    }
    return start + sum(start + 1, end);
}
int main() {
    int start, end;
    printf("Enter start: ");
    scanf("%d", &start);
    printf("Enter end: ");
    scanf("%d", &end);

    if (start < 0 || end < 0) {
        printf("Invalid");
    }

}