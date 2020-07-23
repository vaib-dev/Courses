#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
# define INFINITY 999
int i,j,k,a,b,u,v,n,ne=1;
int min,mincost=0,cost[10][10],parent[10]={0};
int find_parent(int);
int uni(int,int);
void main()
{
	printf("\n\tImplementation of Kruskal's algorithm\n");
	printf("\nEnter the no. of vertices:");
	scanf("%d",&n);
	printf("\nEnter the cost adjacency matrix:\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&cost[i][j]);
			if(cost[i][j]==0)
				cost[i][j]=INFINITY;
		}
	}
	printf("The edges of Minimum Cost Spanning Tree are\n");
	while(ne < n)
	{
        min=INFINITY;
		for(i=1;i<=n;i++)
		{
			for(j=1;j <= n;j++)
			{
				if(cost[i][j] < min)
				{
					min=cost[i][j];
					a=u=i;
					b=v=j;
				}
			}
		}
		u=find_parent(u);
		v=find_parent(v);
		if(uni(u,v))
		{
			printf("%d edge (%d,%d) =%d\n",ne++,a,b,min);
			mincost=mincost+min;
		}
		cost[a][b]=cost[b][a]=INFINITY;
	}
	printf("\n\tMinimum cost = %d\n",mincost);
	getch();
}
int find_parent(int i)
{
	while(parent[i])
	i=parent[i];
	return i;
}
int uni(int i,int j)
{
	if(i!=j)
	{
		parent[j]=i;
		return 1;
	}
	return 0;
}