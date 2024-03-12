#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct QueueNode{
    element data;
    struct QueueNode *link;
}QueueNode;
typedef struct{
    QueueNode *front , *rear;
}QueueType;

void enqueue(QueueType *q, element item){
    QueueNode *temp = (QueueNode*)malloc(sizeof(QueueNode));
    temp -> data = item;
    temp -> link = NULL;
    if(is_empty(q)){
        q -> front = temp;
        q -> rear= temp;
    }
    else{
        q -> rear -> link = temp;
        q -> rear = temp;
    }
}

element dequeue(QueueType *q){
    QueueNode *temp;
    element data;
    if(is_empty(q)){
        fprintf(stderr , "Queue-Underflow");
        exit(1);
    }
    temp = q -> front;
    data = temp -> data;
    if(q -> front == NULL){
        q -> rear = NULL;
    }
    free(temp);
    return data;
}