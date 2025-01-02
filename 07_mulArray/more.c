#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // 포인터 = 메모리의 주소값을 저장하는 변수
    // 자료형 * 포인터이름 = &변수이름;
    // 자료형 * 포인터이름 = 주소값;  
    
    // int a = 1;
    // int b = 2;
    // int c = 3;

    // int *p1 = &a;
    // int *p2 = &b;
    // int *p3 = &c;

    // printf("%d\n%d\n%d", p1, p2, p3);

    // p2 = p3;

    // printf("\n\n%d\n%d\n%d", p1, p2, p3);


    //--------------------------------------------------------------------------------------------
    // strtok로 split함수 구현
    char s1[30] = "The Little Prince";  // 크기가 30인 char형 배열을 선언하고 문자열 할당

    char *ptr = strtok(s1, " ");      // " " 공백 문자를 기준으로 문자열을 자름, 포인터 반환

    printf("%s\n", ptr); // The

    ptr = strtok(NULL, " "); 

    printf("%s\n", ptr); // Little



//     //-------------------------------------------------------------------------------
//     // char -> int 변환 (<stdlib.h> -> atoi함수)
    
//     const char *x = "1";
//     int xx = atoi(x);
//     printf("%d", xx+1);


//     return 0;
}