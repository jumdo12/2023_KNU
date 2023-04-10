#include <stdio.h>

int main(){
    int usrans;
    

    printf("컴퓨터가 생각하는 숫자를 맞추어 보세요 ! \n");
    for(;;){
        scanf("%d" , &usrans);
        if(usrans == 3){
            printf("정답입니다 ! \n");
            break;
        }
        else{
            printf("틀렸습니다.~ \n");
        }
    }

    printf("\n\n");

    printf("이제는 Continue에 대해서 배워 볼게요 !\n");

    for(int i=0; i<100; i++){
        if(i % 5 == 0){
            printf("\n");
            continue;
        }
        else{
            printf("%d " , i);
        }
    }
    return 0;
}