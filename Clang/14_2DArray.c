#include <stdio.h>

int main(){
    int score[3][2];
    int i, j;

    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            if(j == 0){
                printf("%d번째 학생의 국어 점수 : " i+1);
                scanf("%d" , &score[i][j]);
            }
            else{
                printf("%d번쨰 학생의 수학 점수 : "i+1);
                scanf("%d",&score[i][j]);
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d번째 학생의 국어점수 : %d , 수학점수 : %d \n", i + 1, score[i][0], score[i][1]);
    }

    int arr[][3] = {{4,5,6},{7,8,9}};

    int arr1[][2] = {{1,2} ,{3,4} ,{5,6},{7}};

    //int arr3[2][] = {{4,5,6,},{7,8,9}};
    //위에서는 오류! C에서는 다차원배열의 경우 맨앞의 크기를 제외한 나머지 크기들은 정확히 지정해줘야 오류가 발생하지 않음.

    return 0;
}