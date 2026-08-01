#include<stdio.h>
int main(){
    char s[]="hello . ";
    int length=0;
    while(s[length]!='\0'){
        length++;
    }
    printf("length of the string is: %d ",length);
    return 0;
}