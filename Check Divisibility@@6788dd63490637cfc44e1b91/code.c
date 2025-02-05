#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if(n%55==0){
        printf("Divisible");
    } else{
        printf("Not Divisible");
    }
    return 0;
}