#include <stdio.h>

void sort(int N , int arr[]){
    int tmp;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j < N - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
}

void Q2(int N, int arr[])
{
    for(int i=0; i<N; i++){
        printf("%d번째 학생 : %d점 " ,i+1 , arr[i]);
        for(int j=0; j< arr[i] / 10; j++){
            printf("ㅁ");
        }
        printf("\n");
    }
}

void Q1()
{
    int N;
    int arr[100] = {0};
    printf("입력 해야 할 학생들의 수를 입력하시오 !\n");
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        printf("%d번째 학생의 성적을 입력하시오! \n", i + 1);
        scanf("%d", &arr[i]);
    }
    Q2(N, arr);
    sort(N, arr);
}

int main(){
    Q1();
    return 0;
}