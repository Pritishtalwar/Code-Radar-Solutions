#include <stdio.h>

int main() {
    int coin;
    scanf("%d", &coin);
    for(int i=1;i<=coin;i++){
        for(int j=1;j<=coin;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}