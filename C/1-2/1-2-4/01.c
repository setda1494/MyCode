#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int pcount( int a[10], int n ); 
void main() 
{ 
    int data[10] = {3,50,0,-30,9,11,0,-4,-11,7}; 
    printf("양의 개수 = %d\n", pcount(data,10)); 
}

int pcount( int a[10], int n ) 
{   
    int count = 0, i; 
    for (i = 0; i <n ; i++) 
    { 
        if ( a[i] > 0 ) count++; 
    } 
    return count; 
}