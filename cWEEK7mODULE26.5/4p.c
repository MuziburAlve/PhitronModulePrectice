#include<stdio.h>
#include<math.h>
double the_area_of_circal(double r)
{
    double area=(3.1416)*pow(r,2);
    return area;

}
int main(void)
{
    double r;
    scanf("%lf",&r);
    double j=the_area_of_circal(r);
    printf("%0.6lf\n",j);
    return 0;

}
