#include<stdio.h>
#include<math.h>
int main()
{
    int n,ne,d=0,temp,sum=0;
    scanf("%d",&n);
    ne=pow(n,2);
    temp==ne;
    while(ne!=0)
    {
        sum=ne%20;
        d+=sum;
        ne=ne/10;
    }
    if(d==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    return 0;
}