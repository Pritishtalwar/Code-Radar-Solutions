#include <stdio.h>

int main() {
    int celsius;
    scanf("%d", &celsius);
    if(celsius<=0){
        printf("Freezing");
    } else{
        printf("Above Freezing");
    }
    return 0;
}