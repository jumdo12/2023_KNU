#include <stdio.h>

int main(){
    int i = 0 ,sum =0;
    while(i <= 100){
        sum += i;
        i++;
    }

    printf("1 부터 100 까지의 합 : %d \n" , sum);

    int j=1 , sum1 = 0;
    do{
        sum1+=j;
        j++;
    }while(j<1);
    //do while의 경우 명령을 먼저 실행 한 후 while 조건식 실행

    printf("%d" , sum1);

    return 0;
}