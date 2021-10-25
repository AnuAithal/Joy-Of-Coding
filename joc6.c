#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter no. of rows and columns:");
    scanf("%d %d",&r,&c);
    int a[r][c],t[r][c];
    printf("Enter the elements\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Rotated matrix:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            t[i][j]=a[j][i];
        }
    }
    for(int i=r-1;i>=0;i--)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d\t",t[i][j]);
        }
        printf("\n");
    }
}
