#include <stdio.h>

int main() {
    int a,b;
    sanf("%d %d", &a, &b);
    if(a==b){
        printf("Equal");
    } else if(a>b){
        printf("First");
    } else{
        printf("Second");
    }
    return 0;
}