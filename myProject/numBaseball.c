#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    // 랜덤숫자 설정
    srand(time(NULL));
    int num[3];
    do
    {
        num[0] = rand()%10;
        num[1] = rand()%10;
        num[2] = rand()%10;
    } while (num[0]==num[1] || num[1]==num[2] || num[2]==num[0]); // 각자릿수 숫자가 중복되지 않게

    // printf("%d %d %d\n", num[0], num[1], num[2]); // 테스트용

    // 시도횟수 설정
    int attampt;
    printf("시도할 횟수를 입력하세요: ");
    scanf("%d", &attampt);

    // 게임시작
    while (attampt>0)
    {
        int input; // 숫자입력받고
        printf("\n숫자입력: ");
        scanf("%d", &input);
        attampt--; // 기회횟수 차감

        // 각 자릿수대로 분리
        int inputNum[3];
        inputNum[0] = input/100;        
        inputNum[1] = (input/10)%10;
        inputNum[2] = input%10;
        // printf("%d %d %d\n", inputNum[0], inputNum[1], inputNum[2]); // 테스트용

        
        int strike = 0; // 스트라이크
        for (int i=0; i<3; i++)
        {
            if (num[i] == inputNum[i]) strike++;
        }

        if (strike ==3) // 3스트라이크면 정답. 게임종료.
        {
            printf("정답입니다!");
            exit(0);
        }

        int ball = 0; // 볼
        for (int i=0; i<3; i++)
        {
            if (num[i] == inputNum[(i+1)%3]) ball++;
            if (num[i] == inputNum[(i+2)%3]) ball++;
        }

        printf("%dS %dB\n", strike, ball); // 스트라이크&볼 출력
        if (attampt>0) printf("남은기회: %d번\n", attampt); // 남은기회 출력 (남은기회가 0이면 출력x)

    }

    printf("\n게임오버.. 정답은 %d입니다\n", num[0]*100 + num[1]*10 + num[2]);

    

    return 0;
}