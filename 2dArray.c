#include<stdio.h>
int main()
{  
     int i,j,l,rsum=0,csum=0,k;
   
    int arr[5][5];
    int total[2][5];
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&arr[j][i]);
            rsum=rsum+arr[j][i];
        }
        total[0][i]=rsum;
        rsum=0;
        
    
    }
    
    
    
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            csum=csum+arr[i][j];
        }
       total[1][i]=csum;
       csum=0;
    }
    printf("rowsum=");
    for(k=0;k<5;k++)
    {
     printf(" %d",total[0][k]);
    }
    printf("\ncolumSum=");
    for(k=0;k<5;k++)
    {
    printf(" %d",total[1][k]);
    }
    
   return 0; 
}