// Your code here...
void fibonacciSeries(int n){
    int a = 0, b=1,c;
    for(int i =3;i<=n;i++){
        c=a+b;
        printf("%d\n", c);
        a=b;
        b=c;
    }
    printf("\n");
}