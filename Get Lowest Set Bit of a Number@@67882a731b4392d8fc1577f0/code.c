

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i=0; (n&1) == 0; i++){

    printf("%d",n>>1);
    }
    return 0;
}