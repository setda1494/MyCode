#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MAX_QUEUE_SIZE 10

typedef struct {
	int job_num;
	char grade;
}element;

element queue[MAX_QUEUE_SIZE];
int rear = -1;
int front = -1;

void addq(element item)
{
	/* queue에 item 삽입*/
	if (rear == MAX_QUEUE_SIZE - 1)
	{
		printf("Queue is full!!");
	}
	else queue[++rear] = item;
}

element deleteq()
{
	/*queue의 앞에서 원소를 삭제*/
	if (front == rear)
	{
		printf("Queue is empty");
	}
	else return queue[++front];
}


int main()
{
	int i, job_num, gradeA=0;
	element temp;

	printf("오늘 작업한 작업 수는? ");
	scanf("%d", &job_num);

	printf("작업번호와 작업상태 입력: \n");
	//job_num 개의 element 를 입력받아 큐에 삽입하기
	// "temp" 의 필드인 job_num, grade를 scanf로써 입력받아 사용
	for (i = 0; i < job_num; i++)
	{
		scanf("%d %c", &temp.job_num, &temp.grade);
		addq(temp);
	}
	printf("\nfront = %d :: rear = %d\n\n", front, rear);

	for (i = 0; i < job_num; i++)
	{
		temp = deleteq();
		if (temp.grade == 'A')
		{
			printf("%d\t%c\n", temp.job_num, temp.grade);
			gradeA++;
		}
		else addq(temp);
	}
	printf("A 등급인 job은 %d개 입니다. \n", gradeA);

	return 0;
}