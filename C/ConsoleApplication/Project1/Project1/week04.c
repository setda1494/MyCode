#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void practice1()
{
	int n1, n2, n3;
	int large;
	printf("3���� ���� �Է��Ͻÿ� : ");
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

	printf("�� ���� �Է� �Ͻÿ�");
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

	printf("����� ������ �Է� �Ͻÿ�");
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
	printf("����� ������" + grade);
}
practice4()
{
	int x = 0;
	int y = 0;
	int temp = 0;

	printf("���ڸ� �Է� �Ͻÿ�");
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

	printf("���ڸ� �Է� �Ͻÿ�");
	scanf("%d", &num);

	while (num < 0)
	{
		r = num % 10;
		printf("%d", r);
		num / 10;
	}
}
practice6() 
{
	int x;

	printf("���ڸ� �Է� �Ͻÿ�");
	scanf("%d", &x);

	if (x == 0)
	{
		printf("zero");
	}
	if (x < 0)
	{
		printf("positive");
	}
	if (0 < x)
	{
		printf("negative");
	}
}
func1()
{

}
func2()
{

}
func3()
{

}
func4()
{

}
func5()
{

}
func6()
{

}

void main()
{
	int qult = 0;
	int menu = 0;
	while (qult == 0)
	{
		printf("...\n");
		printf("...\n");
		scanf("%d",&menu);
		switch (menu)
		{
		case -1: qult = 1; break;

		case 1: practice1(); break;

		case 2: practice2(); break;

		case 3: practice3(); break;
		}
	}
}

