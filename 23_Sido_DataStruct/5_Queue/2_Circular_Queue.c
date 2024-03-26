#include <stdio.h>

typedef int element;
typedef struct{
    element data[MAX_QUEUE_SIZE];
    int front , rear;
}QueueType;

void init(QueueType *q){
    q -> front = q -> rear = 0;
}

void error(cosnt char *message)
{
    fprintf(stderr, message);
    exit(1);
}

int is_empty(QueueType *q){
    return q -> rear == q -> front;
}

int is_full(QueueType *q){
    return ((q -> rear + 1) % MAX_QUEUE_SIZE == q -> front);
}

void print_queue(QueueType *q){
    if(!is_empty(q)){
        int i = q -> front;
        do{
            i = (i + 1) % MAX_QUEUE_SIZE;
            printf("%d" , q -> data[i]);
            if(i == q -> rear)  break;
        }while(i != q -> front);
    }
    printf("\n");
}

void enqueue(QueueType *q , element item){
    if(is_full(q)){
        error("Queue-Overflow");
    }
    q -> rear = (q -> rear + 1) % MAX_QUEUE_SIZE;
    q -> data[q -> rear] = item;
}

element dequeue(QueueType *q){
    if(is_empty(q)){
        error("Queue-Underflow");
    }
    q -> front = (q -> front + 1) % MAX_QUEUE_SIZE;
    return q -> data[q -> front];
}