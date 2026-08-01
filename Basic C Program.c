#include <stdio.h>
void main(){
   char sym;
   int a,b;
   printf("enter 2 values ");
   scanf("%d %d",&a,&b);
   printf("enter the symbol to perform b/w them ");
   scanf(" %c",&sym);
   switch(sym){
       case '+' : printf("addn:%d",a+b);
       break;
       case '-' : printf("subn:%d",a-b);
       break;
       case '*' : printf("muln:%d",a*b);
       break;
       default: printf("symbol %c is not matched", sym);
       break;
    }
    
}
    
    