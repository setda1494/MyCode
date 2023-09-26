#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void main()
{
    /*
        START
            read(n)
            odd_sum= 0
            count = 1
            while (count <= n) do
                odd_sum = odd_sum +  count 
                count = count +2
            endwhile
            print(odd_sum)
        END
    */

    int n;
    int odd_sum = 0;
    int count = 1;

    printf("숫자를 입력 하시오");
    scanf("%d",&n);
    while (count <= n)
    {
        odd_sum = odd_sum + count;
        count = count + 2;
    }
    printf("%d",odd_sum);

}
