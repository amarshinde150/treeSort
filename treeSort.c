#include<stdio.h>
struct tree
{
    int data;
    struct tree *left,*right;
} *head;

void makeTree(int n,struct tree *root)
{
    struct tree *nn=(struct tree*)malloc(sizeof(struct tree));
    nn->data=n;
    nn->left=nn->right=NULL;
    struct tree *temp=root;
    if(root==NULL)
    {
        root=nn;
    }
    else if(temp->data>n)
    {
        temp=temp->left;
        makeTree(n,temp);
    }
    else if(temp->data<n)
    {
        temp=temp->right;
        makeTree(n,temp);
    }
}
void treeSort(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        makeTree(a[i]);
    }
}
int main()
{
    int n;
    printf("Enter the number of Elements in array\n");
    scanf("%d",&n);
    int *a=(int *)malloc(sizeof(int)*n);
    printf("Enter the elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements before sorting is: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    treeSort(a,n);
    printf("Elements after sorting is: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
