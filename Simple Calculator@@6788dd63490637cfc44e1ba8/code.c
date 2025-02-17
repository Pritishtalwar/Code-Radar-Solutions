#include<stdio.h>

int main() {
    int a, b;
    char x;
    scanf("%d %d %c", &x);
    if(x == '+'){
        printf("%d", a+b);
    }else if(x == '-'){
        printf("%d", a-b);
    }
    if(x == '*'){
        printf("%d", a*b);
    }
    if(x == '/'){
        if(b==0){
            printf("Error\n");
        }else{
        printf("%d", a/b);
        }


    }
return 0;
}