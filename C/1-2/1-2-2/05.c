#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void main()
{
    /*
    start
        count = 0
        rede(n)
        while(count < n) do
            read(data)
            sum = sum + data
            count+1
        endwhil
        avg = sum/n
        print(sum,avg)
    end
    */

    int count;
    int n;
    int data;
    int sum;
    int avg;

    printf("반복할 횟수를 알려 주시오");
    scanf("%d", &n);
    while (count < n + 1)
    {
        printf("데이터를 입력해 주시오");
        scanf("%d", &data);
        sum = sum +data;
        count ++;
    }
    avg = sum / n;
    printf("sum = %d , avg = %d" ,sum, avg);

}