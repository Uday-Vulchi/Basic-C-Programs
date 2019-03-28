#include<stdio.h>
void main()
{
int n,p,q,i,j,l,t;
long int k,a=1,b=1,c=1;
printf("enter no of testcases \n");
scanf("%d",&p);
 for(q=0;q<p;q++)
{
printf("enter n value \n");
scanf("%d",&n);
 for(i=0;i<=n;i++)
{
a=1,b=1,c=1;
 for(j=1;j<=n;j++)
a=a*j;
for(l=1;l<=n-i;l++)
b=b*l;
for(t=1;t<=i;t++)
c=c*t;
k=a/(b*c);
printf("%ld  ",k);
}
}
}
