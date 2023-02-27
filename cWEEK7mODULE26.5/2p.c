#include<stdio.h>
void bubule_sort(int* a,int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<(n-1); j++)
        {
            if(*(a+j)>*(a+(j+1)))
            {
                int temp=*(a+j);
                *(a+j)=*(a+(j+1));
                *(a+(j+1))=temp;
            }

        }
    }
}
int main(void)
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    bubule_sort(&a,n);
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}
