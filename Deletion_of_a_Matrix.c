#include<stdio.h>
#include<math.h>
int main()
{
int t;
printf("enter t value");
scanf("%d",&t);
while(t--)
{
int m,n,i,j,c,k,matrix[10][10],count[10]={0},sum;
printf("enter number of rows and columns");
scanf("%d%d",&m,&n);
printf("Enter a %dx%d order matrices:\n",m,n);
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&matrix[i][j]);
for(i=1;i<m;i++)
{
for(k=0;k<i;k++)
{
int c1=0;
for(j=0;j<n;j++)
{
if(matrix[i][j]==matrix[k][j])
c1++;
}
if(c1==n)
{
count[i]=1;
break;
}
}
}
for(i=0;i<m;i++)
if(count[i]==0)
sum++;
if(sum==m)
printf("the matrices does not contain same rows");
printf("modified matrices:\n");
for(i=0;i<m;i++)
if(!count[i])
{
for(j=0;j<n;j++)
printf("%d",matrix[i][j]);
printf("\n");
}
}
}
