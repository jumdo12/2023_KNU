#include <stdio.h>

typedef struct{
    int r;
    int c;
}element;
typedef struct{
    element data[MAX_STACK_SIZE];
    int top;
}StackType;

void push_loc(StackType *s , int r , int c){
    element temp;
    if(r < 0 || c <0)   return;
    if(maze[r][c] != '.' && maze[r][c] != '1'){
        temp.r = r;
        temp.c = c;
        push(s , temp);
    }
}

void maze_print(){
    printf("\n");
    for(int r =0; r<MAX_SIZE; r++){
        for(int c =0; c <MAX_SIZE; c++){
            printf("%c" , MAZE[r][c]);
        }
        printf("\n");
    }
}

int maze(){
    int r , c;
    element here = {1,0};
    StackType s;
    init(&s);

    while(maze[here.r][here.c] != 'x'){
        r = here.r;
        c = here.c;
        maze[r][c] = '.';
        maze_print();
        push_loc(&s,r+1,c);
        push_loc(&s,r-1,c);
        push_loc(&s,r,c+1);
        push_loc(&s,r,c-1);
        if(is_empty(&s))    return 0;
        else    here = pop(&s);
    }
    return 1;
}

int main(){
    return 0;
}