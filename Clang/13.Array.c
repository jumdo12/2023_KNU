#include <stdio.h>

void grade(){
    int arr[10];
    int avg = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("%d번 학생의 성적을 입력하세요!\n", i + 1);
        scanf("%d", &arr[i]);
        avg += arr[i];
    }

    avg /= 10;

    for (int i = 0; i < 10; i++)
    {
        printf("%d번째 학생 : ", i + 1);
        if (arr[i] > avg)
        {
            printf("합격 ! \n");
        }
        else
        {
            printf("불합격! \n");
        }
    }
}

int IsPrimeNumber(int N){
    if(N == 1){
        return true;
    }
    else if(N == 2 || N == 3){
        return true;
    }
    else{
        for(int i=2; i<N; i++){
            if(N % i == 0){
                return false;
            }
        }
    }
    return true;
}

void Primes(){
    int primes[10000] ={0};
    int N;
    scanf("%d" , &N);
    for(int i=1; i<=N; i++){
        if(IsPrimeNumber(i)){
            primes[i] = 1;
        }
    }

    for(int i=1; i<=N; i++){
        if(primes[i]){
            printf("%d는 소수 입니다.! \n",i);
        }
    }
}

int main(){
    Primes();
    return 0;
}