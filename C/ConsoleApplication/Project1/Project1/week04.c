#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void practice1()
{
	int n1, n2, n3;
	int large;
	printf("3개의 정수 입력하시오 : ");
	scanf("%d %d %d", &n1, &n2, &n3);
	if (n1 > n2)
	{
		large = n1;
	}
	else
	{
		large = n2;
	}

	if (large < n3)
	{
		large = n3;
	}

	printf("large = %d\n", large);

}
void practice2()
{
	int x = 0;
	int y = 0;
	int diff = 0;

	printf("두 수를 입력 하시오");
	scanf("%d %d", &x, &y);

	if (x < y)
	{
		diff = x - y;
	}
	else
	{
		diff = y - x;
	}
	printf("%d", diff);
}
void practice3()
{
	int score = 0;
	char grade;

	printf("당신의 점수를 입력 하시오");
	scanf("%d", &score);

	if (90 < score)
	{
		grade = 'A';
	}
	if (80 < score)
	{
		grade = 'B';
	}
	if (70 < score)
	{
		grade = 'C';

	}
	if (60 < score)
	{
		grade = 'D';
	}
	else
	{
		grade = 'F';
	}
	printf("당신의 점수는" + grade);
}
practice4()
{
	int x = 0;
	int y = 0;
	int temp = 0;

	printf("숫자 2개를 입력 하시오");
	scanf("%d%d", &x, &y);

	if (x < y)
	{
		temp = x;
		x = y;
		y = temp;
	}
	printf("x = %d,y = %d", &x, &y);
}
practice5()
{
	int num;
	int r;

	printf("숫자를 입력하시오");
	scanf("%d", &num);

	while (num < 0)
	{
		r = num % 10;
		printf("%d", &r);
		num / 10;
	}
}	
practice6() 
{
	int num, r;

	printf("수를 입력하시오 : ");
	scanf("%d", &num);

	while (num > 0) {
		r = num % 10;
		printf("수의 변환 결과 : %d\n", r);

		num = num / 10;
	}
}
func1()
{
	int x;
	printf("수를 입력하시오 ");
	scanf("%d", &x);
	if (x > 0)
	{
		printf("positive\n");
	}
	else if (x < 0)
	{
		printf("negative\n");
	}
	else printf("zero\n");
}
func2()
{
	printf("숫자 2개를 입력 하시오");
	int x, y;
	scanf("%d %d", &x, &y);
	if (y == 0)
	{
		printf("can not divide!!\n");
	}
	else printf("%d\n", x / y);
}
func3()
{
	int n, data, imax = 0;
	printf("몇개의 자료를 넣으시겠습니까?");
	scanf("%d", &n);
	for (int count = 1; count <= n; count++)
	{
		printf("자료를 넣으세요");
		scanf("%d", &data);
		if (data > imax)
		{
			imax = data;
		}
	}
	printf("%d\n", imax);
}
func4()
{
	int n, odd_sum = 0, count = 1;
	printf("수를 입력하시오");
	scanf("%d", &n);
	while (count <= n)
	{
		odd_sum += count;
		count = count + 2;
	}
	printf("홀수 번째의 합은 %d 입니다\n", odd_sum);

}
func5()
{
	int count = 0, pos_sum = 0, nega_sum = 0, data;
	while (count < 50)
	{
		printf("데이터를 입력하세요");
		scanf("%d", &data);
		if (data > 0)
		{
			pos_sum += data;
		}
		else if (data < 0)
		{
			nega_sum += data;
		}
		count++;
	}
	printf("0초과 수의 합: %d\n0미만 수의 합: %d\n", pos_sum, nega_sum);
}
func6()
{
	int mult = 1, allzero = 1, data;
	for (int count = 0; count < 10; count++)
	{
		printf("10개의 수를 넣으시오");
		scanf("%d", &data);
		if (data != 0)
		{
			mult = mult * data;
			allzero = 0;
		}
	}
	if (allzero == 1)
	{
		mult = 0;
	}
	printf("총 합은 %d\n", mult);
}


void main()
{
	int qult = 0;
	int menu = 0;

	printf("-1번 사용종료\n");
	printf("1번 practice1\n");
	printf("2번 practice2\n");
	printf("3번 practice3\n");
	printf("4번 practice4\n");
	printf("5번 practice5\n");
	printf("6번 practice6\n");
	printf("7번 func1\n");
	printf("8번 func2\n");
	printf("9번 func3\n");
	printf("10번 func4\n");
	printf("11번 func5\n");
	printf("12번 func6\n");

	while (qult == 0)
	{
		printf("...\n");
		printf("...\n");

		scanf("%d", &menu);
		switch (menu)
		{
		case -1:
			qult = 1;
			break;

		case 1:
			practice1();
			break;

		case 2:
			practice2();
			break;

		case 3:
			practice3();
			break;

		case 4:
			practice4();
			break;

		case 5:
			practice5();
			break;
		
		case 6:
			practice6();
			break;

		case 7:
			func1();
			break;

		case 8:
			func2();
			break;

		case 9:
			func3();
			break;

		case 10:
			func4();
			break;

		case 11:
			func5();
			break;

		case 12:
			func6();
			break;

		}
	}
}

