#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void main()
{
	int* ip;
	float* fp;

	ip = (int*)malloc(sizeof(int));
	fp = (float*)malloc(sizeof(int));
	
	*ip = 2008;
	*fp = 7.123;
	
	printf("year=%d : point=%.3f\n", *ip, *fp);
	
	free(ip);
	free(fp);
}