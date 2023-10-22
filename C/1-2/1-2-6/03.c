#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>

#define MAX 10
typedef struct
{
	int key;
	char grade;
} element;

int top = -1;
element stack[MAX];
int flag = 1;

void push(element item)
{
	if (top >= MAX - 1)
	{
		printf("Stack is overflow!!!\n");
	}
	else
	{
		top++;
		stack[top] = item;
	}
}

element pop()
{
	if (top == -1)
	{
		printf("Stack is empty!!!\n");
		flag = 0;
	}
	else
		return stack[top--];
}

void main()
{
	element data;
	bool bEnd = false; // stdbool.h 헤더파일 필요
	int i = 0, menu = 1;
	while (bEnd == false)
	{
		printf("번호입력: 1=push, 2=pop, 3=exit: ");
		scanf("%d", &menu);
		if (menu == 1)
		{
			printf("element 입력(번호_학점): ");
			scanf("%d %c", &data.key, &data.grade);
			push(data);
			printf("%d %c 를 입력했음\n", data.key, data.grade);
		}
		else if (menu == 2)
		{
			data = pop();
			if (flag != 0)
			{
				printf("pop: %d %c\n", data.key, data.grade); // 구조체 타입이라 &안붙음
			}
		}
		else if (menu == 3)
		{
			bEnd = true;
		}
	}
}