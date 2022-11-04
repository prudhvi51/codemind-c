#include<stdio.h>
int main()
{
    int n,b;
    scanf("%d",&n);
    while(n)
    {
        b=n%10;
        n=n/10;
        printf("%d",b);
    }
    return 0;
}