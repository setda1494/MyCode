#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX_VERTEX 50

int n; 

int already_visited[MAX_VERTEX]; 

void dfs(int v); 

int connected()
{
	int v, cnum = 0;
	for (v = 0; v < n; v++)
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

void dfs(int v)
{

}
