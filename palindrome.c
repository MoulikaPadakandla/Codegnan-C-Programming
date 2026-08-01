#include<stdio.h>
void main(){
    int n,r,s=0,temp;
    printf("enter a no. to check palindrome: ");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(s==temp){
        printf("%d is palindrome ", temp);
    }
    else{
        printf("%d is not palindrome ", temp);
    }
    
}
