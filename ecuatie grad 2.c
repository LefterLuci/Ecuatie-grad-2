#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,delta,x1,x2;

printf("Introduceti a:\n");
scanf("%f",&a);

printf("Introduceti b:\n");
scanf("%f",&b);

printf("Introduceti c:\n");
scanf("%f",&c);

if(a!=0)
{
    delta = (b*b)-(4*a*c);
    printf("delta este %f\n",delta);

if(delta<0)
{
    printf("Nu are solutie in multimea nr reale");


}
else if(delta>0)
{
    x1 =((-b)+sqrt(delta))/(2*a);

    printf("X1 este: %f\n",x1);

    x2 =((-b)-sqrt(delta))/(2*a);

    printf("x2 este: %f\n",x2);
}
else
{
    x1=-b/(2*a);
}
}
else
{
printf("you ar geh");
}

    return 0;