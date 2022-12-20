#include<stdio.h>
int main()
{
    int x,a,b,z;
    scanf("%d%d%d",&x,&a,&b);
    z=1*a+2*b;
    if(z>=x)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}