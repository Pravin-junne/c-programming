#include<stdio.h>
int main(){
    //Program for Armstrong number...
    int n, rem, cub, sum, tem;
    printf("Enter The Number:-");
    scanf("%d",&n);
    tem=n;
    sum=0;
        while(n>0){
            rem = n % 10;
            cub = rem * rem * rem;
            sum = sum + cub;
            n = n / 10;
        }
        if(tem==sum){
            printf("The Number is Amstrong");
        }
        else{
            printf("The Number is Not Amstrong");
        }

        return 0;
}