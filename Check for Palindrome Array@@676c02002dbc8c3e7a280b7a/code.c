#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int paindrome=1;
    for(int i=0;i<n;i++){
        if(arr[i] != arr[n-i-1]){
            palindrome = 0;
        }
        if(ispalindrom){
            printf("YES");
        }else{
            printf("NO")
        }
    }
}