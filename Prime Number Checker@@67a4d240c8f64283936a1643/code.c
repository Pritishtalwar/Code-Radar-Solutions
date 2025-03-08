#include<math.h>;
int isPrime(int num){
    if(num <= 1 ) return 0;
    if(num == 2) return 1;

    for(int i =2;i<=sqrt(num); i++){
        if(num%i == 0) return 0;
    } return 1;
}
