#include <stdio.h>

int main() {
    char al;
    scanf("%c", &al);
    if (al=='A'){
        printf("Excellent");
    } else if(al=='B'){
        printf("Good");
    } else if(al=='C'){
        printf("Average");
    } else if(al=='D'){
        printf("Below Average");
    } else if(al=='F'){
        printf("Fail");
    } else{
        printf("Invalid grade");
    }

    
    return 0;
}