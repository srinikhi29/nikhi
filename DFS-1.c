#include<stdio.h>
int G[5][5],n;
void DFS(int y,int arr[])
{
	arr[y]=1;
	printf("%d\n",y);
	int j;
	for(j=0;j<n;j++)
	{
		if(G[y][j]==1 &&arr[j]==0)
		{
			DFS(j,arr);
		}
		else
		{
			continue;
		}
    }
}
int main()
{
	int l=0,i=0,j=0,k=0;
	printf("enter number of vertices:\n");
	scanf("%d",&n);
	int visited[n];
	printf("enter adjacency matrix of the graph:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&G[i][j]);
		}
	}
	for(k=0;k<n;k++)
	{
		visited[k]=0;
	}
	DFS(l,visited);
}
