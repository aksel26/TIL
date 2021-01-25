#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <stdio.h>
#include <stdlib.h>

#define MSGSZ 128

typedef struct msgbuf
{
    long mytype;
    char mtext[MSGSZ];

} message_buf;

int main(int argc, char const *argv[])
{
    int msgId;
    key_t key;
    message_buf sbuf;

    key = 1234;

    // if ((msgId = msgget(key, msgflag)) < 0)
    // {
    //     perrpr("msgget");
    //     exit(1);
    // }

    if (msgrcv(msgId, &sbuf, MSGSZ, 1, 0) < 0)
    {
        perror("msgrcv");
        exit(1);
    }

    printf("%s\n", sbuf.mtext);
    exit(0);

    return 0;
}
