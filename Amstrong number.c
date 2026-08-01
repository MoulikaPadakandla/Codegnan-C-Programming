#include<stdio.h>
void main(){
    int s=0,n,r,temp;
    printf("enter a no. to check armstrong or not ");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        r=n%10;
        s=s+r*r*r;
        n=n/10;
    }
    if(s==temp){
        printf("%d is armstrong no.",temp);
    }
    else{
        printf("%d is not armstrong no.",temp);
    }
}