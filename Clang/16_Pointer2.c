#include <stdio.h>

void eaxmple1(){
    int arr[3] = {1, 2, 3};
    int *parr;

    parr = arr; // parr =  &arr[0]과 동일

    printf("parr[1] : %d" , parr[1]);
}

void example2(){
    int arr[10] = {100 , 98 , 70 ,50, 60, 70,47,36,25,36};

    int *parr =arr;
    int sum=0;

    while(parr - arr < 10){
        sum += *parr;
        parr++;
    }

    printf("%d" , sum);
}

void exmaple3(){
    int a;
    int *pa;
    int **ppa;

    pa = &a;
    ppa = &pa;

    a = 3;

    printf("%a : %d // *pa  : $d // **pa = %d" , a , *pa , **ppa);
    printf("%p , %p , %p", &a , pa , *ppa);
    printf("%p , %p" , &pa , ppa);
}

void example4(){
    int arr[3] = {1,2,3};
    int (*parr)[3] = &arr; //&arr를 보관할 포인터는 크기가 3인 배열을 가리키는 포인터가 됨
    //만약 int *parr[3]이라고 선언시 int*형 원소를 3개같은 배열로 정의
}

//1차원 배열 int arr[]에서 arr와 &arr[0]는 그 자체로 완전히 다른 것이었던 것처럼 2차원 배열의 int arr[][]에서
//arr[0]과 &arr[0][0]은 다르다. 다만 암묵적으로 타입 변환시에 같은 것을 변할 뿐이다.
void example5(){
    int arr[2][3];

    printf("%p" , arr[0]);
    printf("%p" , &arr[0][0]);

    printf("%p" , arr[1]);
    printf("%p" , &arr[1][0]);

    //size
    int arr1[2][3] = {{1,2,3},{4,5,6}};
    printf("전체크기 : %d" , sizeof(arr1));
    printf("총 열의 갯수 : %d",sizeof(arr[0]) / sizeof(arr[0][0]));
    printf("총 행의 갯수 : %d" , sizeof(arr) / sizeof(arr[0]));
}

//배열 포인터
void example6(){
    int arr[2][3] , brr[10][3];
    // crr[2][5];

    int(*parr)[3];
    parr = arr;
    parr = brr;
    // parr = crr; 오류
    // (*parr)[3]은 크기가 3인 배열을 가리키는 포인터 따라서 첫번째 행은 사실 크기가 3인 1차원 배열 따라서 오류가 나지 않음
    // crr은 첫행의 크기가 5이므로 오류
}

//포인터 배열
void example7(){
    int *arr[3];
    int a=1,b=2,c=3;
    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;
}

int main(){
    return 0;
}