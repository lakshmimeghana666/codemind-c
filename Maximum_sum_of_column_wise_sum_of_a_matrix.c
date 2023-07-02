#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m],i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int sum=0;
    
        for(j=0;j<n;j++)
        {
          sum=sum+a[j][0]; 
        }
    int k=sum;
    for(i=1;i<m;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            sum=sum+a[j][i];
        }
        if(k<=sum)
        {
            k=sum;
        }
    }
    printf("%d",k);
    return 0;
    
}