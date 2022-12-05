#include<stdio.h>
#include<math.h>
int main()
{
    int n,sqr,r=0,i=0,t;
    scanf("%d",&n);
    t=n;
    sqr=n*n;
    while(n)
    {
        r+=((sqr%10)*pow(10,i));
        sqr/=10;
        n/=10;
        i++;
    }
    if(t==r)
    printf("Automorphic Number");
    else
    printf("Not an Automorphic Number");
}