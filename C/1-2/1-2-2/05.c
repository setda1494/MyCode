#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void main()
{
    /*
    start
        read(num)
        while(num >0)do
            r = num%10
            print(r)
            num = num/10
        endwhile
    end
    */

    int num;
    int r;

    printf("숫자를 입력 하시오");
    scanf("%d", &num);

    while (num < 0)
    {
        r = num % 10;
        printf("%d", r);
        num / 10;
    }
}   