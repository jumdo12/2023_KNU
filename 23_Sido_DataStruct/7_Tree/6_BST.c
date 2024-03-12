#include <stdio.h>
#include <stdlib.h>

TreeNode* search(TreeNode *node , int key){
    if(!node)   return NULL;
    if(key == node -> key)  return node;
    else if(key > node -> key)  return search(node -> right , key);
    else    return search(node -> left , key);
}

TreeNode* search_iter(TreeNode *node , int key){
    while(node){
        if(key == node -> key)  return node;
        else if(key > node -> key)  node = node -> right;
        else    node = node -> left;
    }
    return NULL;
}

TreeNode* insert(TreeNode *root , int key){
    if(root == NULL)    return new_node(key);
    if(key > root -> key)   root -> right = insert(root -> right ,key);
    else if(key < root -> key)  root -> left = insert(root -> left , key);
    return root;
}

TreeNode* find_min_val(TreeNode* root){
    while(root -> left != NULL){
        root = root -> left;
    }
    return root;
}

TreeNode* delete(TreeNode *root , int key){
    if(root == NULL)    reutnr NULL;
    if(key < root -> key)   root -> left = delete(root -> left , key);
    else if(key > root -> key)  root -> right = delete(root -> right , key);
    else{
        if(root -> left == NULL){
            TreeNode *temp = root -> right;
            free(root);
            return temp;
        }
        else if(root -> right == NULL){
            TreeNode *temp = root -> left;
            free(root);
            return temp;
        }
        else{
            TreeNode *temp = find_min_val(root -> right);
            root -> key = temp -> key;
            root -> right = delete(root -> right , temp -> key);
        }
    }
    return root;
}

int main(){
    TreeNode *root = NULL;
    root = insert(root , 20);
    root = insert(root, 30);
    root = insert(root, 80);
    root = insert(root, 10);
    root = insert(root, 50);
    root = insert(root, 0);

    if(serch(root,30)){
        printf("1");
    }
    else{
        printf("0");
    }

    return 0;
}