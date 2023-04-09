#include <stdio.h>

int main(){
    int a;
    a = 127;
    printf("a의 값은 %d진수로 %o입니다. \n",8,a);
    printf("a의 값은 %d진수로 %d입니다. \n",10,a);
    printf("a의 값은 %d진수로 %x입니다. \n",16,a);

    double abc = 102030405060; // double형은 처음 15개의 숫자들만 정확하고 나머지는 10의 지수형태로 표현
    printf("%f \n",abc);

    float b = 3.141592f; //f를 붙이는 이유는 double형으로 인식하는것을 방지하기 위함
    double c = 3.141592;

    printf("%f %f \n" , b,c);
    printf("%f %f \n",1 , 1.0); //%f를 사용할때 소수점 1.0 이런식으로 사용해야 함

    int d = 124;

    printf("a = %.2f b = %5d c = %6.3f \n",b ,d ,c); //소수점 앞자리는 총 크기를 나타내고 소수점 뒤가 소수점의 갯수를 나타냄
    //즉 .2라면 소수점 이하 둘째자리 까지만 표시하라는 뜻. %5d라면 자릿수를 5칸이 되도록 설정 만약 자리가 남는다면 공백으로 출력
    
    return 0;
}