#include<stdio.h>
int The_sum_of_last_digit(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        int x;
        scanf("%d",&x);
        return(x%10)+The_sum_of_last_digit(n-1);
    }
}
int main(void)
{
    int n;
    scanf("%d",&n);
    int sum=The_sum_of_last_digit(n);
    printf("%d\n",sum);
    return 0;
}
