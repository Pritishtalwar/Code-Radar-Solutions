// Your code here...
#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int count = 0;
    for(count = 0;(n&1) == 0; count++) {
        n >>= 1;
    }
    printf("%d\n", count);
}