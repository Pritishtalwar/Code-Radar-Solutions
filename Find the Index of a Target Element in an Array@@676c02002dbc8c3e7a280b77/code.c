// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i=0;i<N;i++){#include<stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate array size
    int target = 3; // Target to find
    int index = -1; // Initialize index to -1 (default when target isn't found)

    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            index = i; // Store the index if target is found
            break; // Exit the loop as soon as we find the target
        }
    }

    if(index != -1) {
        printf("First occurrence of %d is at index %d\n", target, index);
    } else {
        printf("%d is not found in the array\n", target);
    }

    return 0;
}
    scanf("%d", &arr[N]);
    }
    int n=sizeof(arr)/sizeof(arr[0]);
    int t;
    int index = -1;
    scanf("%d", &t);
    for(int i=0;i<n;i++){
        if(arr[i]==t){
            index = i;
            break;
        }
        }
        if(index!=-1){
            printf("%d", index);   
        } else {
            printf("%d", t)
        }
    return 0;
}