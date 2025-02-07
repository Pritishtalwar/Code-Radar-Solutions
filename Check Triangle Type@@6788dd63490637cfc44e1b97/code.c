#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a=b=c){
        printf("Equilateral");
    } else if(if(a=b) else if( b==c ) else if(c==a)){
        printf("Isosceles");
    } else {
        printf("Scalene");
    }
    return 0;
}