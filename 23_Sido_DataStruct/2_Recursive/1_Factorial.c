#include <stdio.h>

int factoral(int n){
    if(n == 0)  return 1;
    else{
        return n * factoral(n - 1);
    }
}

int factoral_iter(int n){
    int res = 1;
    for(int i=n; i>0; i--){
        res *= n;
    }
    return res;
}

int main(){
    return 0;
}