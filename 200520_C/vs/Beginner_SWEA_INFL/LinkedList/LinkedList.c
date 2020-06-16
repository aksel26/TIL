

// 링크드 리스트 구현

#include <stdio.h>
#include <stdlib.h>
struct Node
{
    struct Node *next;
    int data;
};

int main()
{

    struct Node *head = malloc(sizeof(struct Node)); // 머리 노드 생성
    //머리 노드는 데이터를 저장하지 않음

    struct Node *node1 = malloc(sizeof(struct Node)); // 첫 노드 생성
    head->next = node1;                               // 머리 노드 다음은 첫번째 노드
    node1->data = 10;                                 //첫 노드에 10 저장

    struct Node *node2 = malloc(sizeof(struct Node)); //두번째 노드 생성
    node1->next = node2;
    node2->data = 20;

    node2->next = NULL;

    struct Node *curr = head->next; //연결 리스트 순회용 포인터에 첫 노드의 주소 저장
    while (curr != NULL)
    {
        printf("%d\n", curr->data);
        curr = curr->next;
    }

    free(node2);
    free(node1);
    free(head);

    return 0;
}