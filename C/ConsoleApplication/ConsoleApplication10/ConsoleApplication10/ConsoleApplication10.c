#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void main()
{
    /*
    start
        read(x,y)
        if(x==0)
        {
            print("error")
        }
        else
        {
            quot = x/y
        }
        print(puot)
    end
    */

    int x;
    int y;
    int quot;

    printf("숫자를 입력 하시오");
    scanf("%d%d", &x, &y);

    if (x == 0)
    {
        printf("error");
    }
    else
    {
        quot = x / y;
    }
    printf("%d", quot);
}