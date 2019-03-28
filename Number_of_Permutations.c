#include<stdio.h>
#include<math.h>
#include<string.h>
int fact(int num);
int main()
{
int n,t,r=0,i;
char a[100];
printf("enter the number of test cases");
scanf("%d",&t);
while(t--)
{
printf("enter the string");
scanf("%s",a);
n=strlen(a);
for(i=0;a[i]!='\0';i++)
{
 if(a[i]=='a'||a[i]=='e'||a[i]=='o'||a[i]=='i'||a[i]=='u')
 r++;
}
printf("%d",fact(n-r+1)*fact(r));
}
}
int fact(int num)
{
int x=1,i;
if(num==0)
  return 1;
else
{
for(i=1;i<=num;i++)
{
x=x*i;

}
return x;
}
}  
