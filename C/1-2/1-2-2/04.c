#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void main()
{
    /*
    start
        rede(x,y)
        if(x > y)
        {
            temp = x
            y = x
            y = temp
        }
        if(y > x)
        {
            temp = y
            x = y
            x = temp
        }
        print(x,y)
    end
    */
    int x = 0;
    int y = 0;
    int temp = 0;

    printf("숫자를 입력 하시오");
    scanf("%d%d",&x,&y );

    if (x < y)
    {
        temp = x;
        x = y;
        y = temp;
    }
    printf("x = %d,y = %d", &x, &y);
}