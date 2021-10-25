#include<stdio.h>
int main()
{
    int n,j,sum,s=0,count=0,flag=0;
    printf("Enter no. of elements:");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements:\n",n);
    for(int l=0;l<n;l++)
    {
        scanf("%d",&a[l]);
    }
    printf("Enter sum:");
    scanf("%d",&sum);
    for(int i=0;i<n;i++)
    {
        j=i;
        count=0;
        s=0;
        while(s<sum)
        {
            count++;
            s=s+a[j++];
            if(sum==s)
            {
                flag=1;
                printf("The sub array is ");
                for(int k=i;k<i+count;k++)
                {
                    printf("%d\t",a[k]);
                }
                printf("\nIndices ranges from %d to %d",i,i+count-1);
                return 0;
            }
        }

    }
    if(flag==0)
        printf("\nNot possible to obtain the sum");
}
