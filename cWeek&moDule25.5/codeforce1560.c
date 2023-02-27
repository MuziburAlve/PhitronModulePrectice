#include<stdio.h>
int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a;
        scanf("%d",&a);
        int i=0;
        int j=1;
        int ans;
        while(i!=a)
        {
            if(j%3!=0 && j%10!=3)
            {
                ans=j;
                j++;

            }
            else
            {
                j++;
                continue;
            }
            i++;
        }
        printf("%d\n",ans);
    }
}
