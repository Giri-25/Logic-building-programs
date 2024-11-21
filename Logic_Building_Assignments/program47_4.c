#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>

int CountChar(char FName [], char ch)
{
    int fd = 0;
    int ifreq = 0, rd = 0;
    char Buffer[1000] = {'\0'};

    fd = open(FName,O_RDWR);

    while(rd = read(fd,Buffer,sizeof(Buffer)) != 0)
    {
        for(int i = 0; i < rd; i++)
        {
            if(Buffer[i] == ch)
            {
                ifreq++;
            }
        }
    }
    return ifreq;

}

int main()
{
    char FileName[50];
    int iRet = 0;
    char cValue;

    printf("Enter file name : \n");
    scanf("%s",FileName);

    printf("Enter character : \n");
    scanf(" %c",&cValue);    
   
    iRet = CountChar(FileName,cValue);

    printf("Frequency of %c : %d",cValue,iRet);

    return 0;
}