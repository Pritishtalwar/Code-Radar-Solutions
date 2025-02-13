

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i=0; (n&1) == 0; i++){
        n>>=1;
    }
    printf("%d\n",i);
    return 0;
}