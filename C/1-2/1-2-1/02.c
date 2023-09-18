#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void main()
{
    int a;
    char b;
    char ch1 = 120;
    char ch2 = 120;
    char ch3 = ch1 + ch2;

    printf("sizeof (a) =%d,sizeof (b) =%d\n", sizeof(a), sizeof(b));
    printf("ch1 = %d ch2 = %d ch3= %d\n", ch1, ch2, ch3);
    printf("ch1 = %02x ch2 = %02x ch3= %02x\n", ch1, ch2, ch3);
    printf("unsigned ch3= %02x\n", (unsigned char)ch3);
}
