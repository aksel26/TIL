#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MSGSZ 128

typedef struct msgbuf
{
    long mytype;
    char mtext[MSGSZ];
} message_buf;

int main(int argc, char const *argv[])
{
    int msgId;
    int msgflag = IPC_CREAT | 0666;
    key_t key;
    message_buf sbuf;
    size_t buf_length;

    key = 1234;

    if ((msgId = msgget(key, msgflag)) < 0)
    {
        perror("msgget");
        exit(1);
    }

    sbuf.mytype = 1;

    (void)fprintf(stderr, "msgget : msgget succeeded: msgid = %d\n", msgId);

    (void)strcpy(sbuf.mtext, "Did you get this?");

    (void)fprintf(stderr, "msggget : msgget succeededd : msgid = %d\n", msgId);

    buf_length = strlen(sbuf.mtext) + 1;

    if (msgsnd(msgId, &sbuf, buf_length, IPC_NOWAIT) < 0)
    {
        printf("%d, %ld, %s, %zu \n", msgId, sbuf.mytype, sbuf.mtext, buf_length);

        perror("msgsnd");
        exit(1);
    }
    else
    {
        printf("Message : \"%s\" Send\n", sbuf.mtext);
    }

    exit(0);

    return 0;
}
