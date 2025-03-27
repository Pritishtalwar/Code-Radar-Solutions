// Your code here...
#include<stdio.h>
int main(){
    int N,K;
    scanf("%d", &N);

    int arr[N];
    
    for(int i=0;i<N;i++){
    scanf("%d", &arr[i]);
    }
    
    scanf("%d", &K);
    
    K=k%N;
    
    int temp[N];
    
    for(int i=0; i < N-K; i++) {
        temp[i] = arr[N - K + i];
    }

    for(int i=0;i<N-K;i++){
        temp[k+i] = arr[i];
    }
    for(int i=0;i<N;i++){
        printf("%d ", temp[i]);
    }
    return 0;
}