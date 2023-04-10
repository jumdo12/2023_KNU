#include <stdio.h>

int main(){
    int subject , score;
    double sum_score = 0;
    printf("몇 개의 과목 점수를 입력 받을 것인가요?");
    scanf("%d" , &subject);

    printf("\n 각 과목의 점수를 입력해주세요~ ");
    for(int i=0; i<subject; i++){
        scanf("%d" , &score);
        sum_score += score;
    }

    printf("전체과목 평균 : %.2f \n", sum_score / subject);

    return 0;
}