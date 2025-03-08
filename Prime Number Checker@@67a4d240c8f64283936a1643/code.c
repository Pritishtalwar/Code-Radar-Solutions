int isPrime(int num){
    for(int i =2;i<=num - 1; i++){
    if(num ==1 ) return;
       else if(num%i ==0) return 0;
        else return 1;
    }
}