#include<stdio.h>
int main()
{           //if else program to find vowel or consonant
    char ch;
    printf("Enter any charactor:");
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }
return 0;
}