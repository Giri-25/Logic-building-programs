#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>

int CountCapital(char FName [])
{
    int fd = 0;
    int iCount = 0, rd = 0;
    char Buffer[1000] = {'\0'};

    fd = open(FName,O_RDWR);

    while(rd = read(fd,Buffer,sizeof(Buffer)) != 0)
    {
        for(int i = 0; i < rd; i++)
        {
            if(Buffer[i] >= 'A' && Buffer[i] <= 'Z')
            {
                iCount++;
            }
        }
    }
    return iCount;

}

int main()
{
    char FileName[50];
    int iRet = 0;

    printf("Enter file name : \n");
    scanf("%s",FileName);
   
    iRet = CountCapital(FileName);

    printf("Count of capital characters : %d",iRet);

    return 0;
}