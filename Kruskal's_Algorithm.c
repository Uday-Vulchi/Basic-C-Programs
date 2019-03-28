#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int i,j,k,a,b,u,v,n,ne=1,m,x,y,z;
int min,mincost=0,cost[9][9],parent[9];
int find(int);
int uni(int,int);
int main( )
{
 printf("Implementation of Kruskal's algorithm\n");
 printf("Enter the no. of vertices\n");
 scanf("%d %d",&n,&m);
 printf("Enter the cost adjacency matrix\n");
 for(i=1;i<=m;i++)
 {
 scanf("%d %d %d",x ,y ,z);
   cost[x][y]=z;
}
for(i=1;i<=m;i++){
for(j=1;j<=m;j++){
   if(cost[i][j]==0)
    cost[i][j]=999;
  }
}
 
 printf("The edges of Minimum Cost Spanning Tree area\n");
 while(ne<n)
 {
  for(i=1,min=999;i<=n;i++)
  {
   for(j=1;j<=n;j++)
   {
    if(cost[i][j]<min)
    {
     min=cost[i][j];
     a=u=i;
     b=v=j;
    }
   }
  }
  u=find(u);
  v=find(v);
  if(uni(u,v))
  {
  printf("%d",min);
  ne++;
   mincost +=min;
  }
  cost[a][b]=cost[b][a]=999;
 }
 printf("Minimum cost = %d",mincost);
 getch();
}
int find(int i)
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
