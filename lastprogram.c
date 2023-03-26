#include <stdio.h>
#include <malloc.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* right;
    struct node* left;
};
struct node* createnode(int v){
    struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
    n->data=v;
    n->right=NULL;
    n->left=NULL;
    return n;
}
void preorder (struct node* root){
    if (root!=NULL){
        printf("%d\t",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void inorder (struct node* root){
    if (root!=NULL){
        inorder(root->left);
        printf("%d\t",root->data);
        inorder(root->right);
    }
}
void postorder (struct node* root){
    if (root!=NULL){
        postorder(root->left);
         postorder(root->right);
       printf("%d\t",root->data);
    }
}int main(){
    struct node* p=createnode(15);
    struct node* p1=createnode(12);
    struct node* p2=createnode(88);
    struct node* p3=createnode(22);
    struct node* p4=createnode(78);
    
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    printf("\npreorder traversal is\n");
    preorder(p);
     printf("\npostorder traversal is\n");
    postorder(p);
     printf("\ninorder traversal is\n");
    inorder(p);
    
}
