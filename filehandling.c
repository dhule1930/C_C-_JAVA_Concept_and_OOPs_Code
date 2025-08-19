#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>


int main()
{
    int fd =0;

    fd = creat("marvellous.txt", 0777);

    if(fd != -1)
    {
        printf("file is successfully created with file descriptor %d\n", fd);
    }

    return 0;
}