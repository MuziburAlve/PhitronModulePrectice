#include<stdio.h>
int sum_funtion(int n)
{
    int sum=0;
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n+sum_funtion(n-1);
    }

}
int main(void)
{
    int n;
    scanf("%d",&n);
    int j=sum_funtion(n);
    printf("%d\n",j);

}
