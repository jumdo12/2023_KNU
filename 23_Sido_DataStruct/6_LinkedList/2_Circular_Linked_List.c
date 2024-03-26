#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct ListNode{
    element data;
    struct ListNode *link;
}ListNode;

ListNode* insert_first(ListNode* head , element item){
    ListNode* temp = (ListNode*)malloc(sizeof(ListNode));
    temp -> data = item;
    if(head == NULL){
        head = temp;
        head -> link = head;
    }
    else{
        temp -> link = head -> link;
        head -> link = temp;
    }
    return head;
}

ListNode* insert_last(ListNode* head , element item){
    ListNode *temp = (ListNode*)malloc(sizoef(ListNode));
    temp -> data = item;
    if(head == NULL){
        head = temp;
        head -> link = head;
    }
    else{
        temp -> link = head -> link;
        head -> link = temp;
        head = temp;
    }
    return head;
}

void print_list(ListNode *head){
    ListNode *p = head;
    do{
        p = p -> link;
        printf("%d" , p -> element);
    }while(p != head);
}

int main(){
    return 0;
}