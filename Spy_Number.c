#include<stdio.h>
int main()
{
    int n,num,sum=0,mul=1,rem;
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        mul=mul*rem;
        n=n/10;
    }
    if(sum==mul)
    {
       printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
    return 0;
}