#include<stdio.h>
#include<string.h>
long long int sum(char c[])
{
   long long int a,s=0,i=strlen(c);
   while(i--)
    {
        
        s=s+(c[i]-48);
      
    } 
    return s;
}
long long int sum1(long long int n)
{
   long long int a,s=0;
   while(n>0)
    {
        a=n%10;
        s=s+a;
        n=n/10;
    } 
    return s;
}
int main() {
long long int n,k,a,s=0;
    char c[1000000];
    scanf("%s %lld",c,&k);
    a=sum(c);
    while(a>=10)
    {
        n=a;
        a=sum1(n);
    }
    a*=k;
    while(a>=10)
    {
        n=a;
        a=sum1(n);
    }
    printf("%lld",a);
    return 0;
}
