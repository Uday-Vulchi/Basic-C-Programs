#include<stdio.h>
int main()
{
int i,k,n,ch,a[5],b[5],c[5],d[5],l;
printf("enter no of test cases");
scanf("%d",&n);
for(i=0;i<n;i++);
{
do
{
printf("menu\n");
printf("1.and\n");
printf("2.or\n");
printf("3.not\n");
printf("4.implication\n");
printf("enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("AND GATE TRUTH TABLE\n");
              for(l=0;l<n;l++)
			  {
			  scanf("%d%d",&a[l],&b[l]);
              c[l]=a[l]*b[l];
              }
              printf("%c %c %c\n",65,66,67);
              for(l=0;l<n;l++)
              printf("%d %d %d\n",a[l],b[l],c[l]);
              
			  break;
case 2:printf("OR GATE TRUTH TABLE\n");
             for(l=0;l<n;l++)
			  {
			  scanf("%d%d",&a[l],&b[l]);
			  if(a[l]!=1&&b[l]!=0)
              c[l]=a[l]+b[l];
              else
              c[l]=1;
              }
              printf("%c %c %c\n",65,66,67);
              for(l=0;l<n;l++)
              printf("%d %d %d\n",a[l],b[l],c[l]);
              
			  break;
 case 3:printf("NOT GATE TRUTH TABLE\n");
              for(l=0;l<2;l++)
			  {
			  scanf("%d",&d[l]);
              if(d[l]==0)
              c[l]=1;
              else
              c[l]=0;
               }
              printf("%c %c %c\n",65,66,67);
               for(l=0;l<2;l++)
              printf("%d %d\n",d[l],c[l]);
            
			  break;
case 4:printf("IMPLICATION TRUTH TABLE");
              for(l=0;l<n;l++)
			   {
			 scanf("%d%d",&a[l],&b[l]);
              if(a[l]==1&&b[l]==0)
              c[l]=0;
              else
              c[l]=1;
             }
           printf("%c %c %c\n",65,66,67); 
             for(l=0;l<n;l++)
             printf("%d %d %d\n",a[l],b[l],c[l]);
            
			  break;
    }
    printf("enter 0 to exit 1 to continue");
    scanf("%d",&k);
    }while(k!=0);
    }    }
