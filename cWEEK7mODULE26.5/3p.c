#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int* j=&a;
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(j+i));
    }
}
