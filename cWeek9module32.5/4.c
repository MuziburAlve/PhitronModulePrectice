#include<stdio.h>
void funtion(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        funtion(n-1);
    }
}
int main(void)
{
    int n;
    scanf("%d",&n);
    funtion(n);
}
