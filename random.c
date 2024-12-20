#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    srand(time(NULL)); // 난수 초기화. 이걸 안하면 이후 실행할때마다 똑같은 값이 나옴.

    for (int i=0; i<10; i++)
    {
        printf("%d ", rand()%10);
    }
}