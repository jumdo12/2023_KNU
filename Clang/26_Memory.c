#include <stdio.h>
#include <string.h>

//memcpy strcpy대신 사용하는것도 좋음
void example1(){
    char str[50] = "I love Chewing C";
    char str2[50];
    char str3[50];

    memcpy(str2 , str , strlen(str)  + 1);
    memcpy(str3 , "hello" , 6);
}

//memmove는 특정 부분을 이동시켜줌 같은 메모리 중복 가능
void example2(){
    char str[50] = "I love Chewing C hahahaha";

    printf("%s \n" , str);
    memmove(str+23,str+17,6);
}

//memcpy 메모리의 두 부분을 원하는 만큼 비교
void example3(){
    int arr[10] = {1,2,3,4,5};
    int arr[10] = {1,2,3,4,5};

    if(memcmp(arr,arr2,5) == 0){
        //5bite 비교
        //전체를 비교하고 싶다면 sizeof(int) * 5
        //일치   
    }
}


int main(){
    return 0;
}