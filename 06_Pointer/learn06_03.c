#include <stdio.h>

void swap(int a, int b);
void swap_addr(int *a, int *b);
void changearr(int *ptr);

int main()
{
    // // 포인터로 변수 값 변경-----------------------------------------------------------------------
    // int a = 10;
    // int b = 20;

    // printf("a의 주소: %d\n", &a);
    // printf("b의 주소: %d\n", &b);

    // // 값에 의한 복사 (Call by Value) -> 값만 복사해서 전달
    // printf("swap 함수 전: a=%d, b=%d\n", a, b);
    // swap(a,b);
    // printf("swap 함수 후: a=%d, b=%d\n", a, b);

    // // 주소값을 넘기면?
    // printf("\n(주소값전달)swap 함수 전: a=%d, b=%d\n", a, b);
    // swap_addr(&a,&b);
    // printf("(주소값전달)swap 함수 후: a=%d, b=%d\n", a, b);


    // 포인터로 배열 값 변경
    int arr[3] = {10, 20, 30};
    changearr(arr);
    for (int i=0; i<3; i++)
    {
        printf("%d\n", arr[i]);
    }


    return 0;
}

void swap(int a, int b)
{
    printf("swap함수 내에서의 a의 주소: %d\n", &a);
    printf("swap함수 내에서의 b의 주소: %d\n", &b);

    int temp = a;
    a = b;
    b = temp;
    printf("swap 함수 내: a=%d, b=%d\n", a, b);
}

void swap_addr(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("(주소값전달)swap 함수 내: a=%d, b=%d\n", *a, *b);
}

void changearr(int *ptr)
{
    ptr[2] = 50;
}