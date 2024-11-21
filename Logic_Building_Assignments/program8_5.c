//Q5.Write a program which accept area in square feet and convert it into square meter.(i Square feet = 0.0929 Square meter)

#include<stdio.h>

double SquareMeter(int iValue)
{
    return (0.0929*iValue);

}
int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);
     printf("The Value in Square Meter is %lf",dRet);

     return 0;
}