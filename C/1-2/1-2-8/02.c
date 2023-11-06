#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MAX_Q_SIZE 10

typedef struct {
	int job_num;    // 작업 번호
	char grade;     // 작업 등급
}element;

element queue[MAX_Q_SIZE];  // 큐 배열

int rear = 0;   // rear 포인터
int front = 0;  // front 포인터

void addq(element data)
{
	if ((rear + 1) % MAX_Q_SIZE == front)
	{
		printf("Q is full\n");  // 큐가 가득 찼을 경우 오류 메시지 출력
	}
	else
	{
		rear = (rear + 1) % MAX_Q_SIZE;  // rear 포인터 이동
		queue[rear] = data;  // 큐에 데이터 삽입
	}
}

element cdeleteq()
{
	if (rear == front)
	{
		printf("Q is Empty\n");  // 큐가 비어있을 경우 오류 메시지 출력
		element empty;
		empty.job_num = -1;  // 임의의 값으로 초기화
		empty.grade = '\0';
		return empty;
	}
	else
	{
		front = (front + 1) % MAX_Q_SIZE;  // front 포인터 이동
		return queue[front];  // 큐에서 데이터 반환
	}
}

int main()
{
	int i, job_num, out, cond = 1;
	element temp;
	int count_A = 0;  // A 등급 작업 개수를 저장하는 변수

	while (cond)
	{
		/* 작업 삽입 부분 */
		printf("완료한 작업 수는? >>> ");
		scanf("%d", &job_num);
		printf("작업번호와 작업상태 입력 : \n");
		// temp 변수를 이용하여 job_num개 만큼 job_num, grade를 입력받아서 원형큐에 삽입
		for (i = 0; i < job_num; i++)
		{
			scanf("%d %c", &temp.job_num, &temp.grade);
			addq(temp);  // 작업을 큐에 삽입
			if (temp.grade == 'A')  // A 등급 작업인 경우 count_A 변수 증가
			{
				count_A++;
			}
		}

		/* 작업 삭제 부분 */
		printf("몇 개의 작업을 출고하시겠습니까? >>> ");
		scanf("%d", &out);
		// out 번 삭제하면서 (삭제한 내용은 temp에 받기) temp의 job_num, grade를 출력
		for (i = 0; i < out; i++)
		{
			temp = cdeleteq();  // 작업을 큐에서 삭제
			if (temp.job_num == -1)
			{
				printf("더 이상 삭제할 작업이 없습니다.\n");
				break;
			}
			printf("%d\t%c\n", temp.job_num, temp.grade);  // 삭제한 작업의 번호와 등급 출력
		}

		printf("A 등급 작업 개수: %d\n", count_A);  // A 등급 작업 개수 출력

		printf("front = %d :: rear = %d\n", front, rear);  // 현재 큐의 front와 rear 값 출력
		printf("작업의 입출력을 계속하시겠습니까? (NO: 0, YES: 1) >>> ");
		scanf("%d", &cond);  // 작업의 입출력을 계속할지 여부 입력
	}

	return 0;
}
