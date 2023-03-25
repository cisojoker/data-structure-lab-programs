#include <stdio.h>
void tower(int ,int,int,int);
int main()
{
    int n;
    printf("enter the number of discs");
    scanf("%d",&n);
    tower(n,1,2,3);

    return 0;
}
void tower(int m ,int b,int a,int e)
{
    if(m<=0){
        printf("envalid response");
    }
    else if (m==1){
        printf("%d from %d",b,e);
    }
    else {
        tower(m-1,b,e,a);
        tower(1,b,a,e);
        tower(m-1,a,b,e);
    }
}
