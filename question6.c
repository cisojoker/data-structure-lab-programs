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

/////////////////part A////////////////////////////
#include <stdio.h>

void binarysearch(int a[],int l,int h,int val){
    int mid =(l+h)/2;
  if (l<h){  if (a[mid]>val){
        binarysearch(a,l,mid-1,val);
    }
    else if (a[mid]<val){
        binarysearch(a,mid+1,h,val);
    }
    else if(a[mid]==val){
        printf("the position is found at %d",mid+1);
    }
  }
  else{
      printf("nahi hai0");
  }
}
int  main(){
    int stack[5],val;
    printf("enter the values in array");
    for(int i=0;i<5;i++){
        scanf("%d",&stack[i]);
    }
    printf("enter the value o u want to find ");
    scanf("%d",&val);
    int low ,high;
    low=0;
    high=5;
    binarysearch(stack,low,high,val);
    return 0;
}
