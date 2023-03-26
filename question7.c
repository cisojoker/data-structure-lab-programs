#include<stdio.h>

#define max 5
int que[5];
int top=-1;
int rear=-1;
int count=0;
void insert(int number){
    if(count==max){
        printf("overflow sorry");
    }
    else {
        if(top==-1 && rear==-1)
        {
        top=0;
        rear=0;   
        }
       else rear++;
       
        que[rear%max]=number;
        count++;
    }
}
void dele(){
    if(count==0) printf("underflow");
    printf("the deleted element is:%d \n",que[top%max]);
  
    top++;
    count--;
}
void display(){
    if (count==0){
        printf("empty");
    }
    else {
     for(int i=top;i<=rear;i++)
     {
         printf("%d ",que[i%max]);
     }
    }
    printf("\n");
}
int main(){
  printf("\nenter : \n 1 -> add \n2 -> remove \n 3 -> display \n");
  int ch;
  while(1){
    printf("enter your choice \n");
    scanf("%d",&ch);
    switch(ch){
      case 1:
        int n;
        printf("enter the number");
        scanf("%d",&n);
        insert(n);
        break;
      case 2:
        dele();
        break;
      case 3:{
        display();
        break;
      }
      default:
        printf("invalid choice \n");
        break;      
    }
}

return 0;
}
