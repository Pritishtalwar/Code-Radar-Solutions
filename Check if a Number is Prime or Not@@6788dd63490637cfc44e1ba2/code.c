#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int check = 1;
    for(int i=2;i<=n/2;i++){
        if(n%i == 0){
            check = 0;
            break;
        }
    }
    if(check==1){
        printf("Prime");
    }else if(check == 0){
        printf("Not Prime");
    }    
    return 0;
}