// Your code here...
#include<stdio.h>
int main(){
    int n;
    printf("Enter: ");
    scanf("%d", &n);
    int num=1;
    for(int i=0;i<n;i++){
        for(int i=0;i<i+1;j++){
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}