#include<stdio.h>
double avarage(int* a,int* b)
{
    double j=(double)(*a+*b)/2;
    return j;
}
int main(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    double j=avarage(&a,&b);
    printf("%.3lf",j);


}
