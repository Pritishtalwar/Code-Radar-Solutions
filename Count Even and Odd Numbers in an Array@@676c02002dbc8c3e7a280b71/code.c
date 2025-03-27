// Your code here...
#include<stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    for(int i=0;i<N;i++){
        scanf("%d", &N);
    }
    int sum=0, dif=0;
    for(int i=0;i<N;i++){
        if(i%2 == 0){
            sum++;
        } else if(i%2!=0){
            dif++;
        }
        printf("%d %d\n", sum, dif);
    }
    return 0;
}