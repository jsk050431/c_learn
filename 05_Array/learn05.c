#include <stdio.h>

int main ()
{
    // // 배열
    // int arr1[3];
    // arr1[0] = 30;
    // arr1[1] = 40;
    // arr1[2] = 50;

    // for (int i=0; i<3; i++)
    // {
    //     printf("지하철 %d호차에 %d명이 타고있습니다.\n", i+1, arr1[i]);
    // }


    // //----------------------------------------
    // //값 설정 방법
    // int arr2[10] = {1,2,3,4,5,6,7,8,9,10};

    // for (int i=0; i<10; i++)
    // {
    //     printf("%d\n", arr2[i]);
    // }


    // //값은 반드시 초기화를 해야 함. 안그러면 더미데이터만 존재.
    // int arr3[10];

    // for (int i=0; i<10; i++)
    // {
    //     printf("%d\n", arr3[i]);
    // }    


    // //사이즈값은 상수로만 선언가능
    // int size = 10;
    // int arr4[size];


    // // 몇 개라도 선언해두면 나머지값은 자동으로 0으로 초기화
    // int arr5[10] = {1,2};

    // for (int i=0; i<10; i++)
    // {
    //     printf("%d\n", arr5[i]);
    // }    


    // //실수형도 마찬가지
    // float arr6[5] = {0.1f, 0.2f, 0.3f};

    // for (int i=0; i<10; i++)
    // {
    //     printf("%.2f\n", arr6[i]);
    // } 


    // //비워두면 자동으로 크기가 설정됨
    // int arr7[] = {1,2};


    //--------------------------------------------
    // 문자 vs 문자열

    // 문자
    // char c = 'A';
    // printf("%c", c);

    // //문자열 끝에는 '끝'을 의미하는 NULL문자 '\0'이 포함되어야 함.
    // char str1[7] = "coding"; // [c] [o] [d] [i] [n] [g] [\0]
    // printf("%s\n", str1);

    // char str2[] = "coding";
    // printf("%s\n", str2);
    // printf("%d\n", sizeof(str2));


    // //영어 1글자 = 1byte
    // //한글 1글자 = 2byte라고 배웠는데.. 왜 여기선 3byte지?? (인코딩 형식이 UTF-8이여서)
    // char kor[] = "코딩";
    // printf("%s\n", kor);
    // printf("%d\n", sizeof(kor));


    // char arr8[7] = {'c','o','d','i','n','g','\0'};
    // printf("%s\n", arr8);
    

    char arr9[10] = {'c','o','d','i','n','g','\0'};
    printf("%s\n", arr9);
    for (int i=0; i<10; i++)
    {
        printf("%d\n",arr9[i]);
    }




    return 0;   
}