// Your code here...
#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    
    if(n<2){
        printf("-1\n");
        return 0;
    }
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int first = arr[0], second = -1;

    for(int i=0;i<n;i++){
        if(arr[i]>first){
            second=first;
            first=arr[i];
        } else if(arr[i]<first &&(second==-1||arr[i]>second)) {
            second=arr[i];
        }
    }if(second == -1)
        printf("-1\n");
    else
        printf("%d", second);
}