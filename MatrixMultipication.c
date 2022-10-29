#include<stdio.h>
#define MAX 50
int main()
{
    int a,b,c,d,i,j,k,l,sum;
    
   
    int mat1[MAX][MAX];
    int mat2[MAX][MAX];
    int result[MAX][MAX];
/*Enter 1st Matrix*/
    printf("Enter the row and colum of matrix A=");
    scanf("%d %d",&a,&b);
    
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    /*print 1st Matrix*/
    for(k=0;k<a;k++)
    {
        for(l=0;l<b;l++)
        {
            printf(" %d",mat1[k][l]);
        }
        printf("\n");
    }
    /*Enter 2nd Matrix*/
    printf("Enter Rows and Colums of B matrix");
    scanf("%d%d",&c,&d);
    for(i=0;i<c;i++)
    {
        for(j=0;j<d;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    /*Print 2nd Matrix*/
    printf("B matrix \n");
    for(k=0;k<c;k++)
    {
        for(l=0;l<d;l++)
        {
            printf(" %d",mat2[k][l]);
        }
        printf("\n");
    }
    /*   R    E   S   U   L   T 

          M   A   T   R   I  C   S    */
    if(a!=d)
    printf("Sorry Multification not possiable");
    else
 {
    printf("Result Matrix is\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
        for(k=0;k<b;k++)
        {
         sum=sum+mat1[i][k]*mat2[k][j];
        }
        result[i][j]=sum;
        printf(" %d",result[i][j]);
        sum=0;
        }
        printf("\n");
        
    }
 }

return 0;
}