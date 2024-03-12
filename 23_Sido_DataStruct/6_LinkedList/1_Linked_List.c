#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct ListNode{
    element data;
    struct ListNode *link;
}ListNode;

ListNode* insert_first(ListNOde head , element item){
    ListNode* temp = (ListNode*)malloc(sizeof(ListNode));
    temp -> data = item;
    temp -> link = head;
    head = temp;
    return head;
}

ListNode* insert(ListNode* head , ListNode* prev , element item){
    ListNode* temp = (ListNode*)malloc(sizeof(ListNode));
    temp -> data = item;
    temp -> link = prev -> link;
    prev -> link = temp;
    return head;
}

ListNode* delete_first(ListNode* head){
    ListNode* removed;
    if(head == NULL)    return NULL;
    removed = head;
    head = removed -> link;
    free(removed);
    return head;
}

ListNode* delete(ListNode* head , ListNode* prev){
    ListNode* removed;
    removed = prev -> link;
    prev -> link = removed -> link;
    free(removed);
    return head;
}

void print_list(ListNode* head){
    for(ListNode *p = head; p != NULL; p = p -> link){
        printf("%d => " , p -> data);
    }
    printf("NULL");
}

ListNode* List_CAT(ListNode *list1 , ListNode *list2){
    ListNode *p;
    if(list1 == NULL)   return list2;
    else if(list2 == NULL)  return list1;

    p = list1;
    while(p ->link != NULL){
        p = p -> link;
    }
    p -> link = list2;
    return list1;
}

ListNode* search(ListNode* head , element item){
    ListNode *p = head;
    while(p != NULL){
        if(p -> data == item){
            return p;
        }
        p = p -> link;
    }
    return NULL;
}

ListNode* reverse(ListNode *head){
    ListNode *p , *q , *r;
    p = head;
    q = NULL;
    while(p != NULL){
        r = q;
        q = p;
        p = p -> link;
        q -> link = r;
    }
    return q;
}

int main(){
    ListNode *head = NULL;
    for(int i=0; i<3; i++){
        head = insert_first(head , i);
    }
    for(int i=0; i<3; i++){
        head = delete_first(head);
    }

    element data;
    strcpy(data.name , "APPLE");
    head = insert(head , data);

    return 0;
}