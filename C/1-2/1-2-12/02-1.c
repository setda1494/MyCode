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
    int v;
    vertex_pointer now;
    int stop = 0;
    already_visited[s] = 1;
    printf("%d :: ", s);
    addq(s);
    while (!stop)
    {
        v = deleteq();
        for (now = graph[v]; now != NULL; now = now->link)
        {
            if (already_visited[now->vertex_num] == 0)
            {
                already_visited[now->vertex_num] = 1;
                printf("%d :: ", now->vertex_num);
            }
        }
        stop = check_continue();
    }
}
