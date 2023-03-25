#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include <string.h>
#define size 100
char  st[size];
int top=-1;

void push(char m){
    st[++top]=m;
}
char pop(){
    return st[top--];
}

int priority(char i){
    
    if (i=='+' || i=='-'){
        return 1;
    }
    else if (i=='*' || i=='/'){
        return 2;
    }
    else if(i=='('){
        return 0;
    }
}
void main()
{
  char st1[100];
  printf("enter the string to convert to postfix");
  scanf("%s",st1);
  char *e,x;e=st1;
  while(*e!='\0'){
      if(isalnum(*e)){
          printf("%c",*e);
      }
      else if (*e=='('){
          push(*e);
      }
      else if (*e==')'){
          while((x=pop())!='('){
              printf("%c",x);
          }
      }
      else{
          while(priority(st[top])>priority(*e)){
              printf("%c",pop());
          } 
          push(*e);
      }e++;
      
  } while(top!=-1)
              printf("%c",pop());
          printf("\n");       
  }
