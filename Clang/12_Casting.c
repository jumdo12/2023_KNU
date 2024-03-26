#include <stdio.h>

int main(){
    int a ,b;
    float c ,d;
    scanf("%d %d" , &a , &b);

    c = a / b;
    d = (float) a / b;

    printf("%f %f\n" , c  , d);

    double N; scanf("%lf",&N);
    N -= (int)N;
    N *= 100;
    printf("%d" , (int)N);
    return 0;
}