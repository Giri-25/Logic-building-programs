#include<stdio.h>

int WordCount(char *str)
{
    int iMax = 0;
    int iCount = 0;
    
    if(str == NULL)
    {
        return -1;
    } 

    while((*str != '\0'))
    {
        if((*str != ' '))
        {
            str++;
            iCount++;
            if(iCount > iMax)
            {
                iMax = iCount;
            }
            continue;
        }
        else 
        {
            iCount = 0;
            str++;
        }
    }
    return iMax;
}

int main()
{
    char Arr[50] = "   Marvellous      Multi OS";
    int iRet = 0;

    iRet = WordCount(Arr);

    printf("Length of largest word : %d\n",iRet);

    return 0;
}