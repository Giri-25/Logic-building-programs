#include<stdio.h>
#include<stdbool.h>

int WordCount(char *str)
{
    int iCnt = 0;
    bool inword = false;

    if(str == NULL)
    {
        return -1;
    } 

    while((*str != '\0'))
    {
        if((*str == ' ') || (*str == '\t'))
        {
            inword = false;
        }
        else if(!inword)
        {
            iCnt++;
            inword = true;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[50] = "Marvellous Multi OS";
    int iRet = 0;

    iRet = WordCount(Arr);

    printf("The word count is : %d\n",iRet);

    return 0;
}