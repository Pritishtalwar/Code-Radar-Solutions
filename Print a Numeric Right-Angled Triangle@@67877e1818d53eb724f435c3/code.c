// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        for(intj=i;j>=0;j++){
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}