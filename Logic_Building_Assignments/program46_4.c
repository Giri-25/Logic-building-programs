#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int fd = 0;
    char FileName[50];
    char Buffer[10] = {'\0'};
    int iRet = 0;
    int i = 0, isum = 0;

    printf("Enter file name : \n");
    scanf("%s",FileName);

    fd = open(FileName,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }

    while(iRet = read(fd,Buffer,sizeof(Buffer)) != 0)
    {
        isum = isum + iRet;
        memset(Buffer,0,sizeof(Buffer));
    }
    
    printf("Size of file in bytes : %d\n",isum);

    close(fd);

    return 0;
}