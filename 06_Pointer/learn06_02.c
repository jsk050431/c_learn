#include <stdio.h>

int main()
{
    // 배열과 포인터----------------------------------------------------------
    int arr[3] = {5, 10, 15};

    // arr자체는 arr[0]의 주소와 같은 값을 가짐
    printf("arr 자체의 값: %d\n", arr);
    printf("arr[0]의 주소: %d\n", &arr[0]);

    // & -> 주소, * -> 해당 주소에 들어있는 값
    // 따라서 *&는 없는것과 같음. 상쇄.
    printf("arr 자체의 값에 해당하는 주소에 들어있는 값: %d\n", *arr);
    printf("arr[0]의 값: %d\n\n", *&arr[0]);    

    int *ptr = arr; //ptr포인터가 arr의 값(= arr[0]의 주소)을 가짐

    for (int i=0; i<3; i++)
    {
        printf("배열 arr[%d]의 값: %d\n", i, arr[i]);
    }

    for (int i=0; i<3; i++)
    {
        printf("포인터 ptr[%d]의 값: %d\n", i, ptr[i]);
    }

    //포인터로 배열값 변경
    ptr[0] = 100;
    ptr[1] = 200;
    ptr[2] = 300;

    for (int i=0; i<3; i++)
    {
        // printf("배열 arr[%d]의 값: %d\n", i, arr[i]);
        printf("배열 arr[%d]의 값: %d\n", i, *(arr + i));
    }

    for (int i=0; i<3; i++)
    {
        // printf("포인터 ptr[%d]의 값: %d\n", i, ptr[i]);
        printf("포인터 arr[%d]의 값: %d\n", i, *(ptr + i));

    }










    return 0;
}