#include <stdio.h>

int main() {
    int n, target;
    
    // Read the size of the array
    scanf("%d", &n);
    int arr[n];

    // Read the array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the target element
    scanf("%d", &target);

    int index = -1; // Default index if target is not found

    // Iterate through the array to find the target
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            index = i; // Store the index when the target is found
            break; // Exit the loop once the first occurrence is found
        }
    }

    // Print the result
    printf("%d\n", index);
    
    return 0;
}
