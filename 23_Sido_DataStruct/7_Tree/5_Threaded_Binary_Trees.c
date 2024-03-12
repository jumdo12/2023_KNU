#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode{
    int data;
    struct TreeNode *left , *right;
    int is_thead;
}TreeNode;

TreeNode* find_successor(TreeNode *p){
    TreeNode *q = p -> right;
    if(q == NULL || p -> is_thead == TRUE){
        return q;
    }
    while(q -> left != NULL){
        q = q -> left;
    }
    return q;
}

void thread_inoder(TreeNode *t){
    TreeNode *q;
    q = t;
    while(q -> left != NULL){
        q = q -> left;
    }
    do{
        printf("%c", q -> data);
        q = find_successor(q);
    }while(q);
}