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
Experiment 10A:
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
    printf("Enter data(-1 for no data):");
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
int BTlevel(node *root,node *ptr, int lev)
{ 
int l;
if (root == NULL)  
return 0;
if (root->data == ptr->data) 
return lev;
l = BTlevel(root->left, ptr, lev+1);
if (l != 0) 
return l;
    return BTlevel(root->right, ptr, lev+1);
}
int isBTCousin(node *root,node *a,node *b)
{
if ((BTlevel(root,a,1) == BTlevel(root,b,1))&& !(isBTSibling(root,a,b))) 
return 1;
else
return 0;
}
int isBTSibling(node *root,node *a,node *b)
{
if (root==NULL)
return 0; 
return ((root->left==a && root->right==b)||
    (root->left==b && root->right==a)|| 
    isBTSibling(root->left, a, b)||
    isBTSibling(root->right, a, b)); 
}
void main() 
{
node *root,*p,*q;
int c;
root=create();
p=(node*)malloc(sizeof(node));
q=(node*)malloc(sizeof(node));
printf("enter two values");
scanf("%d%d",&p->data,&q->data); 
p->right=NULL;
p->left=NULL;
q->right=NULL;
q->left=NULL;
c=isBTCousin(root,p,q);
if(c==1) 
printf("yes");
else 
printf("No");
getch(); 
}
