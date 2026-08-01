#include<stdio.h>
void main(){
    int i=1,n,sum=0;
    printf("enter a no. ");
    scanf("%d", &n);
    while(i<=n){
        sum=sum+i;
        i++;
    }
    printf("sum of n is: %d", sum);
}