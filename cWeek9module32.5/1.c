#include<stdio.h>
int power(int n,int m)
{
    if(m==0)
    {
        return 1;
    }
    return n*power(n,m-1);
}
int main(void)
{
    int m,n;
    scanf("%d %d",&n,&m);
    int j=power(n,m);
    printf("%d\n",j);
    return 0;
}
