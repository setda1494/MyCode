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

	printf("���� 2���� �Է� �Ͻÿ�");
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

	printf("���ڸ� �Է��Ͻÿ�");
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

	printf("���� �Է��Ͻÿ� : ");
	scanf("%d", &num);

	while (num > 0) {
		r = num % 10;
		printf("���� ��ȯ ��� : %d\n", r);

		num = num / 10;
	}
}
func1()
{
	int x;
	printf("���� �Է��Ͻÿ� ");
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
	printf("���� 2���� �Է� �Ͻÿ�");
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
	printf("��� �ڷḦ �����ðڽ��ϱ�?");
	scanf("%d", &n);
	for (int count = 1; count <= n; count++)
	{
		printf("�ڷḦ ��������");
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
	printf("���� �Է��Ͻÿ�");
	scanf("%d", &n);
	while (count <= n)
	{
		odd_sum += count;
		count = count + 2;
	}
	printf("Ȧ�� ��°�� ���� %d �Դϴ�\n", odd_sum);

}
func5()
{
	int count = 0, pos_sum = 0, nega_sum = 0, data;
	while (count < 50)
	{
		printf("�����͸� �Է��ϼ���");
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
	printf("0�ʰ� ���� ��: %d\n0�̸� ���� ��: %d\n", pos_sum, nega_sum);
}
func6()
{
	int mult = 1, allzero = 1, data;
	for (int count = 0; count < 10; count++)
	{
		printf("10���� ���� �����ÿ�");
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
	printf("�� ���� %d\n", mult);
}


void main()
{
	int qult = 0;
	int menu = 0;

	printf("-1�� �������\n");
	printf("1�� practice1\n");
	printf("2�� practice2\n");
	printf("3�� practice3\n");
	printf("4�� practice4\n");
	printf("5�� practice5\n");
	printf("6�� practice6\n");
	printf("7�� func1\n");
	printf("8�� func2\n");
	printf("9�� func3\n");
	printf("10�� func4\n");
	printf("11�� func5\n");
	printf("12�� func6\n");

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

