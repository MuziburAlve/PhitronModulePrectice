#include<stdio.h>
int main(void)
{
    FILE* INPUT=fopen("input5.txt","r");
    FILE* OUTPUT=fopen("output5.txt","a");
    if(INPUT==NULL)
    {
        fprintf(OUTPUT,"ERROR FILE NOT FOUND\n");
        return 0;
    }
    int year;
    fscanf(INPUT,"%d",&year);
    if((year%100!=0&&year%4==0)||year%400==0)
    {
        fprintf(OUTPUT,"%d-->YES\n",year);
    }
    else
    {
        fprintf(OUTPUT,"%d-->NO\n",year);
    }
    return 0;
}
