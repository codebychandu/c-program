#include<stdio.h>
#include<stdlib.h>


int main()
{
    int a[20],i,x,n;
    
    printf("\n how many element:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\n enter the element to search:"); 
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            printf("\n thr element %d is present at position %d",x,i+1);
            scanf("%d",&x);
            exit(0);

        }
    }
    
    return 0;
}