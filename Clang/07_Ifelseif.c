#include <stdio.h>

int main(){
    float ave_score;
    float math,english , science,programming;

    printf("수학 영어 과학 프로그래밍 점수를 각각 입력하세요.");
    scanf("%f %f %f %f",&math,&english,&science,&programming);
    ave_score = (math + english + science + programming) / 4;

    printf("당신의 평균 점수는 %f 입니다.", ave_score);

    if(ave_score >= 90){
        printf("당신은 우등생입니다.");
    }
    else if(ave_score >= 80){
        printf("조금만 더 노력하세요!");
    }
    else{
        printf("공부는 발로합니까?");
    }

    return 0;
}
