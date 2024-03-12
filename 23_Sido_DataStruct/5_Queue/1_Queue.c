#include <stdio.h>

typedef int element;
typedef struct{
    element data[MAX_QUEUE_SIZE];
    int front , rear;
}QueueType;

void init(QueueType *q){
    q -> front = q -> rear = -1;
}

void error(cosnt char *message)
{
    fprintf(stderr, message);
    exit(1);
}

void print_queue(QueueType *q){
    for(int i=0; i<MAX_QUEUE_SIZE; i++){
        if(i > q -> front && i <= q -> rear){
            printf("%d " , q -> data[i]);
        }
    }
}

int is_empty(QueueType *q){
    return q -> front == q -> rear;
}

int is_full(QueueType *q){
    return q -> rear == MAX_QUEUE_SIZE - 1;
}

void enqueue(QueueType *q , element item){
    if(is_full(q)){
        error("Queue-Overflow");
    }
    q -> data[++(q -> rear)] = item;
}

element dequeue(QueueType *q){
    if(is_empty(q)){
        error("Queue-Underflow");
    }
    return q -> data[++(q ->front)];
}

int main(){
    QueueType q;
    init(&q);
    for(int i=0; i<3; i++){
        enqueue(&q , i);
    }
    for(int i=0; i<3; i++){
        dequeue(&q);
    }
    return 0;
}