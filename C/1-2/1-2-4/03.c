#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void swap(int x, int y) 
{ 
    int temp; 
    temp = x; 
    x = y; 
    y = temp; 
    printf("x = %d, y = %d\n", x, y); 
}

int main() 
    { 
        int a, b; 
        printf("두 수? "); 
        scanf("%d %d", &a, &b); 
        swap(a, b); 
        printf("a = %d, b = %d\n", a, b); 
        return 0; 
    }