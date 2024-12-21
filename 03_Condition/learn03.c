#include <stdio.h>

#include <time.h>
#include <stdlib.h> // rand함수

#include <string.h> // 문자열비교 strcmp

int main()
{
    // if (조건) {...}
    // else if (조건) {...}
    // else {...}

    // if로 실행할 코드가 한 줄이면 중괄호 안해도됨

    while (1)
    {
        int age;
        printf("나이를 입력하세요: ");
        scanf("%d", &age);

        if (age >=20)
        {
            printf("성인입니다.\n\n");
        }
        else if (age<=19 && age>=17)    //  &&->and  (||->or)
        {
            printf("고등학생입니다.\n\n");
        }
        else if (age<=16 && age>=14)    
        {
            printf("중학생입니다.\n\n");
        }
        else if (age<=13 && age >=8)
        {
            printf("초등학생입니다.\n\n");
        }
        else
        {
            printf("미취학아동입니다.\n\n");
        }
    }

    //----------------------------------------
    // 가위바위보
    // 가위:0 바위:1 보:2
    // 랜덤함수, 문자열비교 strcmp 사용

    srand(time(NULL));
    
    while (1)
    {
        int i = rand()%3;
        
        char input[256];
        printf("\n입력: ");
        scanf("%s", input, sizeof(input));

        if (strcmp(input, "가위")==0)
        {
            if (i==0) printf("상대: 가위\n비겼습니다.\n");
            else if (i==1) printf("상대: 바위\n졌습니다..\n");
            else if (i==2) printf("상대: 보\n이겼습니다!\n");
        }
        else if (strcmp(input, "바위")==0)
        {
            if (i==1) printf("상대: 바위\n비겼습니다.\n");
            else if (i==2) printf("상대: 보\n졌습니다..\n");
            else if (i==0) printf("상대: 가위\n이겼습니다!\n");
        }
        else if (strcmp(input, "보")==0)
        {
            if (i==2) printf("상대: 보\n비겼습니다.\n");
            else if (i==0) printf("상대: 가위\n졌습니다..\n");
            else if (i==1) printf("상대: 바위\n이겼습니다!\n");
        }
        else if (strcmp(input, "그만하기")==0)
        {
            break;
        }

        else printf("다시 입력하세요.\n");

        printf("그만하려면 '그만하기'을 입력하세요.\n");
    }


    //------------------------------------------
    // switch함수

    while (1)
    {
        int age2;
        printf("\n나이입력: ");
        scanf("%d", &age2);

        switch(age2)
        {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7: printf("미취학 아동입니다.\n"); break;
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
            case 13: printf("초등학생입니다.\n"); break;
            case 14:
            case 15:
            case 16: printf("중학생입니다.\n"); break;
            case 17:
            case 18:
            case 19: printf("고등학생입니다.\n"); break;
            default: printf("성인입니다.\n"); break;
        }
    }


    // --------------------------------------------
    // up&down게임
    int chance;
    printf("시도횟수를 입력하세요: ");
    scanf("%d", &chance);
    
    srand(time(NULL));
    int correctnum = rand()%100+1;
    
    printf("정답: %d\n", correctnum);

    while (chance>0)
    {
        printf("\n숫자입력: ");
        int inputnum;
        scanf("%d", &inputnum);

        if (correctnum == inputnum)
        {
            printf("정답입니다!\n");
            break;
        }
        else if (correctnum > inputnum)
        {
            printf("up\n");
            printf("남은횟수 %d번\n", --chance);
        }
        else if (correctnum < inputnum)
        {
            printf("down\n");
            printf("남은횟수 %d번\n", --chance);
        }
        else
        {
            printf("잘못된 입력입니다\n.");
        }

        
    }

    if(chance==0)
    {
        printf("게임오버..\n정답: %d", correctnum);
    }



    return 0;
}