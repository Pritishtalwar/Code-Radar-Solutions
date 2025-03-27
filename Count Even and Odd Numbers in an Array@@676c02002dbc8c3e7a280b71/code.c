// Your code here...
#include<stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    for(int i=0;i<N;i++){
        scanf("%d", &N);
    }
    int o=0, e=0;
    for(int i=0;i<N;i++){
        if(i%2 == 0){
            e++;
        } else if(i%2!=0){
            o++;
        }
        printf("%d %d\n", sum, dif);
    }
    return 0;
}