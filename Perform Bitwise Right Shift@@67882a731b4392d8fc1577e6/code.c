#include <stdio.h>

int main() {
    int number, positions;

    scanf("%d %d", &number, &positions);

    int result = number >> positions;

    printf("%d\n", result);
    return 0;
}