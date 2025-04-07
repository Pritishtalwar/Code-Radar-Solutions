#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int count = 0;

    // Check each number in array for primality
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int isPrime = 1;

        if (num < 2) {
            isPrime = 0;
        } else {
            for (int j = 2; j * j <= num; j++) {
                if (num % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime) {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}
