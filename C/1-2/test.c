#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX_VERTEX 50

typedef struct vertex* vertex_pointer;

struct vertex {
    int vertex_num;
    vertex_pointer link;
};

vertex_pointer graph[MAX_VERTEX];
int already_visited[MAX_VERTEX];

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

void Edge(vertex_pointer* G, int Hu, int lv)
{
    vertex_pointer temp = (vertex_pointer)malloc(sizeof(struct vertex));
    temp->vertex_num = lv;
    temp->link = G[Hu]->link;
    G[Hu]->link = temp;
}

int connected()
{
	int v, cnum = 0;
	for (v = 0; v < MAX_VERTEX - 1; v++)
	{
		if (already_visited[v] == 0)
		{
			dfs(v);
			cnum++;
			printf("\n"); 
		}
	}
	return cnum;
}

void main()
{
    for (int i = 0; i < MAX_VERTEX; i++)
    {
        graph[i] = (vertex_pointer)malloc(sizeof(struct vertex));
        graph[i]->vertex_num = i;
        graph[i]->link = NULL;
    }

    Edge(graph, 6, 5);
    Edge(graph, 6, 4);
    Edge(graph, 6, 2);
    Edge(graph, 5, 6);
    Edge(graph, 5, 3);
    Edge(graph, 5, 2);
    Edge(graph, 4, 6);
    Edge(graph, 4, 2);
    Edge(graph, 4, 1);
    Edge(graph, 3, 5);
    Edge(graph, 3, 0);
    Edge(graph, 2, 6);
    Edge(graph, 2, 5);
    Edge(graph, 2, 4);
    Edge(graph, 2, 0);
    Edge(graph, 1, 4);
    Edge(graph, 1, 0);
    Edge(graph, 0, 3);
    Edge(graph, 0, 2);
    Edge(graph, 0, 1);

    printf("DFS (깊이 우선 탐색)\n");
    dfs(0); // dfs(0) 0142536, dfs(5) 5201463
    printf("END\n");

    for (int i = 0; i < MAX_VERTEX; i++)
    {
        already_visited[i] = 0;
    }

    printf("BFS (너비 우선 탐색)\n");
    dfs(5); // bfs(0) 0123456, bfs(5) 5236041
    printf("END\n");

}
