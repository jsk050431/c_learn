#include <stdio.h>

int main()
{
    // 포인터
    // [철수] : 101호 -> 메모리 공간의 주소
    // [영희] : 201호
    // [민수] : 301호
    // 각 문 앞에 암호가 걸려 있음
    int p1 = 1; // 철수
    int p2 = 2; // 영희
    int p3 = 3; // 민수

    printf("철수네 주소: %d, 암호: %d\n", &p1, p1);
    printf("영희네 주소: %d, 암호: %d\n", &p2, p2);
    printf("민수네 주소: %d, 암호: %d\n", &p3, p3);

    // 미션맨!-----------------------------------------------------------------
    int *missionman; // 포인터 변수

    //첫번째 미션: 아파트의 각 집에 방문하여 문에 적힌 암호 확인
    missionman = &p1; // 미션맨이 철수의 주소를 가짐
    printf("미션맨이 방문하는 곳 주소: %d, 암호: %d\n", missionman, *missionman);

    missionman = &p2; // 미션맨이 영희의 주소를 가짐
    printf("미션맨이 방문하는 곳 주소: %d, 암호: %d\n", missionman, *missionman);

    missionman = &p3; // 미션맨이 민수의 주소를 가짐
    printf("미션맨이 방문하는 곳 주소: %d, 암호: %d\n", missionman, *missionman);


    //두번째 미션: 각 암호에 3을 곱하라
    missionman = &p1;
    *missionman *= 3;
    printf("미션맨이 암호를 바꾼 곳 주소: %d, 암호: %d\n", missionman, *missionman);

    missionman = &p2;
    *missionman *= 3;
    printf("미션맨이 암호를 바꾼 곳 주소: %d, 암호: %d\n", missionman, *missionman);

    missionman = &p3;
    *missionman *= 3;
    printf("미션맨이 암호를 바꾼 곳 주소: %d, 암호: %d\n", missionman, *missionman);

    //스파이!--------------------------------------------------------------------
    //미션맨이 바꾼 암호에서 2를 빼라!
    int *spy;
    printf("\n...스파이 미션수행...\n\n");
    
    spy = &p1;
    *spy -= 2;
    printf("스파이가 암호를 바꾼 곳 주소: %d, 암호: %d\n", spy, *spy);

    spy = &p2;
    *spy -= 2;
    printf("스파이가 암호를 바꾼 곳 주소: %d, 암호: %d\n", spy, *spy);

    spy = &p3;
    *spy -= 2;
    printf("스파이가 암호를 바꾼 곳 주소: %d, 암호: %d\n", spy, *spy);


    printf("철수네 주소: %d, 암호: %d\n", &p1, p1);
    printf("영희네 주소: %d, 암호: %d\n", &p2, p2);
    printf("민수네 주소: %d, 암호: %d\n", &p3, p3);





    return 0;
}