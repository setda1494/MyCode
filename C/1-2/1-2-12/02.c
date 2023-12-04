#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX_VERTEX 50

typedef struct vertex *vertex_pointer;

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
    printf("%d :: ", s);
    for (v = graph[s]; v != NULL; v = v->link)
    {
        if (already_visited[v->vertex_num] == 0)
        {
            dfs(v->vertex_num);
        }
    }
}
