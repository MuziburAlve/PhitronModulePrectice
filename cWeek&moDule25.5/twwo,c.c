#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int input[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&input[i]);
    }

    int largest=input[0];
    for(i=1;i<n;i++)
    {
        if(largest<input[i])
        {
            largest=input[i];
        }
    }
    int arrayy[largest+1];
    for(i=0;i<=largest;i++)
    {
        arrayy[i]=0;
    }
    for(i=0;i<n;i++)
    {
        arrayy[input[i]]+=1;
    }
    int cpt=0;
    int k;
    scanf("%d",&k);
    for(i=0;i<=largest;i++)
    {
        if(arrayy[i]>0)
        {
            cpt++;
        }
        if(cpt==k)
        {
            printf("the %d rd  smallest value is %d",k,i);
            break;
        }
    }
    int j=0;
    for(i=largest;i>=0;i++)
    {
        if(arrayy[i]>0)
        {
            j++;
        }
        if(j==k)
        {
            printf("the %d rd  largest value is %d",k,i);
            break;
        }
    }
    return 0;

}
