#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,c,a[10][10],b[10][10],mul[10][10],i,j,k;
    system ("cls");
    // User inputs the Number of Rows And Columns
    printf("Enter the number of row=");
    scanf("%d",&r);
    printf("Enter the number of column=");
    scanf("%d",&c);
    printf("Enter the first matrix element=\n");
    for(i=0;i<r;i++)
    {
     for(j=0;j<c;j++)
     {
        scanf("%d",&a[i][j]);
    }
}
printf("Enter the second matrix element=\n");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
{

scanf("%d",&b[i][j]);
}
}
printf("multiply of the matrix=\n");
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        mul[i][j]=0;
        for(k=0;k<c;k++)
        {
        mul[i][j]+=a[i][k]*b[k][j];
        }
    }
}
//for printing result
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        printf("%d\t",mul[i][j]);
    }
    printf("\n");
}
return 0;
}
