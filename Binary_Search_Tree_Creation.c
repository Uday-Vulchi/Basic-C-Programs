#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
int data;
struct node *left;
struct node *right;
} node;
node *create()
{
node *p;
int x;
printf("Enter data(-1 for no child/root):");
scanf("%d",&x);
if(x==-1)
return NULL;
p=(node*)malloc(sizeof(node));
p->data=x;
printf("Enter left child of %d:\n",x);
p->left=create();
printf("Enter right child of %d:\n",x);
p->right=create();
return p;
}
int Mirror(node* a, node* b)
{
if (a==NULL && b==NULL)
return 1;
if (a==NULL || b == NULL)
return 0;
return a->data == b->data &&
Mirror(a->left, b->right) &&
Mirror(a->right, b->left);
}
int main()
{
node *root1,*root2;
int c;
printf("enter first tree\n");
root1=create();
printf("enter second tree\n");
root2=create();
if(Mirror(root1,root2))
printf("yes ");
else
printf("no");
}
