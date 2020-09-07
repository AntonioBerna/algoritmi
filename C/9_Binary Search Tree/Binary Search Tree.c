#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode{
    int data;
    struct TreeNode *left, *right;
    int is_leaf;
}TreeNode;

TreeNode *Make_Tree_Node(int data){
    TreeNode *node = (TreeNode*) calloc(1, sizeof(TreeNode));
    node -> data = data;
    node -> left = node -> right = NULL;
    node -> is_leaf = 1;
    return node;
}

TreeNode *insert(TreeNode *root, int data){
    if(!root){
        root = Make_Tree_Node(data);
        return root;
    }else{
        TreeNode *node = Make_Tree_Node(data);
        TreeNode *temp = root;

        while(temp){
            if(temp -> is_leaf){
                if(temp -> data > data){
                    temp -> left = node;
                    temp -> is_leaf = 0;
                    break;
                }else{
                    temp -> right = node;
                    temp -> is_leaf = 0;
                    break;
                }
            }else{
                if(temp -> data > data){
                    if(temp -> left == NULL){
                        temp -> left = node;
                        break;
                    }
                    temp = temp -> left;
                }else{
                    if(temp -> right == NULL){
                        temp -> right = node;
                        break;
                    }
                    temp = temp -> right;
                }
            }
        }
    }
    return root;
}

int search(TreeNode *root, int target){
    if(!root){
        return 0;
    }

    if(root -> data == target){
        return 1;
    }else if(root -> data > target){
        return search(root -> left, target);
    }else{
        return search(root -> right, target);
    }

    return 0;
}

void free_bst(TreeNode *root){
    if(!root){
        return;
    }

    free_bst(root -> left);
    free_bst(root -> right);
    free(root);
}

void print_search(TreeNode *root, int target){
    if(search(root, target) == 1){
        printf("Value: %d found in the BST!\n", target);
    }else{
        printf("Value: %d is not found in the BST.\n", target);
    }
}

void print_bst(TreeNode *root){
    if(!root){
        return;
    }

    print_bst(root -> left);
    printf("Node: %d -> ", root -> data);
    print_bst(root -> right);
}

int main(int argc, char const *argv[]) {
    TreeNode *root = Make_Tree_Node(45);

    root = insert(root, 20);
    root = insert(root, 15);
    root = insert(root, 60);
    root = insert(root, 40);
    root = insert(root, 50);
    root = insert(root, 70);
    print_bst(root);

    printf("\n");
    
    print_search(root, 15);
    print_search(root, 70);
    print_search(root, 35);
    free_bst(root);

    return 0;
}
