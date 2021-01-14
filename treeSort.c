#include<stdio.h>
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
