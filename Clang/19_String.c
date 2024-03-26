#include <stdio.h>

int str_length(char *arr);

void IsNull(){
    char null_1 = '\0';
    char null_2 = 0;
    char null_3 = (char)NULL;
}

void Example1(){
    char sentence_1[4] = {'p' , 's' , 'i' , '\0'};
    char sentence_2[4] = {'p', 's', 'i', 0};
    char sentence_3[4] = {'p', 's', 'i', (char)NULL};
    char sentence_4[4] = {"psi"}; // 마지막에 NULL을 허용하기 위해 크기를 4로 잡아야함.

    char word[30] = {"Long Sentence"};
    char *str = word;   //정수형에서 포인터는 arr 배열 이름을 가리 킬 수 있다. 와 같은 원리

    printf("%s" , str);
}

void Example2(){
    char str[] = {"What is your name?"};
    printf("문자열의 길이 : %d",str_length(str));
}

int str_length(char *arr){
    int i=0;
    while(arr[i]){
        i++;
    }

    return i;
}

void Example3(){
    //버퍼
    //scanf는 띄어쓰기 까지만 입력을 받는다 즉 What your name? 을 일렵시 What 까지만 입력을 받게 된다
    int num;
    char c;
    printf("숫자을 입력하세요~ :");
    scanf("%d" , &num);
    printf("문자를 입력하세요 ~ :");
    scanf("%c " , &c);  //원래는 이 부분 실행 X

    //버퍼 또는 stdin(스트림)에 일시적으로 저장을 하였다가 한꺼번에 처리를 하는 것이다.
    //만약 scanf로 1을 입력 받는다면 버퍼에는 1\n이 저장
    //%s와 %d는 상관이 없으나 %c의 경우 \n을 문자로 인식하는 경우가 생겨 버퍼를 비워주는것이 중요

    scanf("%s"); //Hello Babay   Hello
    scanf("%s"); // Baby
}

void Example4(){
    //literal : 소스코드 상에서 고정된 값을 가지는 것을 일컫습니다. C언어의 경우 "로 묶인것들을 리터럴이라고 부릅니다."
    
    char *pstr = "goodbye"; //"이 부분이 리터럴" 수정은 안되고 읽기만 가능
    const char * pstr1 = "goodbye"; // 도 가능
    char str[] = "hello"; // 의 경우 char str[] = {'h','e'  ...} 로 인식되기 때문에 수정 가능한 메모리에서 정의 
}

int main(){
    Example4();
    return 0;
}