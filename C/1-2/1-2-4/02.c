#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int minvalue(int a[5][5])
{
    int value = 0, col, row;
    int first = 1;
    for (row = 0; row < 5; row++)
    {
        for (col = 0; col < 5; col++)
        {
            if (first)
            {
                first = 0; value = a[col][row];
            }
            else
            {
                if (a[col][row] < value) value = a[col][row];
            }
        }
    } return value;
}

void main()
{
    int data[5][5] =
    {
        { 3, 50, 0, -30, 9},
        {11, 0, -4, -11, 7},
        { 40,-99, 70, 99, 100},
        {3, 6, -12, 79, -77},
        { 54, -29, 0, 7, 17}
    };
    printf("가장 작은 수 = %d\n", minvalue(data));
}