#include<stdio.h>
int sum(int* a,int* b,int* c)
{
    int suum=*a+*b+*c;
    return suum;
}
int main(void)
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int j=sum(&a,&b,&c);
    int* p=&j;
    int**q=&p;
    printf("%d",**q);


}
