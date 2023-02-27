#include<stdio.h>
void fuun(int a[],int n)
{
    int k,sum=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        k=a[i]%10;
        if(k==0)
        {
            sum+=a[i];
        }
    }
    printf("%d",sum);
}
int main(void)
{
    int n;
    scanf("%d",&n);
    int a[n];
    fuun(a,n);

}
