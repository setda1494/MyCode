#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTEX 50

typedef struct vertex * vertex_pointer;

struct vertex {
    int vertex_num;
    vertex_pointer link;
} ;

vertex_pointer graph[MAX_VERTEX];
