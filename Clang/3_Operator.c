#include <stdio.h>

int main(){
    //출력 데이터형이 맞지 않을경우 제대로 출력이 되지 않음
    int a , b;
    a = 10;
    b = 3;
    
    printf("a / b = %d \n",a / b);
    printf("a / b = %f \n",a / b);

    //출력 형태 변환 숫자의 범위가 더 큰것으로 바뀜
    int c;
    double d;

    c = 10;
    d = 3;

    printf("a / b = %d \n", a / b);
    printf("a / b = %d \n", b / a);

    //prefix, postfix
    int e = 1;
    printf("%d\n",++e); //prefix에서는 바뀐 값이 출력
    e = 1;
    printf("%d\n",e++); //postfix에서는 출력된 후 값이 바뀜

    // 비트 연산자
    a = 0xAF; // 10101111
    b = 0xB5; // 10110101

    printf("%x \n", a & b);
    printf("%x \n", a | b);
    printf("%x \n", a ^ b);
    printf("%x \n", ~a); //int는 4bytes차지 즉 00000000 00000000 00000000 00000000
    printf("%x \n", a << 2);
    printf("%x \n", a >> 2);

    //오버플로우
    a = 0x7FFFFFFF; // 01111111 11111111 11111111 11111111
    printf("%d \n" ,a);
    a++;
    printf("%d\n",a); // 10000000 00000000 00000000 00000000
    
    return 0;
}
