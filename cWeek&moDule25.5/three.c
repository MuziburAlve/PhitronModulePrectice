#include<stdio.h>
#include<string.h>
#include<math.h>
int main(void)
{
    char a[100];
    scanf("%s",a);
    int l=strlen(a);
    int frequance[27];
    for(int i=1; i<=26; i++)
    {
        frequance[i]=0;
    }
    for(int i=0; i<l; i++)
    {
        frequance[(a[i]-'a')+1]++;
    }
    int sum=0;
    for(int i=1; i<=26; i++)
    {
        if(frequance[i]>0)
        {
            while(frequance[i]!=0)
            {
                sum+=i;
                frequance[i]--;
            }
        }
    }
    int m=log2(sum);
    if(sum==pow(2,m))
    {
        printf("Yes\ncost=2^%d",m);
    }
    else
    {
        printf("No");
    }





}
