#include<stdio.h>
int main(void)
{
    FILE* In=fopen("input4.txt","r");
    FILE* Out=fopen("output4.txt","w");
    int n;
    fscanf(In,"%d",&n);
    int f=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=f-1;j>=0;j--)
        {
            fprintf(Out," ");
        }
        for(int k=1;k<=n;k++)
        {
            fprintf(Out,"#");
        }
        f--;
        fprintf(Out,"\n");
    }
    fclose(In);
    fclose(Out);
}
