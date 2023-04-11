#include <stdio.h>

int main(){
    int input;

    printf("마이펫 업그레이드");
    scanf("%d" , &input);

    switch (input)
    {
    case 1:
        printf("아이 맛있어~\n");
        break;
    case 2:
        printf("아이 달곰해 ~ \n");
        break;
    case 10:
        printf("어떻게 될까요? \n");
        break;
    default:
        printf("잘못입력하였습니다. \n");
        break;
    }

    return 0;
}