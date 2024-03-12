#include <stdio.h>

int dir_calc(TreeNode *root){
    if(!root)   return 0;
    return root -> data + dir_calc(root -> left) + dir_calc(root -> right);
}

int get_node_count(TreeNode *root){
    int count = 0;
    if(root){
        count = 1 + get_node_count(root -> left) + get_node_count(root -> right); 
    } 
    return count;
}

int get_height(TreeNode *root){
    int height = 0;
    if(root){
        height = 1 + max(get_height((get_height(root -> left)), (get_height(root -> right))));
    }
    return height;
}

int get_leaf_node(TreeNode *root){
    int count = 0;
    if(root){
        if(root -> left == NULL && root -> right == NULL){
            return 1;
        }
        else{
            count = get_leaf_node(root -> left) + get_leaf_node(root -> right);
        }
    }
    return count;
}