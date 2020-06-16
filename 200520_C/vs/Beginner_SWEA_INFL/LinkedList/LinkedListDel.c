#include <stdio.h>
#include <stdlib.h>

struct Node{
    struct Node* next;
    int data;
};



void addFirst(struct Node* target, int data){
    struct Node* newNode = malloc(sizeof(struct Node));

    newNode -> next = target->next;
    newNode-> data = data;
    target->next = newNode;
}

void removeFirst(struct Node* target){
    struct Node* removeNode = target->next;
    target->next = removeNode -> next;

    free(removeNode);
}

int main(){

    struct Node *head = malloc(sizeof(struct Node));

    head -> next = NULL;

    
    addFirst(head,10);
    addFirst(head,20);
    addFirst(head,30);

    removeFirst(head);


    struct Node* curr = head -> next;
    while(curr!=NULL){
        printf("%d\n", curr->data);
        curr= curr->next;

    }

    curr = head->next;
    while(curr!=NULL){
        struct Node* next = curr->next;
        free(curr);
        curr= next;
    }

    free(head);




    return 0;
}