#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int main()
{

    typedef struct member
    {
        int id;
        char name[20];
        struct member* next;

    } MTYPE;

    MTYPE* HEAD,* temp,* lptemp;

    HEAD = NULL; //연결리스트 초기화

    while (1)
    {
        temp = (MTYPE*) malloc(sizeof(MTYPE));
        if (temp == NULL)
        {
            printf("메모리할당 실패\n");
            return 1;
        }
        printf("ID : ");
        scanf("%d%*c", &temp->id);
        if (temp->id == -1)
        {
            break;
        }
        printf("이름 : ");
        gets(temp->name);
        temp->next=HEAD; // 새 노드를 연결리스트에 연결
        HEAD=temp;  // HEAD 연결리스트의 가장 최신 노드를 가리킴
    }

        free(temp);     //새로 할당받았던 메모리 해제
        temp=HEAD;    //temp 연결리스트에 가장 최신의 노드를 가리킴
        while (temp)
        {
            printf("id = %d, name = %s\n", temp->id, temp->name);
            temp = temp->next;
        }

        // 동적할당 메모리 반납
        temp = HEAD;
        while (temp)
        {   
            // lptemp를 사용하는 이유 ?
            // temp가 가리키는 메모리를 반납하면 그안의 멤버는 사용불가하므로 
            // free함수 이전에 변수를 저장해야하기 때문.
            lptemp = temp->next;
            free(temp);
            temp = lptemp;
        }
    
    return 0;

}