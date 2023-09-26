#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void main()
{
    /*
        START
            read(n)
            for count = 1to by n by 1 do
                read data
                if (data > indax)
                    indax = data
            end for
            print(indax)
        END
    */
    
    int data = 0;
    int n = 0;
    int indax = 0;

    scanf("%d",&n);
    
    for (int count = 1; count < n; count++)
    {
        scanf("%d", &data);
        if (data > indax)
        {
            indax = data;
        }
    }
    printf("가장 큰 수는 %d",indax);
}
