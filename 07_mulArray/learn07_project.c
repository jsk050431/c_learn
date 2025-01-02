#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <windows.h>

void test_arrprint();
void showArr();
void flip(int x, int y);

int arr[5][4] = {0}; // 4x5배열
int arr_flip[5][4] = {0};
int fail = 0;
int correct = 0;

int main()
{
    // 초기설정
    srand(time(NULL));
    for (int i=1; i<=10; i++)
    {
        for (int j=0; j<2; j++)
        {
            while (1)
            {
                int randsetarr_x = rand()%4;
                int randsetarr_y = rand()%5;
        
                if (arr[randsetarr_y][randsetarr_x] == 0)
                {
                    arr[randsetarr_y][randsetarr_x] = i;
                    break;
                }
            }
        }
    }

    system("cls");
    showArr();

    while(1)
    {
        int coordinate_x1 ;
        int coordinate_y1 ;       
        printf("\n좌표입력: ");
        scanf("%d %d", &coordinate_x1, &coordinate_y1);

        // printf("%d %d\n", coordinate_x1, coordinate_y1);

        flip(coordinate_x1-1, coordinate_y1-1);
        system("cls");
        showArr();  
        // test_arrprint();    


        int coordinate_x2 ;
        int coordinate_y2 ;       
        printf("\n좌표입력: ");
        scanf("%d %d", &coordinate_x2, &coordinate_y2);

        // printf("%d %d\n", coordinate_x2, coordinate_y2);

        flip(coordinate_x2-1, coordinate_y2-1);
        system("cls");
        showArr();
        // test_arrprint();

        if (arr[coordinate_y1-1][coordinate_x1-1] != arr[coordinate_y2-1][coordinate_x2-1])
        {
            fail++;
            flip(coordinate_x1-1, coordinate_y1-1);
            flip(coordinate_x2-1, coordinate_y2-1);            
        }
        else
        {
            correct++;
            if (correct == 10)
            {
                printf("\n축하합니다!\n실수횟수: %d", fail);
                exit(0);
            }
        }

        Sleep(1000);
        system("cls");
        showArr();
        // test_arrprint();
        // printf("\nF:%d S:%d\n\n", fail, correct);

        // printf("%d %d\n",arr[coordinate_y1-1][coordinate_x1-1], arr[coordinate_y2-1][coordinate_x2-1]);
    }



    return 0;
}


void test_arrprint() // (테스트용) 배열출력
{
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<4; j++)
        {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<4; j++)
        {
            printf("%3d ", arr_flip[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void showArr()
{   
    printf("    1    2    3    4 \n");
    for (int i=0; i<5; i++)
    {
        printf("%d  ", i+1);

        for (int j=0; j<4; j++)
        {
            if(arr_flip[i][j] == 1)
            {
                switch (arr[i][j])
                {
                case 1: printf("\033[0;32m[A]  \033[0m"); break;
                case 2: printf("\033[0;32m[B]  \033[0m"); break;
                case 3: printf("\033[0;32m[C]  \033[0m"); break;
                case 4: printf("\033[0;32m[D]  \033[0m"); break;
                case 5: printf("\033[0;32m[E]  \033[0m"); break;
                case 6: printf("\033[0;32m[F]  \033[0m"); break;
                case 7: printf("\033[0;32m[G]  \033[0m"); break;
                case 8: printf("\033[0;32m[H]  \033[0m"); break;
                case 9: printf("\033[0;32m[I]  \033[0m"); break;
                case 10: printf("\033[0;32m[J]  \033[0m"); break;
                
                }
            }
            else
            {
                printf("[?]  ");                
            }

        }
        printf("\n");
    } 
}

void flip(int x, int y)
{
    if (arr_flip[y][x] == 0) arr_flip[y][x] = 1;
    else arr_flip[y][x] = 0;
}