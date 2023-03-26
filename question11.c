#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
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
           
          newnode=(struct node *)malloc(sizeof(struct node));
           newnode->data=nva;
           newnode->next=NULL;
           newnode->prev=NULL;
           start=newnode;
       }
       else{
          newnode=(struct node *)malloc(sizeof(struct node));
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
          newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=n;
    while (ptr->data!=m)
        ptr=ptr->next;
    newnode->next=ptr;
    newnode->prev=ptr->prev;
    ptr->prev->next=newnode;
    ptr->prev=newnode;
    return start;
}
struct node *del(struct node *start){
    int value;
    printf("enter the value to be deleted");
    scanf("%d",&value);
    
    struct node *ptr;
    ptr=start;
    
    while(ptr->data!=value && ptr!=NULL){
        ptr=ptr->next;
    }
    if(ptr==NULL){
        printf("element not found\n");
    }
    if (ptr->prev==NULL){
        start=ptr->next;
    }
     if(ptr->next!=NULL){
        ptr->next->prev=ptr->prev;;
    }
    if(ptr->prev!=NULL){
        ptr->prev->next=ptr->next;
    }
    free(ptr);
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
               start=  del(start);
                 break;
         case 4:exit(0);
         case(5):display(start);
         break;
         default:
         printf("invalid choice");
     }
   }
   return 0;
}
