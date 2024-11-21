//Q2.Write a program which accepts width and height of rectangle from user and  calculate its area.(Area = Width * Height)

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    return (fWidth*fHeight);
}
int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter Width : ");
    scanf("%f",&fValue1);

    printf("Enter Height : ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("The Area of rectangle is %lf",dRet);

    return 0;

}
