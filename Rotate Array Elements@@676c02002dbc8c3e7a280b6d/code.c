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
    
    K = K % N;
    
    int temp[N];
    
    for(int i=0; i < K; i++) {
        temp[i] = arr[N - K + i];
    }

    for(int i=0;i<N-K;i++){
        temp[K+i] = arr[i];
    }
    for(int i=0;i<N;i++){
        printf("%d\n", temp[i]);
    }
    return 0;
}