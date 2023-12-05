#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAX_V 10
int queue[MAX_V];
int front = -1;
int rear = -1;


typedef struct vertex *vertex_pointer;
struct vertex
{
	int vertex_num;
	vertex_pointer link;
};
vertex_pointer graph[MAX_V];
int already_visited[MAX_V] = { 0, };


void dfs(int s)
{
	vertex_pointer v;
	already_visited[s] = 1;
	printf("%d - ", s);
	for (v = graph[s]; v != NULL; v = v->link)
	{
		if (already_visited[v->vertex_num] == 0)
		{
			dfs(v->vertex_num);
		}
	}
}

void addq(int s)
{
	if (rear == MAX_V)
	{
		printf("입력 불가\n");
	}
	else
		queue[++rear] = s;
}

int deletedq()
{
	if (front == rear)
	{
		printf("비어있는 큐\n");
	}
	else
		return queue[++front];
}

bool check_continue()
{
	if (front == rear)
	{
		return true;
	}
	else
		return false;
}

void bfs(int s)
{
	int v;
	vertex_pointer now;
	int stop = 0;
	already_visited[s] = 1;
	printf("%d :: ", s);
	addq(s);
	while (!stop)
	{
		v = deletedq();
		for (now = graph[v]; now != NULL; now = now->link)
		{
			if (already_visited[now->vertex_num] == 0)
			{
				already_visited[now->vertex_num] = 1;
				printf("%d :: ", now->vertex_num);
				addq(now->vertex_num);
			}
		}
		stop = check_continue();
	}
}

void Edge(vertex_pointer *G, int Hu, int lv)
{
	vertex_pointer temp = (vertex_pointer)malloc(sizeof(vertex_pointer));
	temp->vertex_num = lv;
	temp->link = G[Hu]->link;
	G[Hu]->link = temp;
}

int connected()
{
	int v, cnum = 0;
	for (v = 0; v < MAX_V-1; v++)
	{
		if (already_visited[v] == 0)
		{
			dfs(v);
			cnum++;
			printf("\n");
			printf("연결요소의 개수 %d",cnum);
		}
	}
	return cnum;
}


int main()
{
	for (int i = 0; i < MAX_V; i++)
	{
		graph[i] = (vertex_pointer)malloc(sizeof(vertex_pointer));
		graph[i]->vertex_num = i;
		graph[i]->link=NULL;
	}
	// p.288 7-14그림
	Edge(graph, 7, 8);
	Edge(graph, 4, 6);
	Edge(graph, 4, 5);
	Edge(graph, 2, 3);
	Edge(graph, 1, 3);
	Edge(graph, 1, 2);
	Edge(graph, 0, 1);
	Edge(graph, 0, 2);
	Edge(graph, 0, 3);
	

	printf("DFS(깊이 우선 탐색)\n");
	dfs(0);
	printf(" END\n\n");

	for (int i = 0; i < MAX_V; i++)
	{
		already_visited[i] = 0;
	}

	//printf("BFS(너비 우선 탐색)\n");
	//bfs(0);
	//printf("END\n\n");

	int c = connected();
	printf("연결요소는 %d", c);

	return 0;
}