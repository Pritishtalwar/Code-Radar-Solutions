// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int sum=0;
    int med=sum;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        med=sum/n;
    }
    printf("%d",med);
    return 0;
}