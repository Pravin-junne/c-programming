#include<stdio.h>
int main()
{          //else if ladder program of number choice.
    int n;
    printf("Enter 1 number between 1 to 4:");
    scanf("%d",&n);
    if(n==1){
        printf("ONE");
    }
    else if(n==2){
        printf("TWO");
    }
    else if(n==3){
        printf("THREE");
    }
    else if(n==4){
        printf("FOUR");
    }
return 0;
}