#include <stdio.h>

int main(){
    double celsius;

    printf("섭씨 온도를 화씨온도로 바꿔주는 프로그램 입니다.\n");
    printf("섭씨 온도를 입력해주세요\n");
    scanf("%lf",&celsius); //float는 %f로 입력
    //scanf_s를 사용하란 의미는 scanf가 입력받는 데이터의 크기를 확인하지 않기 때문에 오버플로우가 발생 할 수 있기 때문이다.

    printf("섭씨 %f도는 화씨로 %f도 입니다. \n" , celsius , celsius * 9 / 5 + 32);
    printf("섭씨 %f도는 화씨로 %f도 입니다. \n", celsius, 9 / 5 * celsius + 32);

    //5.0이 아닌 정수형 5로 계산하면 버름을 하기 때문에 계산 결과가 다르다.

    return 0;
}
