#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 100
typedef int element;
typedef struct{
    element data[MAX_STACK_SIZE];
    int top;
}StackType;

void init(StackType* s){
    s -> top = -1;
}

void error(cosnt char* message){
    fprintf(stderr , message);
    exit(1);
}

int is_empty(StackType *s){
    return s -> top == -1;
}

int is_full(Stacktype *s){
    return s -> top == MAX_STACK_SIZE - 1;
}

void push(StackType *s , element item){
    if(is_full(s)){
        error("Stack-Overflow");
    }
    s -> data[++s -> top] = item;
}

element pop(StackType *s){
    if(is_empty(s)){
        error("Stack-Underflow");
    }
    return s -> data[(s->top)--];
}

int main(){
    StackType *s = (StackType*)malloc(sizeof(StackType));
    init(s);
    for(int i=0; i<5; i++){
        push(s , i);
    }
    for(int i=0; i<5; i++){
        pop(s);
    }
    free(s);
    return 0;
}
