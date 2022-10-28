#include<stdio.h>
int main()
{
    int r1,r2,res,i;
    scanf("%d%d",&r1,&r2);
    for(i=1;i<=r2;i++)
    {
        if(i%2)
        {
            res=r1*i;
            printf("%d x %d = %d
",r1,i,res);
        }
    }
}
