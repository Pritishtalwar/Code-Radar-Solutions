// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    scanf("%d", &arr[n]);
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int index=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0) {
            arr[index] = arr[i];
            index++;
        }
    }
    for(int i=index;i<n;i++){
        arr[i]=0;
    }
    return 0;    
}