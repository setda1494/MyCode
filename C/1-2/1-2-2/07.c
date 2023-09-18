#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void main()
{
    /*
    start
        rede(x)
        if(0 < x)
            print("positive")
        if(x < 0)
            print("negative")
        if(x == 0)
            print(zero)
    end
    */

    int x;

    printf("숫자를 입력 하시오");
    scanf("%d", &x);

    if (x == 0)
    {
        printf("zero");
    }
    if (x < 0)
    {
        printf("positive");
    }
    if (0 < x)
    {
        printf("negative");
    }
}