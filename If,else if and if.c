#include<stdio.h>
int main()
{
       int age;
    printf("This is designed by Nikhil Bhardwaj");
    printf("\nEnter your age");
    scanf("%d",&age);
    if((age>=16)&&(age<18)) //under 18 candidate only
    {
    printf("\nYou are between 16 and 18.You can drive non gear vehicle");
    }
    else if((age>=18)&&(age<65))//only 18 to 65 age only
    {
    printf("\nYou are 18 or more than 18 you can drive gear vehicle");
    }
    else if(age<16)
    {
    printf("You are under age");
    }
    else
    {
    printf("\nSorry...");
    printf("\nYou are over aged");
    }
    return 0;
}
 
