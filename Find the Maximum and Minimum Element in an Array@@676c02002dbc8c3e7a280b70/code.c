// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d", &arr[i]);
    }
    int max=arr[0];
    for(int i=0;i<N;i++){
        if(arr[i]>max){
            max=arr[i];
        } 
        printf("%d ", max);
        if(arr[i]<max){
            max = arr[i];
        }
        printf("%d", max);
        return 0;
    }
}