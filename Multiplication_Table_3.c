#include<stdio.h>
int main()
{
    int a,b,c,s,i;
    scanf("%d%d%d",&a,&b,&c);
    for(i=b;i<=c;i++)
    {
        s=a*i;
    printf("%d x %d = %d
",a,i,s);
    }
}