#include <stdio.h>
#include <malloc.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* prev;
    struct node* next;
};
struct node *start=NULL;

struct node* crll(struct node * st){
   struct node *newnode ;
   int nva;
   printf("enter the values to insert and -1 to stop taking vaue");
   scanf("%d",&nva);
   while(nva!=-1){
       if (start==NULL){
           
          newnode=malloc(sizeof(struct node));
           newnode->data=nva;
           newnode->next=NULL;
           newnode->prev=NULL;
           start=newnode;
       }
       else{
          newnode=malloc(sizeof(struct node));
          newnode->data=nva;
          struct node *ptr;
          ptr=start;
          while(ptr->next!=NULL)
          ptr=ptr->next;
          ptr->next=newnode;
          newnode->prev=ptr;
          newnode->next=NULL;
       }
       printf("enter the value");
      scanf("%d",&nva);
   }
   
   return start;
}
struct node *insert(struct node *start){
    printf ("enter the value before you want to insert the element and the value you want to add");
    int m,n;
    scanf("%d %d ",&m,&n);
    struct node *ptr;
    ptr=start;
    struct node *newnode;
    newnode =malloc(sizeof(struct node));
    newnode->data=n;
    while (ptr->data!=m)
        ptr=ptr->next;
    newnode->next=ptr;
    newnode->prev=ptr->prev;
    ptr->prev->next=newnode;
    ptr->prev=newnode;
    return start;
}
struct node *delete(struct node *start){
    int j;
    printf ("enter the value u want to delete");
    scanf("%d",&j);
    struct node *ptr;
    ptr=start;
    while(ptr->data!=j ){
        if(ptr->next=NULL){
            printf("vlaue is not there");
        }
        ptr=ptr->next;
    }
    if(ptr->data==j){
        if(ptr->prev==NULL){
            ptr->next->prev=NULL;
            start=ptr->next;
        }
        else if (ptr->next=NULL){
            ptr->prev->next=NULL;
        }
        else{
        ptr->prev->next=ptr->next;
        ptr->next->prev=ptr->prev;
        free(ptr);
    }
    }
   
    return start;
}
void display(struct node *start){
    struct node *ptr;
    ptr=start;
    while(ptr->next!=NULL){
        printf("%d",ptr->data);
        ptr=ptr->next;
    }
       printf("%d \n",ptr->data);
}
int main(){
 int m;
 while(1){
     printf("1)create ll 2)insert before a given value 3delete 4exit 5 display\n");
     scanf("%d",&m);
     switch(m){
         case 1:
         start=crll(start);
         break;
         case 2:
               start= insert(start);
               break;
         case 3:
         start=delete(start);
         break;
         case 4:
         exit(0);
         case(5):display(start);
         break;
         default:
         printf("invalid choice");
     }
   }
   return 0;
}
