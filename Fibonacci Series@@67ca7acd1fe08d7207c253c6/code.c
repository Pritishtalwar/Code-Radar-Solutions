// Your code here...
void fibonacciSeries(int n){
    int a = 0, b=1,c; 
    if(n==1){
        printf("0");
    }else{

    printf("%d %d", a, b);
    for(int i =3;i<=n;i++){
        c=a+b;
        printf(" %d", c);
        a=b;
        b=c;
    }
    }
    // printf("\n");
}