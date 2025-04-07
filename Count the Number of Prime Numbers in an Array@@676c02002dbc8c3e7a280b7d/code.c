// Your code here...
#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ", &arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        int num = arr[i];
        int isp=1;

        if(num < 2) {
            isp = 0;
        } else {
            for(int j=2;j*j<=num;j++){
                if(num%i == 0) {
                    isp=0;
                    break;
                }
            }        
        }
        if(isp) {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}