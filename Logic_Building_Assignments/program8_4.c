//Q4.Write a program which accept temperature in fahrenheit and convert it into celsius.(1 Celcius = (Fahrenheit - 32)*(5/9))

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double iCtemp=((fTemp*5-32*5)/9);
    return iCtemp;

}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temp in Fahrenheit : ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("The Temp in celsius is %lf",dRet);

    return 0;
}