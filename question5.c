#include<stdio.h>
#include <conio.h>
#include <stdlib.h>
int stack[20];
int top=-1;

// tu kya karega pehle toh element daanel ke liye push function likh de
void push(int x){
    if (top==19){
        printf("overflow condition");
    }
    else{
        stack[++top]=x;
    }
}
int pop(){
    if (top==-1){
        printf("underflow condition met");
    }
    return stack[top--];
}
int main()
{  
    char str[100];int n1,n2,n3,num;
    printf("enter the expression");
    scanf("%s",str);
    char *e=str;
    while(*e!='\0'){
        if(isdigit(*e)){
            num=*e-'0';
            printf("%d\n",num);
            push(num);
        }
        else{
            n2=pop();
            n1=pop();
            switch(*e){
                case '+': n3=n1+n2;
                push(n3);
                        break;
                case '-': n3=n1-n2;
                push(n3);
                        break;
                case '*': n3=n1*n2;
                push(n3);
                        break;
                case '/': n3=n1/n2;
                push(n3);
                        break;
                default:
                printf("can't calculated");
                break;
            }
        }
            e++;
    }
    printf("%d",pop());
    return 0;
}
