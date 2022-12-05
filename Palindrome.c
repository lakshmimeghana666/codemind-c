#include<stdio.h>
int main()
{
    int n,r,q,s=0,t;
    scanf("%d",&n);
    t=n;
    while(n)
    {
        r=n%10;
        n=n/10;
        s=s*10+r;
    }
    if(s==t)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}