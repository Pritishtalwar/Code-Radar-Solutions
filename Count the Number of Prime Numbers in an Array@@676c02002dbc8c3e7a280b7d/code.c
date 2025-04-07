// Your code here...
#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ", &arr[i]);
    }
    int count=0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
        
        }
        else{
            count++;
        }
        
    }
    printf("%d", count);
}