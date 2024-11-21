//Q3.Write a program which accept distance in kilometer and convert it into meter.(1 kilometer = 1000 meter)

#include<stdio.h>

double KMToMeter(float fKM)
{
    return (fKM*1000);

}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter a value in KM : ");
    scanf("%f",&fValue);

    dRet = KMToMeter(fValue);
    printf("%lf Km in meters is %lf ",fValue,dRet);

    return 0;

}
