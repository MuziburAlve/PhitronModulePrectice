#include<stdio.h>
int main(void)
{
    FILE* InputFi=fopen("input2.txt","r");
    FILE* OutputFi=fopen("output2.txt","w");
    if(InputFi==NULL)
    {
        fprintf(OutputFi,"ERRoR No File Found\n");
        return 0;
    }
    int t;
    fscanf(InputFi,"%d",&t);
    while(t--)
    {
        int n;
        fscanf(InputFi,"%d",&n);
        if(n>0)
        {
            for(int i=n; i>=n*(-1); i--)
            {
                fprintf(OutputFi,"%d ",i);
            }
            fprintf(OutputFi,"\n");

        }
        else if(n<0)
        {
            for(int i=n; i<=n*(-1); i++)
            {
                fprintf(OutputFi,"%d ",i);
            }
             fprintf(OutputFi,"\n");
        }
        else
        {
             fprintf(OutputFi,"0\n");
        }


    }
    fclose(InputFi);
    fclose(OutputFi);
}
