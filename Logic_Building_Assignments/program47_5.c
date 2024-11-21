#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>

void DisplayN(char FName [], int iSize)
{
    int fd = 0;
    int i = 0, ReadSize = 0;
    char Buffer[10] = {'\0'};

    fd = open(FName,O_RDONLY);

    while(iSize > 0 && (ReadSize = read(fd, Buffer, (iSize < sizeof(Buffer) ? iSize : sizeof(Buffer)))) > 0)
    {        
        for( i = 0; i < ReadSize; i++)
        {
            printf("%c",Buffer[i]);
        }
        memset(Buffer,0,sizeof(Buffer));
        iSize = iSize - ReadSize;
    }

    close(fd);
}

int main()
{
    char FileName[50];
    int iValue = 0;

    printf("Enter file name : \n");
    scanf("%s",FileName);

    printf("Enter the number character : \n");
    scanf("%d",&iValue);    
   
    DisplayN(FileName,iValue);

    return 0;
}