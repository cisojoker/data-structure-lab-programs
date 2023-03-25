#include<stdio.h>
#include <stdlib.h>

void create();
void display();
void insert();
void delete();

int A[5];
int top;
void create (){
    scanf("%d",&top);
    for (int b=0;b<top;b++){
            scanf("%d",&A[b]);
}
}
void display(){
if (top==0){
    printf("envalid data");
}
else{
    for(int i=0;i<top;i++){
        printf("%d \t",A[i]);
    }
  }
}

void insert(){
    if(top==5){
        printf("stomach is full");
    }
    else{
        int pos;
        printf("pos madi");
        scanf("%d",&pos);
        if (pos>5){printf("invalid position");}
        else {
            int vla;
            scanf("%d",&vla);
            for(int y=top-1;y>=pos-1;y--){
                A[y+1]=A[y];
            }
            A[pos-1]=vla;
            top=top+1;
        }
    }
}
void delete(){
     if(top==0){
        printf("stomach is empty");
    }
    else{
        int pos;
        printf("pos madi");
        scanf("%d",&pos);
        if (pos>5){printf("invalid position");}
        else {
            for(int y=pos-1;y<top-1;y++){
                A[y]=A[y+1];
            }
            top=top-1;
        }
    }
}

//main function
void main(){
int choice;
while(1)
{
printf("\n\n~~~~MENU~~~~");
printf("\n=>1. Create an array of N integers");
printf("\n=>2. Display of array elements");
printf("\n=>3. Insert ELEM at a given POS");
printf("\n=>4. Delete an element at a given POS");
printf("\n=>5. Exit");
printf("\nEnter your choice: ");
scanf("%d", &choice);
switch(choice)
{
case 1: create();
break;
case 2: display();
break;
case 3: insert();
break;
case 4: delete();
break;
case 5: exit(1);
break;
default: printf("\nPlease enter a valid choice:");
}
}
}
