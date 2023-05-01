#include <stdio.h>

//파일에 쓰기
void example1(){
    FILE *fp;
    fp = fopen("a.txt","w");

    if(fp == NULL){
        printf("Erorr");
        return;
    }

    fputs("Hello World!!\n",fp);
    fclose(fp);
    return;
}

//파일 읽기
void example2(){
    FILE *fp = fopen("a.txt","r");
    char buf[20];

    if(fp == NULL){
        printf("ERORR");
        return;
    }

    fgets(buf , 20 , fp);
    printf("글자 : %s" , buf);
    fclose(fp);
    return;
}

//한 글자씩 불러오기
void example3(){
    FILE *fp = fopen("a.txt" , "r");
    char c;

    while (c = fgetc(fp) != EOF)    // EOF == -1
    {
        printf("%c" , c);
    }
    fclose(fp);
    return;
}

//파일 위치 지정자
void example4(){
    FILE *fp = fopen("a.txt","r");
    fgetc(fp);
    fgetc(fp);

    fseek(fp,0,SEEK_SET);
    //SEEK_SET END CUR 존재
    fclose(fp);
    return;
}

void example5(){
    FILE *fp = fopen("a.txt" , "w");
    fputs("Psi is an excellent C programmer", fp);
    fseek(fp,0,SEEK_SET);
    fputs("is Psi",fp);
    fclose(fp);
    // is Psi ... 로 파일 입력 즉 덮어쓰면서 기록
}

void example6(){
    FILE *fp = fopen("a.txt","r");
    char data[10];
    char c;

    fgets(data,5,fp);
    c = fgetc(fp);
    fseek(fp,-1,SEEK_CUR);
    c = fgetc(fp);
    fclose(fp);
}

void example7(){
    FILE *fp = fopen("a.txt","r");
    char data[10];
    char c;

    fseek(fp,-1,SEEK_END);
    c = fgetc(fp);
    fclose(fp);
}

int main(){
    return 0;
}