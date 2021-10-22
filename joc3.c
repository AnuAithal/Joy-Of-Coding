/*
Sanvi is a very naughty kid. She can recognize numbers from 0 to 9. Her mother has to submit
a report to her team leader in next one hour. To engage the naughty Sanvi, she gives her 8
balloons which has numbered printed on it. Sanvi is asked to put the balloons in a box, in such
a way that the box shouldn’t contain duplicate balloons with respect to numbers printed on it.
Help baby Sanvi to finish the task soon and start her mischiefs.
Test case:
Input: 1 2 3 1 2 1 3 1
Output: 1 2 3
*/
#include<stdio.h>
int main()
{
    int n,l,i,j;
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    int a[n], visited[n];
    printf("Enter %d elements: ",n);
    for(l=0;l<n;l++)
    {
        scanf("%d",&a[l]);
        visited[l]=0;
    }
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(a[i]==a[j])
                visited[j]=1;

    printf("The balloons in the box are:\n");
    for(i=0;i<n;i++)
        if(visited[i]==0)
            printf("%d\t",a[i]);
}
