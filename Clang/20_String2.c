#include <stdio.h>

int copy_str(char *src, char *dest);
int stradd(char *src , char *dest);
int compare(char *str1 , char *str2);

void example1(){
    char str1[] = "Hello world";
    char str2[] = "hi";

    copy_str(str1,str2);
}

int copy_str(char *src, char *dest)
{
    while (*src)
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';

    return 1;
}

void example2(){
    char str1[100] = "hello my name is";
    char str2[] = "psi";

    stradd(str1 , str2);
}

int stradd(char *src , char *dest){
    while(*dest){
        dest++;
    }
    while(*src){
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

void example3(){
    char str1 = "hello";
    char str2 = "hello";
    
    pruntf("%d" , compare(str1, str2));
}

int compare(char *str1 , char *str2){
    while(*str1){
        if(*str1 != *str2){
            return 0;
        }
        
        str1++;
        str2++;
    }

    if(*str2 == '\0'){
        return 1;
    }

    return 0;
}

int main(){
    return 0;
}