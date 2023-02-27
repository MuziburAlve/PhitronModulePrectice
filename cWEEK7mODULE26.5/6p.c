#include<stdio.h>
int main(void)
{
    char a[10000];
    scanf("%s",a);
    int k;
    for(int i=0;a[i]!='\0';i++)
    {
        k=a[i];
        if(k%2==0)
        {
            a[i]-=32;
        }

    }
    printf("%s",a);
}
