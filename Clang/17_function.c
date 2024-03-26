#include <stdio.h>

int swap(int *a , int *b); // 함수의 원형
void Arr_Max(int *parr);
void Print_2D_Array(int arr[][5], int col , int row);
void pswap(int **ppa, int **ppb);
void add1_element(int (*arr)[2] , int row);
int max(int a, int b);

void Example1(){
    int a = 1 , b = 2;
    swap(&a,&b);
    return;
}

int swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void Example2(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
}

void Arr_Max(int *parr){
    int max = parr[0];
    for(int i=1; i<10; i++){
        if(max < parr[i]){
            max = parr[i];
        }
    }
}

void Example3(){
    int numArr[2][5] = {
        {1,2,3,4,5},{2,3,4,5,6}
    };

    int col = sizeof(numArr[0]) / sizeof(int);
    int row = sizeof(numArr)/ sizeof(numArr[0]);
}

void Print_2D_Array(int arr[][5] , int col , int row){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d" , arr[i][j]);
        }
        printf("\n");
    }
}

void Example4(){
    int a, b;
    int *pa , *pb;
    pa = &a;
    pb = &b;

    pswap(&pa , &pb);
}

void pswap(int**ppa , int**ppb){
    int *temp = *ppa;
    *ppa = *ppb;
    *ppb = *ppa;
}

void Example5(){
    int arr[3][2];
    int i , j;

    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            scanf("%d" , &arr[i][j]);
        }
    }

    add1_element(arr , 3);
}

void add1_element(int (*arr[2]) , int row){
    for(int i=0; i<row; i++){
        for(int j=0; j<2; j++){
            arr[i][j]++;
        }
    }
}

//function pointer
void Example6(){
    int a, b;
    int (*pmax) = (int ,int);
    pmax = max;

    //int arr[3];
    //int *p = arr;
    //arr[2];
    //p[2] 와 동일
    scanf("%d %d", &a,&b);
    max(a,b);
    pmax(a,b);
    
    //int increase(int(*arr)[3] , int row)의 경우
    //int (*pfunc)(int(*)[3] , int);
}

int main(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int main()
{
    Example4();
    return 0;
}