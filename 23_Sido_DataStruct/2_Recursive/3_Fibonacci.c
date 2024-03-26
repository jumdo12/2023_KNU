#include <stdio.h>

int fibo(int n){
    if(n == 0)  return 0;
    else if(n == 1) return 1;
    else    return fibonacci(n-1) + fibonacci(n-2);
}

int fibo_iter(int n){
    int res = 0;
    int pp = 0;
    int p = 1;

    if(n == 0)  return 0;
    else if(n == 1) return 1;

    for(int i = 1; i<n; i++){
        res = pp + p;
        pp = p;
        p = res;
    }
    return res;
}

int main(){
    return 0;
}