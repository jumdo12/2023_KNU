#include <stdio.h>

typedef struct{
    int *data;
    int capacity;
    int top;
}StackType;

void push(StackType *s , int item){
    if(is_full(s)){
        s -> capacity = *= 2;
        s -> data = (int*)realloc(s -> data , sizeof(int) * s -> capacity);
    }
    s -> data[++s -> top] = item;
}