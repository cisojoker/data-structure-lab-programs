#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int stack[50],top=-1;
int n;
void push();
void pop();
void display();
void isPalindrome();

void push(){
    if(top==n-1){
        printf("stack is already fulled ");
    }
    else{
        int data;
        printf("Enter the value to be submitted");
        scanf("%d",&data);
        stack[++top]=data;
    }
  }

void pop(){
    if(top==-1){
        printf("underflow condition ");
    }
    else{
        top--;
    }
}
void display(){
    if(top==-1)
            printf("underflow condition  no item to show");

    for(int i=0;i<=top;i++){
        printf("%d\t",stack[i]);
        printf("\n");
    }
}
void isPalindrome(){
    int flag=1;
    for(int i=0;i<=(top/2);i++,top--){
        if(stack[i]!=stack[top]){
            printf("no palindrome");
            flag=0;
            break;
        }
    }
    if (flag=1){
        printf("palindrome");
    }
}
int  main(){
    int val;
    printf("enter the size of the stack");
    scanf("%d",&n);
    while(1){
        printf ("enter the choice:");
        printf("1)push\n 2)pop\n 3)display\n 4)ispalindrome\n 5)exit");
        scanf("%d",&val);
        switch(val){
            case 1:push();
            break;
             case 2:pop();
            break;
             case 3:display();
            break;
             case 4:isPalindrome();
            break;
             case 5:exit(0);
             default:
             printf("Invalid choice entered");
        }
    }
    return 0;
   
}
