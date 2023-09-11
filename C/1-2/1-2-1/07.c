#include <iostream>

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
