#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>

char *message = "Do u see this msg ?";

int main(int argc, char const *argv[])
{
    char buf[1024];
    int fd[2];
    pipe(fd);

    if (fork() != 0)
    {
        write(fd[1], message, strlen(message) + 1);
    }
    else
    {
        read(fd[0], buf, 1024);
        printf("Got this from Parent! : &s\n", buf);
    }
    return 0;
}
