#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i=2; i<= n-1; i++){
        if(n%i == 0){
            printf("Not Prime");
            break;
        } else{
            printf("Prime");
            break;
        }
    }
    return 0;
}