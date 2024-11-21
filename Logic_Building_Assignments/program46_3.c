#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int fd = 0;
    char FileName[50];
    char Buffer[100] = {'\0'};
    int iRet = 0;

    printf("Enter file name : \n");
    scanf("%s",FileName);

    fd = open(FileName,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }

    printf("Contents of file : \n");
    while(iRet = read(fd,Buffer,sizeof(Buffer)) != 0)
    {
        printf("%s",Buffer);
    }

    close(fd);

    return 0;
}