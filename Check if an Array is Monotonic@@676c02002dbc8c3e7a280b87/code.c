// Your code here...'
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        if((arr[i]<arr[i+1]) && (arr[i+1]==arr[i+2] || arr[i+1]<arr[i+2])){
            printf("YES");
            break;
        }
        else if( (arr[i]>=arr[i+1])){
            printf("YES");
            break;
        }else if(arr[i]<arr[i+1] && arr[i+1]>arr[i+2]){
            printf("NO");
            break;
        }
        else{
            printf("NO");
            break;
        }
    }
}