//노드 추가

#include <stdio.h>
#include <stdlib.h>
struct Node
{
    struct Node *next;
    int data;
};



//기준 노드 뒤에 노드를 추가하는 함수
void addFirst(struct Node* target, int data){
    struct Node* newNode = malloc(sizeof(struct Node)); //새 노드 생성
    newNode -> next = target->next; // 새 노드의 다음 노드에 기준 노드의 다음 노들르 지정
    newNode -> data = data; // 데이터 저장
    target -> next = newNode;   // 기준 노드의 다음 노드에 새 노드를 지정
}

int main()
{

    struct Node *head = malloc(sizeof(struct Node)); // 머리 노드 생성
    //머리 노드는 데이터를 저장하지 않음

    head -> next = NULL;

    addFirst(head,10);  // 머리 노드 뒤에 새 노드 추가
    addFirst(head,20);  // 머리 노드 뒤에 새 노드 추가
    addFirst(head,30);  // 머리 노드 뒤에 새 노드 추가

    struct Node *curr = head -> next; // 연결 리스트 순회용 포인터에 첫 번째 노드의 주소 저장

    while (curr!= NULL) 
    {
        printf("%d\n", curr->data);
        curr= curr->next; //포인터에 다음 노드의 주소 저장

    }

    curr = head -> next;    // 연결 리스트 순회용 포인터에 첫 번째 노드의 주소 저장
    while (curr!=NULL)  
    {
        struct Node *next = curr->next;
        free(curr);
        curr = next;
    }

    free(head);
    
    

    return 0;
}