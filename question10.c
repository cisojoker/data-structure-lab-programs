#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node*link;
};
struct node *top=NULL;

void push(){
    int val;
    printf("enter the data");
    scanf("%d",&val);
    struct node *newnode=malloc(sizeof(struct node ));
    if(newnode==NULL){
        printf("vooooooooooooerflowwwwww");
    }
    newnode->data= val;
    newnode->link=top;
    top=newnode;
}

void display(){
    struct node*ptr;
    ptr=top;
    if(ptr==NULL){
        printf("nothing to display");
        exit(0);
    }
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->link;
    }
    free(ptr);
}

void pop(){
      if(top==NULL){
        printf("underflow");
        exit(0);
      }
     int vl;
     vl=top->data;
     printf("the element deleted is %d\n",vl);
     top=top->link;
}
int main()
{   
    printf("enter the choice");
    while(1){
        int c;
        printf("1>push\n2>pop\n>3>exit\n4>display\n");
        scanf("%d",&c);
        switch(c){
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            exit(0);
            case 4:
            display();
            break;
            default:
            printf("invalid key pressed");
        }
    }
    return 0;
}
