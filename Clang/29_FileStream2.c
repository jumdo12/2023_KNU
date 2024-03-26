#include <stdio.h>
#include <string.h>

void example1(){
    FILE *fp = fopen("a.txt" , "r+"); // r+는 존재하는 파일을 열고 읽기 쓰기 가능 만약 파일이 존재하지 않는다면 생성하지 않음
    char data[10];

    fgets(data , 100 , fp);
    //현재 파일에 있는 내용

    fseek(fp , 5 , SEEK_SET);
    fputs("is nothing on this file" , fp);

    fclose(fp);
}

void example2(){
    FILE *fp = fopen("a.txt" , "r+");
    char c;

    if(fp == NULL){
        printf("파일 열기가 실패하였습니다.");
        return;
    }

    while ((c = fgetc(fp)) != EOF)
    {
        if(65 <= c && c <= 90){
            fseek(fp,-1,SEEK_CUR);
            fputc(c+32,fp);

            // 쓰기 - 읽기모드 전환을 위해서 무조건 fseek 함수와 같은 파일 위치 지정자 설정 함수들을 호출해야 한다.
            fseek(fp,0,SEEK_CUR);
        }
        else if(97 <= c && c <= 122){
            fseek(fp,-1,SEEK_CUR);
            fputc(c-32,fp);
            fseek(fp,0,SEEK_CUR); //fseek이 맘에들지 않는다면 fflush(fp)도 가능
        }
    }
    fclose(fp);
}

//append
void example3(){
    FILE *fp = fopen("a.txt","a"); //뒤에 덧붙이기 a+도 가능 그러나 파일 위치 지정자를 아무리 이동시켜도 파일 마지막으로만 이동
    char c;

    fputs("Is Added" , fp);
    fclose(fp);
}

//fscanf fgets와 다르게 탭 띄어쓰기 등등 인식
void example4(){
    FILE *fp = fopen("a.txt","r");
    char data[100];

    if(fp == NULL){
        return;
    }

    while(fscanf(fp,"%s",data) != EOF){
        printf("%s\n",data);
    }
    fclose(fp);
}

//파일에서 this를 that으로 바꾸기
void example5(){
    FILE *fp = fopen("a.txt","r+");
    char data[100];

    if(fp == NULL){
        return;
    }

    while(fscanf(fp,"%s",data)!=EOF){
        if(strcmp(data,"this")==0){
            fseek(fp, -(long)strlen("this"), SEEK_CUR);
            fputs("that", fp);
            fflush(fp);
        }
    }
    fclose(fp);
}

int main(){
    return 0;
}