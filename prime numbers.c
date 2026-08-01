#include<stdio.h>
void main(){
    int i=1,j,n,count;
    printf("enter a no.");
    scanf("%d",&n);
    printf("list of primes are ");
    for(i=2;i<=n;i++){
        count = 0;
        for(j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count == 2){
            printf("%d ",i);
        }
        
    }
}