#include<stdio.h>
void main(){
    int a=0,b=1,swap,i,n;
    printf("enter a no. ");
    scanf("%d",&n);
    printf("list of fibonacci series ");
    printf("%d %d ",a,b);
    for(i=3;i<=n;i++){
        swap=a+b;
        printf("%d ",swap);
        a=b;
        b=swap;
    }
}