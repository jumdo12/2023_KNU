#include <stdio.h>
#include <stdlib.h>

//동적할당
void example1(){
    int student;
    int *score;
    scanf("%d" , &student);
    score = (int*)malloc(student *sizeof(int));
    free(score);
}

//2차원 배열의 동적할당
void example2(){
    int **arr;
    int x , y;
    arr = (int**)malloc(sizeof(int*) *x);
    for(int i=0; i<x; i++){
        arr[i] = (int*)malloc(sizeof(int) * y);
    }

    for(int i=0; i<x; i++){
        free(arr[i]);
    }

    free(arr);

    //매개변수 전달은
    //get(int **arr)
}

//구조체 동적할당
struct Somthing{
    int a , b;
};

void example4(){
    struct Something *arr;
    int size;

    arr = (struct Something*)malloc(sizeof(struct Somthing) * size);
    //멤버 호출은 arr[i].a
}

int main(int argc , char **argv){

}