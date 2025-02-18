#include<stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    int sum =0;
    for(;x!=0;){
        int ld=x%10;
        sum = sum+ld;
        x=x/10;
    }
    printf("%d", sum);
        return 0;
}