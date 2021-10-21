#include<stdio.h>
int main()
{
    int n,t,count=0;
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
        t=a[i];
        if(a[i]!=-999)
        {
            for(int j=0;j<n;j++)
            {
                if(t==a[j])
                {
                    count++;
                    a[j]=-999;
                }
            }
            printf("%d's=%d\n",t,count);
        }
        count=0;
    }
}
