#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i=2; i<= n/2; i++){
        if(i%n == 0){
            printf("Not Prime");
            break;
        } else{
            printf("Prime");
            break;
        }
    }
    return 0;
}