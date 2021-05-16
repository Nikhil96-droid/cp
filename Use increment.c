#include<stdio.h>
int main()
{
    int a=9;
    int b=6;
    a=a++;
    printf("The value of a is %d",a);
    a=++a;
    printf("\nThe value of a is %d",a);
    b=b--;
    printf("\nThe value of b is %d",b);
    b=--b;
    printf("\nThe value of b is %d",b);
    
    return 0;
    
}


