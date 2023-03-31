#include<stdio.h>
int main(void)
{
    FILE* InputFile=fopen("input.txt","r");
    FILE* OutputFile=fopen("output.txt","w");
    if(InputFile==NULL)
    {
        fprintf(OutputFile,"ERROR NO FILL FOUND\n");
        return 0;
    }

    int a;
    while(fscanf(InputFile,"%d",&a)==1)
    {
        fprintf(OutputFile,"%d ",a);
    }
    fclose(InputFile);
    fclose(OutputFile);
    return 0;
}
