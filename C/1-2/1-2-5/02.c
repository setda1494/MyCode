#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

bool Insert( int index, int value )
{
    bool bRet = false;
    if (size < sizeof(arr) && index >= 0 && index <= size)
    {
        int i;
        for (i = size-1;i >= index;i--)
        arr[i+1] = arr[i];
        arr[index] = value;
        size++;
        bRet = true;
    }
    return bRet;
}