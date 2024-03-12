#include <stdio.h>

int pow(int x , int n){
    if(n == 0){
        return 1;
    }
    else if(n % 2 == 0){
        return pow(x * x , n / 2);
    }
    else{
        return x * pow(x * x / (n - 1) / 2);
    }
}

int pow_iter(int x , int n){
    int res = 1;
    for(int i=0; i<n; i++){
        res *= x;
    }
    return res;
}

int main(){
    return 0;
}