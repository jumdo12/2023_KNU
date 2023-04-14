#include <stdio.h>

int main(){
    int a = 4;

    printf("%x\n" , &a);

    int b = 2;
    int* p;
    p = &b;

    printf("b = %d , *p = %d\n",b,*p);
    b = 3;
    printf("b = %d , *p = %d\n", b, *p);


    //Constant
    int c ,d;

    const int* pc; // int형 변수를 가르키고 있는데 그 값을 바꾸지 마라
    pc = &c;

    int* const pd = &d; // pd가 상수인 포인터 이므로 포인터가 가르키는 주소를 바꿀 수 없다 즉 값은 변경 가능하다
    *pd = 4;

    // 배열의 원소를 가리키는 포인터
    int arr[10];
    for(int i=0; i<10; i++){
        arr[i] = i+1;
    }
    int* parr;
    parr = &arr[0];

    for(int i=0; i<10; i++){
        printf("arr[%d]의 주솟값 : %p \n",i , &arr[i]);
        printf("(parr + %d)의 값 :%p \n" , i , (parr+i));

        if(&arr[i] == parr+i){
            printf("일치 \n");
        }
    }

    // Arr and Pointer
    int Arr[3] = {1,2,3};

    printf("arr의 정체 : %p \n" , Arr);
    printf("arr[0]의 정체 : %p \n",&Arr[0]);
    //같은 주소를 가르킨다.
    // 그렇다고 Arr 배열의 이름이 원소 첫번째를 가리키는 것은 아니다.

    int* Parr = arr;
    printf("Sizeof Arr : %d\n" ,sizeof(Arr)); //12
    printf("Sizeof Parr : %d\n" , sizeof(Parr)); //8 (64bit)
    //따라서 배열의 이름과 첫 번째 원소의 주솟값은 엄밀히 다른 것 이다.
    //단지 배열의 이름을 사용시 암묵적으로 첫 번째 원소를 가리키는 것 일 뿐이다.

    // arr[3] 연산자는 사실 *(arr + 3)이다.  3[arr]도 있다.

    return 0;
}