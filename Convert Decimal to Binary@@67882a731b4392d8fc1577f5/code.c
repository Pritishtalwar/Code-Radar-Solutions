#include<stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int binary[32];
    int i = 0;

    if(num == 0) {
        printf("0");
        return 0;
    }

    for(; num > 0; num >>= 1) {
        binary[i++] = num & 1;
    }

    for (int j=i-1; j>= 0; j--) {
        printf("%d", binary[j]);
    }
    
    return 0;
}