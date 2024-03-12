#include <stdio.h>
#include <stdlib.h>

int eval(TreeNode *root){
    if(!root)   return 0;
    else if(root -> left == NULL && root -> right == NULL)  return root -> data;
    else{
        int left , right;
        left = eval(root -> left);
        right = eval(root -> right);
        switch(root -> data){
            case '+':   return left + right;
            case '-':   return left - right;
            case '*':   return left * right;
            case '/':   return left / right;
        }
    }
    return 0;
}