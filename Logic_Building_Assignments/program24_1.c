#include<stdio.h>

void DisplayASCII()
{   
    int iCnt = 0;
    printf("ASCII table\n");
    printf("Decimal\tHexadecimal\tOctal\tCharacter\n");
    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
    printf("%d\t%X\t\t%o\t\t%c\n",iCnt,iCnt,iCnt,iCnt);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}