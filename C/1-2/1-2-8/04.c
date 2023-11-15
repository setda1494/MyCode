#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	int* p , q;
	float* fp, x;
	p = &q;
	*p = 199;
	fp = &x;
	scanf("%f",fp);
	printf("%d ----- %2f/n",q,x);
}