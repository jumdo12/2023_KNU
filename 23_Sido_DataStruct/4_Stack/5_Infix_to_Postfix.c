#include <stdio.h>
#include <string.h>

int prec(const char ch){
    switch(ch){
        case '(': case ')': return 0;
        case '+': case '-': return 1;
        case '*': case '/': return 2;
    }
}

void infix_to_postfix(const char* expr){
    char ch , open_ch;
    int len = strlen(expr);
    StackType s;
    init(&s);

    for(int i=0; i<len; i++){
        ch = expr[i];
        
        switch(ch){
            case '+': case'-': case '*': case '/':
            while(prec(peek(&s)) >= prec(ch)){
                printf("%c",pop(&s));
            }
            push(&s,ch);
            break;

            case '(':   push(&s,ch);    break;

            case ')':
            open_ch = pop(&s);
            while(open_ch != '('){
                printf("%c" , open_ch);
                open_ch = pop(&s);
            }
            break;
            
            default:
            printf("%c" , ch);
            break;
        }
    }
    while(!is_empty(&s)){
        printf("%c" , pop(&s));
    }
}

int main(){
    return 0;
}