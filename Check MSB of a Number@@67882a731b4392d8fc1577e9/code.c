#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if(num & 1u << 31) {
        printf("Set");
    } else{
        printf("Set");
    }
    return 0;
}