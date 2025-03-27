// Your code here...
#include<stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    for(int i=0;i<N;i++){
        scanf("%d", &arr[i]);
    }
    int o=0, e=0;
    for(int i=0;i<N;i++){
        if(arr[i]%2 == 0){
            e++;
        } else if(arr[i]%2!=0){
            o++;
        }
    }
    printf("%d %d\n", e, o);
    return 0;
}