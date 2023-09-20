#include<stdio.h>
#include<conio.h>
int main(){
    //c program to check alphbet or not
    char c;
    printf("Enter the character:");
    scanf("%c",&c);

    if(c >='a' && c <='z' || c >='A' && c <='Z'){
        printf("This is a Alphbet...");
    }
    else{
        printf("This is not a Alphbet...");
    }

    return 0;
}