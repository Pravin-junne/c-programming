#include<stdio.h>
int main()
{           //nested if else program of blood donation.
    int age, weight;
    printf("Enter your age:-");
    scanf("%d",&age);
    printf("Enter your weight:-");
    scanf("%d",&weight);
    if(age>=18){
        if(weight>=55){
            printf("You can donate blood..");
        }
    }
    else{
        printf("You can not donate blood..");
    }
return 0;
}