// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum = sum*10 +i;
    }
    int original=sum;
    int rem=0;
    int rev=0;
    for(int i=sum;i!=0;i/=10){
        rem = i%10;
        rev= rev*10 + rem;
    }
    if(original == rev){
        printf("YES");
    }else{
        printf("NO");
    }

}