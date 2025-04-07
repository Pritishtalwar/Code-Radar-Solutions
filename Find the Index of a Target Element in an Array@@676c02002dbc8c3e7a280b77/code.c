// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i=0;i<N;i++){
    scanf("%d", &arr[N]);
    }
    int n=sizeof(arr)/sizeof(arr[0]);
    int t;
    int index = -1;
    scanf("%d", &t);
    for(int i=0;i<n;i++){
        if(arr[i]==t){
            index = i;
            break;
        }
        }
        if(index!=-1){
            printf("%d", index);   
        } else {
            printf("%d", t)
        }
    return 0;
}