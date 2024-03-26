#include <stdio.h>

void inoder(TreeNode *root){
    if(root){
        inoder(root -> left);
        printf("%d" , root -> data);
        inoder(root -> right);
    }
}

void preorder(TreeNode *root){
    if(root){
        printf("%d",root -> data);
        preorder(root -> left);
        preorder(root -> right);
    }
}

void postorder(TreeNode *root){
    if(root){
        postorder(root -> left);
        postorder(root -> right);
        printf("%d" , root -> data);
    }
}

void inorder_iter(TreeNode *root){
    while(1){
        while(root){
            push(root);
            root = root -> left;
        }
        root = pop();
        if(!root)   break;
        printf("%d" , root -> data);
        root = root -> right;
    }
}

void level_order(TreeNode *root){
    QueueType q;
    init(&q);
    enqueue(&q , root);
    
    while(!is_empty(&q)){
        root = dequeue(&q);
        if(!root){
            printf("%d" , root -> data);
            if(root -> left){
                enqueue(&q , root -> left);
            }
            if(root -> right){
                enqueue(&q , root -> right);
            }
        }
    }
}