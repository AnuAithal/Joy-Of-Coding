#include<stdio.h>
int main()
{
    int n,flag=0;
    printf("Enter no. of elements:");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j+i+1])
            {
                flag=1;
            }

        }
    }
    if(flag==1)
        printf("Array not distinct\n");
    else
        printf("Array distinct\n");
}
