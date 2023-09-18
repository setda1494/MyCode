#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void main()
{
    /* 의사코드
    START
        read(n1,n2,n3)
        if(n1 > n2) then large = n1
        else large = n2
        end if

        if(n3 > large)then large = n3
        end if

        print(large)
    END
    */
    int n1, n2, n3;
    int large;
    printf("3개의 정수 입력하시오 : ");
    scanf("%d %d %d", &n1, &n2, &n3);
    if (n1 > n2)
    {
        large = n1;
    }
    else
    {
        large = n2;
    }

    if (large < n3)
    {
        large = n3;
    }

    printf("large = %d\n", large);

    
}