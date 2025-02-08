#include <stdio.h>

int main() {
    int n, i, prime = 1;
    
    // Input: Read a single integer
    scanf("%d", &n);
    
    // A number less than or equal to 1 is not prime
    if (n <= 1) {
        prime = 0;
    } else {
        // Check divisors from 2 to √n (or up to n/2 for simplicity)
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                prime = 0;
                break;
            }
        }
    }

    // Output based on the result
    if (prime) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }
    
    return 0;
}
