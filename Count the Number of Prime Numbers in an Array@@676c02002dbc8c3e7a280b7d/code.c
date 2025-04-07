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
        if(n%arr[i]==0){
        return 1;
        }
        else{
            count++;
        }
        
    }
    printf("%d", count);
}