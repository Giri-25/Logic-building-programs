#include<stdio.h>

float DisplaySchedule(char chDiv)
{
    if(chDiv == 'A')
    {
        return 9.20f;
    }
    if(chDiv == 'B')
    {
        return 8.30f;
    }
    if(chDiv == 'C')
    {
        return 9.20f;
    }
    if(chDiv == 'D')
    {
        return 10.30f;
    }

}

int main()
{
    char cValue = '\0';
    float fRet = 0.0f;

    printf("Enter your division : \n");
    scanf("%c",&cValue);

    fRet=DisplaySchedule(cValue);

    printf("Your exam at %f AM\n",fRet);

    return 0;

}