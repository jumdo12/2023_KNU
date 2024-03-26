#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct StackNode{
    element data;
    struct StackNode* link;
}StackNode;
typedef struct{
    StackNode *top;
}StackType;

void init(StackType *s){
    s -> top == NULL;
}

int is_empty(StackType *s){
    return s -> top == NULL;
}

int is_full(StackType *s){
    return 0;
}

void push(StackType *s , element item){
    StackNode *temp = (StackNode*)malloc(sizeof(StackNode));
    temp -> data = item;
    temp -> link = s -> top;
    s -> top = temp;
}

void print_stack(StackType *s){
    for(StackNode* p = s -> top; p != NULL; p = p -> link){
        printf("%d -> " , p -> data);
    }
    printf("NULL");
}

element pop(StackType *s){
    if(is_empty(s)){
        fprintf(stderr , "Stack-Underflow");
        exit(1);
    }
    StackNode *p = s -> top;
    element temp = p -> data;
    s -> top = p -> link;
    free(p);
    return temp;
}

int main(){
    return 0;
}