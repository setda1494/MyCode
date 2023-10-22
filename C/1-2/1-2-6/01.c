#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>

#define MAX 10

int arr[MAX];
int size = 0;

void PrintArray(int a[], int value);
bool Insert(int index, int value);
bool Delete(int index);
int Search(int value);

int main()
{
	int input, index, value;
	bool bDispaly = true, bEnd = false;
	while (!bEnd)
	{
		printf("Type : ('1':insert, '2':Delete, '3':Search, '4':quit):");
		scanf("%d", &input);
		bDispaly = true;
		switch (input)
		{
		case 1:
			printf("Insert할 위치: ");
			scanf("%d", &index);
			printf("Insert할 값: ");
			scanf("%d", &value);
			if (!Insert(index, value))
			{
				printf("Insert할 수 없습니다.\n");
			}
			else
				printf("Insert 했습니다.\n");
			break;

		case 2:
			printf("Delete할 위치: ");
			scanf("%d", &index);
			if (!Delete(index))
			{
				printf("Delete할 수 없습니다.\n");
			}
			else
				printf("Delete 했습니다.\n");
			break;

		case 3:
			printf("Search할 값: ");
			scanf("%d", &value);
			index = Search(value);
			if (index < 0)
			{
				printf("찾을 수 없습니다.\n");
			}
			else
				printf("[%d] 위치에 있습니다.\n", index);
			break;

		case 4:
			bEnd = true;
			break;

		default: printf("잘못된 입력입니다.\n");
			bDispaly = false;
			break;
		}
		if (bDispaly)
		{
			PrintArray(arr, size);
		}
	}
	return 0;
}

void PrintArray(int a[], int value)
{
	for (int x = 0; x < size; x++)
	{
		printf("arr[%d]= %d\n", x, a[x]);
	}
}

bool Insert(int index, int value)
{
	bool bRet = false;
	if (size < sizeof(arr) && index >= 0 && index <= size) \
	{
		int i;
		for (i = size - 1; i >= index; i--)
		{
			arr[i + 1] = arr[i]; 
		}
		arr[index] = value;
		size++;
		bRet = true;
	}
	return bRet;
}

bool Delete(int index)
{
	bool bRet = false;
	if (index >= 0 && index < size)
	{
		int i;
		for (i = index + 1; i < size; i++)
		{
			arr[i - 1] = arr[i];
		}
		size--;
		bRet = true;
	}
	return bRet;
}

int Search(int value)
{
	int index = -1;
	int i;
	for (i = 0; i < size; i++)
	{
		if (arr[i] == value)
		{
			index = i;
		}
	}
	return index;
}