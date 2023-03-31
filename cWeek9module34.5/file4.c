#include<stdio.h>
int main(void)
{
    FILE* Input=fopen("input3.txt","r");
    FILE* Output=fopen("output3.txt","w");
    if(Input==NULL)
    {
        fprintf(Output,"ERROR NO FILE FOUND\n");
    }
    int t,sum=0;
    fscanf(Input,"%d",&t);
    while(t--)
    {
        int n;
        fscanf(Input,"%d",&n);
        int k=n%10;
        sum+=k;
    }
    fprintf(Output,"Sum=%d",sum);
    fclose(Input);
    fclose(Output);
}
