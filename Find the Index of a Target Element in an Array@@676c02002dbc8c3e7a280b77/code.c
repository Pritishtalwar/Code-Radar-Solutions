// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i=0;i<N;i++){
    scanf("%d", &arr[N]);
    }
    int T;
    scanf("%d", &T);
    for(int i=0;i<N;i++){
        if(arr[i]==T){
            printf("%d",i);
            break;
        }else if(arr[i]!=T){
            printf("-1");
            break;
        }
    }
    return 0;
}