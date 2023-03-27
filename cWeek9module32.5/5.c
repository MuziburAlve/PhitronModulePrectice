#include<stdio.h>
int funntion(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n+funntion(n-1);
}
int main(void)
{
    int n;
    scanf("%d",&n);
    int sum=funntion(n);
    printf("%d\n",sum);
    return 0;
}
