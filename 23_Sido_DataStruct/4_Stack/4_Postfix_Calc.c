#include <stdio.h>
#include <string.h>

int Postfix_Calc(const char* expr){
    int first, second , len , temp;
    char ch;
    StackType s;
    init(&s);
    len = strlen(expr);

    for(int i=0; i<len; i++){
        ch = expr[i];
        if(ch != '+' && ch != '-' && ch != '*' && ch != '/'){
            temp = ch - '0';
            push(&s , temp);
        }
        else{
            second = pop(&s);
            first = pop(&s);
            switch(ch){
                case '+':   push(&s , first + second);  break;
                case '-':   push(&s , first - second);  break;
                case '*':   push(&s , first * second);  break;
                case '/':   push(&s , first / second);  break;    
            }
        }
    }
    return pop(&s);
}

int main(){
    return 0;
}