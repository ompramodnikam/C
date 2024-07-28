#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

// O_RDONLY     Read mode
// O_WRONLY     Write mode
// O_RDWR       Read + Write mode

int main()
{
    char Name[30];
    int fd = 0;

    printf("Enter name of file that you want to open : \n");
    scanf("%s",Name);

    fd = open(Name, O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File gets opened with FD %d\n",fd);
    }

    close(fd);

    return 0;
}