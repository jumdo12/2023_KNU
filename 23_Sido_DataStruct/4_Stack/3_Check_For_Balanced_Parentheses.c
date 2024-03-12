#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STACK_SIZE 100
typedef char element;
typedef struct
{
    element data[MAX_STACK_SIZE];
    int top;
} StackType;

void init(StackType *s)
{
    s->top = -1;
}

void error(cosnt char *message)
{
    fprintf(stderr, message);
    exit(1);
}

int is_empty(StackType *s)
{
    return s->top == -1;
}

int is_full(Stacktype *s)
{
    return s->top == MAX_STACK_SIZE - 1;
}

void push(StackType *s, element item)
{
    if (is_full(s))
    {
        error("Stack-Overflow");
    }
    s->data[++s->top] = item;
}

element pop(StackType *s)
{
    if (is_empty(s))
    {
        error("Stack-Underflow");
    }
    return s->data[(s->top)--];
}

int Check(const char* expr){
    char ch , open_ch;
    int len = strlen(expr);
    StackType s;
    init(&s);

    for(int i=0; i<len; i++){
        ch = expr[i];
        switch(ch){
            case '(': case'[': case'{':
            push(&s , ch);
            break;

            case ')': case']': case '}':
            if(is_empty(&s)){
                return 0;
            }
            open_ch = pop(&s);
            if((ch == ')' && open_ch !='(') || (ch == ']' && open_ch != '[') || (ch == '}' && open_ch != '{'))  return 0;
            break;
        }
    }
    if(!is_empty(&s))   return 0;
    return 1;
}

int main()
{
    return 0;
}