#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void main()
{
    /* 의사코드
    STARTa
        read(x,y)
        if(x<y)
        {
            diff = x - y
        }
        else
        {
            diff = y - x
        }
        print(diff)
    END
    */
    
    int x =0;
    int y =0;
    int diff =0;
    
    printf("두 수를 입력 하시오");
    scanf("%d %d", &x, &y);

    if (x<y)
    {
        diff = x - y;
    }
    else
    {
        diff = y - x;
    }
    printf("%d", diff);
    
}