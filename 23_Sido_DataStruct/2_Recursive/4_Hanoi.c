#include <stdio.h>

void Hanoi(int n , char left , char mid , char right){
    if(n == 1){
        printf("%d %c %c\n" , 1 , left , right);
    }
    else{
        hanoi(n - 1, left, right, mid);
        printf("%d %c %c\n", n, left, right);
        hanoi(n - 1, mid, left, right);
    }
}

int main(){
    return 0;
}