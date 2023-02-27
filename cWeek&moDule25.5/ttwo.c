#include<stdio.h>
#include<limits.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    int sorted_array[n];
    int min,id;
    for(int i=0;i<n;i++)
    {
         min=a[0];
         id=0;
        for(int j=0;j<n;j++)
        {
            if(a[j]<min)
            {
                min=a[j];
                id=j;
            }
        }
        sorted_array[i]=min;
        a[id]=INT_MAX;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",sorted_array[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        if(i==(k-1))
        {
            printf("s->%d",sorted_array[i]);
        }
        if(i==(n-k))
        {
            printf("l->%d",sorted_array[i]);
        }
    }

}
