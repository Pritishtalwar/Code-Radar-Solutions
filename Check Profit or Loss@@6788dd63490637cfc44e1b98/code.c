#include <stdio.h>



int main() {
    int cp, sp;
    scanf("%d %d", &a, &b);
    if(cp>sp){
        printf("Loss");
    } else if(cp<sp){
        printf("Profit");
    } else{
        printf("No Profit No Loss");
    }
    return 0;
}