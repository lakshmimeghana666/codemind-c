#include<stdio.h>
int main()
{
    int a,b,i,s,n;
    scanf("%d%d",&a,&b);
    for(i=a+1;i<b;i++)
    {
        s=i*i;
        n=i*i*i;
        printf("%d %d %d
",i,s,n);
    }
}