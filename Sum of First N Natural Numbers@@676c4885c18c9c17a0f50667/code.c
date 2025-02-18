#include<stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    int sum = 0;
    for(;x!=0;x=x/10){
        int ld=x%10;
        sum = sum+ld;
        // x=x/10;
    }
    printf("%d\n", sum);
    return 0;
}