#include<stdio.h>
FILE* InputF;
FILE* OutputF;
void OnetoN(int n)
{
    if(n==0)
    {
        return;
    }
    else
    {
        OnetoN(n-1);
        fprintf(OutputF,"%d ",n);

    }
}
int main(void)
{
    InputF=fopen("input1.txt","r");
    OutputF=fopen("output1.txt","w");
    if(InputF==NULL)
    {
        fprintf(OutputF,"ERROR NO FILE FOUND\n");
        return 0;
    }
    int n;
    fscanf(InputF,"%d",&n);
    OnetoN(n);
    fclose(InputF);
    fclose(OutputF);
}
