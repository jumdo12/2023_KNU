#include <stdio.h>
#define square(x) x*x

void example1(){
    printf("%d" , square(3));
    //square(3) == 3 * 3
}

__inline int max(int a , int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

struct Human{
    int age;
    int height;
    int weight;
};

typedef struct Human Human;

//응용
typedef int CAL_TYPE;
CAL_TYPE input;
CAL_TYPE a,b;
//위 int만 수정하면 됨

//여러가지 typedef
typedef int (*padd)(int , int);
typedef int Arrays[10];

int add(int a ,int b){
    return a+b;
}

void example2(){
    Arrays = {1,2,3,4};
    padd ptr = add;
}


typedef struct SENSOR{
    int sensor_flag;
    int data;
}SENSOR;

void example3(){
    volatile SENSOR *sensor;

    while(!(sensor->sensor_flag)){
        //값이 감지되지 않으면 무한루프
        //C/C++에서 gcc 최적화 때문에 이렇게 하지 않으면 무한루프 x
    }
}

int main(){

    return 0;
}