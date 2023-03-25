#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct emp{
    char name[100];
    char dept[100];
    int sal;
    int id;
};

void totalsalary(struct emp*A,int n){
    char de[100];
    int sum=0;
    printf("enter the department");
    scanf("%s",de);
    for (int i=0;i<n;i++){
        if(strcmp(de,(A+i)->dept)==0){
            sum=sum+(A+i)->sal;
        }
    }
    printf("the sum of salaries is : %d",sum);
}
int main(){
    int n;
    printf("enter the number of employees  you want to add");
    scanf("%d",&n); 
    struct emp *ptr;
    ptr=malloc(sizeof(struct emp));

    
        for (int i=0;i<n;i++){
        printf("name");
        scanf("%s",(ptr+i)->name);
                printf("deppartement");
        scanf("%s",(ptr+i)->dept);
                printf("salary");
        scanf("%d",&(ptr+i)->sal);
                printf("id ");
        scanf("%d",&(ptr+i)->id);
    }
    printf("emloyee details are\n");
     for (int i=0;i<n;i++){
        printf("%s\t",(ptr+i)->name);
        printf("%s\t",(ptr+i)->dept);
        printf("%d\t",(ptr+i)->sal);
        printf("%d\t",(ptr+i)->id);
        printf("\n");
    }
    totalsalary(ptr,n);
    return 0;
}
