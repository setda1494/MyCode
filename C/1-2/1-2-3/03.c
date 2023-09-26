#include <stdio.h>
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void main()
{
	int i, answer, score = 0, num, correnct;

	for (i=0;i<5;i++)
	{
		correnct = 0;
		num = 0;
		while (num < 3 && !correnct)
		{
			printf("\n%d + %d = ",i*i,i*10);
			scanf("%d",&answer);
			if (answer == (i * i)+(i * 10))
			{
				printf("\ncorrenct!");
				correnct = 1;
				score += (20 - num * 3);
			}
			else
			{
				printf("\nTry Again");
			}
			num++;
		}
	}
	printf("당신의 덧셈 성적은 %d\n 입니다",score);
}
