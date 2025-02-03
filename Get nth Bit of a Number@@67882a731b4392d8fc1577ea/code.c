#include <stdio.h>

int main() {
    int num; position;
    scanf("%d %d", &num, &position);

    printf("%d\n", (num >> position) & 1);
    return 0;
}