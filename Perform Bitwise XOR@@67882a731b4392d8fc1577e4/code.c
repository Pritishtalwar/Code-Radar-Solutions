#include <stdio.h>

int main(){
    int a, b;
    // printf("Enter: ");
    scanf("%d %d", &a, &b);
    int result = a^b;
    printf("%d\n", result);
    return 0;
}