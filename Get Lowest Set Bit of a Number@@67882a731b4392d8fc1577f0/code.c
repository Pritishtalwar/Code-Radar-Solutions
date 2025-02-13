#include<stdio.h>

int main() {
    int num, position;
    scanf("%d", &num);
    for(position = 0; (num & 1) == 0; position++){
        num >>= 1;
    }
    printf("%d\n",position);
    return 0;
}