#include <stdio.h>

void p(int num); //함수선언

int subtract(int num1, int num2);

int main()
{
    int num = 10;

    num += 2;
    p(num);

    num -= 6;
    p(num);

    num *= 3;
    p(num);

    num /= 9;
    p(num);


    //----------------------------
    printf("%d 빼기 %d은(는) %d입니다.\n", 10, 4, subtract(10,4));

    return 0;
}

void p(int num) //함수정의
{
    printf("num은 %d입니다.\n", num);
}

int subtract(int num1, int num2)
{
    return(num1-num2);
}

//반환형 함수이름(전달값){함수내용}