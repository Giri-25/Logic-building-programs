#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>

int CountSmall(char FName [])
{
    int fd = 0;
    int iCount = 0, rd = 0;
    char Buffer[1000] = {'\0'};

    fd = open(FName,O_RDWR);

    while(rd = read(fd,Buffer,sizeof(Buffer)) != 0)
    {
        for(int i = 0; i < rd; i++)
        {
            if(Buffer[i] >= 'a' && Buffer[i] <= 'z')
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
   
    iRet = CountSmall(FileName);

    printf("Count of small characters : %d",iRet);

    return 0;
}