#include <stdio.h>

int main()
{
    // //++뿔뿔
    // int a = 10;
    // a++;
    // printf("%d\n", a); //11
    // a++;
    // printf("%d\n", a); //12


    // //--------------------------------
    // int b = 20;
    // printf("%d\n", ++b); // 21   ++b: 플러스 먼저 하고 출력
    // printf("%d\n", b++); // 21   b++: 출력 먼저 하고 플러스
    // printf("%d\n", b);   // 22

    // // --------------------------------
    // // for (선언; 조건; 증감) { }
    // for (int i=0; i<10; i++)
    // {
    //     printf("hello world %d\n", i);
    // }

    // // while (조건) { }
    // // 조건 먼저 확인 후 실행
    // int i = 0;
    // while (i<10)
    // {
    //     printf("hello world %d\n", i++);
    // }

    // // do { } while (조건);
    // // 실행 먼저 한 후 조건 확인
    // int i = 0;
    // do {
    //     printf("hello world %d\n", i++);
    // } while (i<10);


    // //---------------------------------
    // // 구구단
    // for (int i=2; i<=9; i++)
    // {
    //     for (int j=1; j<=9; j++)
    //     {
    //         printf("%dx%d=%d\n", i,j,i*j);
    //     }
    // }


    // // 피라미드
    // printf("숫자입력: ");
    // int num;
    // scanf("%d", &num);

    // for (int i=1; i<=num; i++)
    // {
    //     for (int j=1; j<=i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }


    // //역피라미드
    // printf("숫자입력: ");
    // int num;
    // scanf("%d", &num);

    // for (int i=num; i>0; i--)
    // {
    //     for (int j=1; j<=i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }


    // //오른쪽피라미드
    // printf("숫자입력: ");
    // int num;
    // scanf("%d", &num);
    
    // for (int i=1; i<=num; i++)
    // {
    //     for (int j=num-i; j>0; j--)
    //     {
    //         printf(" ");
    //     }

    //     for (int k=1; k<=i; k++)
    //     {
    //         printf("*");
    //     }
     
    //     printf("\n");
    // }


    // // 가운데피라미드
    // printf("숫자입력: ");
    // int num;
    // scanf("%d", &num);

    // for(int i=1; i<=num; i++)
    // {
    //     for (int j=1; j<=num-i; j++)
    //     {
    //         printf(" ");
    //     }

    //     for (int k=1; k<=2*i-1; k++)
    //     {
    //         printf("*");
    //     }

    //     // for (int l=1; l<=num-i; l++ )
    //     // {
    //     //     printf(" ");
    //     // }
       
    //     printf("\n");
    // }


    return 0;
}