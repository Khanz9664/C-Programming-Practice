#include<stdio.h>


struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *root=NULL;
struct node *CreateNode(int data){
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}

struct node *insertdata(struct node *temp,int data){

    if(root==NULL){
        return CreateNode(data);
    }

    if(data < temp->data){
        temp->left = insertdata(temp->left,data);
    }

    else{
        temp->right=insertdata(temp->right,data);
    }

    return temp;
}


//inorder traversal....
void inorder(struct node *root){
    if(root!=NULL){
        inorder(root->left);
        printf(" %d ",root->data);
        inorder(root->right);
    }
}

//preorder traversal....
void preorder(struct node *root){
    if(root!=NULL){
        printf(" %d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

//postorder traversal....
void postorder(struct node *root){
    if(root!=NULL){
        printf(" %d ",root->data);
        postorder(root->left);
        postorder(root->right);
    }
}

int main(){
    root=insertdata(root, 50);
    insertdata(root, 30);
    insertdata(root, 20);
    insertdata(root, 40);
    insertdata(root, 70);
    insertdata(root, 60);
    insertdata(root, 80);

    printf("\n preorder \n");
    preorder(root);

    printf("\n postorder \n");
    postorder(root);

    printf("\n inorder \n");
    inorder(root);
}
