#include<stdio.h>
#include<math.h>
void print(int set[],int s)
{
int i,j;
for(i=0;i<pow(2,5);i++)
{
printf("{");
for(j=0;j<s;j++)
{
if(i&(1<<j))
{
printf("%d",set[j]);
}
}
printf("}");
printf("\n");
}
}
main()
{
int set[10],i,t,j,ss;
printf("\n Enter the number of test cases\n");
scanf("%d",&t);
for(i=0;i<t;i++)
{
printf("\n Enter the number of elements\n");
scanf("%d",&ss);
if(ss>0)
printf("\n Enter elements\n");
for(j=0;j<ss;j++)
{
scanf("%d",&set[j]);
}
printf("\n the subsets are:\n");
print(set,ss);
}
}
