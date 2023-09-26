#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void main() {
    int i = 10;
    int j = -10;
    int k;

    printf("i = %d = 0x%08x i = %d = 0x%08x\n", i, i, j, j);
    i = 7;
    printf("i = %d = 0x%08x i = %d = 0x%08x\n", i, i, j, j);

    k = i + j;
    printf("I+k = 0x%08x\n",k);

}