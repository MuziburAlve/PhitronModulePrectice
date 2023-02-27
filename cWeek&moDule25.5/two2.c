#include<stdio.h>
#include<limits.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    int max=INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    int arrayy[max+1];
    for(int i=0; i<=max; i++)
    {
        arrayy[i]=0;
    }
    for(int i=0; i<n; i++)
    {
        arrayy[a[i]]+=1;
    }
    for(int i=0;i<=max;i++)
    {
        printf("%d-->%d\n",i,arrayy[i]);
    }

    return 0;

}
