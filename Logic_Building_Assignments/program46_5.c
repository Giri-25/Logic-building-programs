#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main() {
    char filename[50];
    char str[100];
    int fd;

    printf("Enter the filename to append: ");
    scanf("%s", filename);

    fd = open(filename, O_WRONLY | O_APPEND);
    
    if (fd == -1) 
    {
        printf("Error opening file");
    }

    printf("Enter a string to append: ");
    scanf(" %[^'\n']s",str);

    write(fd, str, strlen(str));

    close(fd);

    return 0;
}
