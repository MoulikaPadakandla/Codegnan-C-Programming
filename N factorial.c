#include<stdio.h>
void main(){
    int n,i=1,f=1;
    printf("enter a no.");
    scanf("%d",&n);
    while(i<=n){
        f=f*i;
        i++;
    }
    printf("factorial of %d is : %d",n,f);
}