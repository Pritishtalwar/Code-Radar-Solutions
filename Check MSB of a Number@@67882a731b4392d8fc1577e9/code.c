#include <stdio.h>

int main() {
    if(num & 1u<<31) {
        printf("Set");
    } else{
        printf("Not Set");
    }
    return 0;
}