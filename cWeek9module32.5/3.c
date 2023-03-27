#include<stdio.h>
void funtion(int n)
{
    if(n>0)
    {
        funtion(n-1);
        printf("%d ",n);
    }
}
int main(void)
{
    int n;
    scanf("%d",&n);
    funtion(n);
}
