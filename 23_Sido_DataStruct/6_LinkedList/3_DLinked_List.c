#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct ListNode{
    element data;
    struct ListNode *left , *right;
}ListNode;

void insert(ListNode *before , element data){
    ListNode* node = (ListNode*)malloc(sizoef(ListNode));
    strcpy(node->data , data);
    node -> right = before -> right;
    node -> left = before;
    before -> right -> left = node;
    before -> right = node;
}

void delete(ListNode *head , ListNode *removed){
    if(removed == head) return;
    removed -> left -> right = removed -> right;
    removed -> right -> left = removed -> left;
    free(removed);
}

void init(ListNode *phead){
    phead -> right = phead;
    phead -> leeft = phead;
}

void print_list(ListNode *phead){
    ListNode *p = phead;
    do{
        p = p -> right;
        printf("%d -> ", p -> data);
    }while(p != phead);
}

int main(){
    ListNode* head = (ListNode*)malloc(sizeof(ListNode));
    init(head);
    for(int i=0; i<3; i++){
        insert(head , i);
    }
    for(int i=0; i<3; i++){
        delete(head , head -> right);
    }
    free(head);
    return 0;
}