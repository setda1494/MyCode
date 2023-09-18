#include <iostream>
#define _CRT_SECURE_NO_WARNINGS

void main()
{
    char carray[2];
    int iarray[2];
    char* pChar = carray;
    int* point = iarray;

    printf("pChar = %p point = %p\n",pChar,point);
    pChar++;
    point++;
    printf("pChar = %p point = %p\n", pChar, point);
}
