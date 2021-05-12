#include<stdio.h>
int main()
{
    int a=10;
    int b;
    int c;
    //Using increment operator
    b=a++; //postincrement
   printf("Value of b is %d",b);
   printf("\nValue of a is %d",a);
   //postincrement first copy the value and put after that increment the value by one number//
    
    b=++a; //preincrement
   printf("\nValue of b is %d\n",b);
   printf("Value of a is %d\n",a);
   //preincrement first increse the value by one after copy and put the value
   
    c=a--;//postdecrement
    printf("Value of c is %d",c);
    printf("\nValur of a is %d",a);
  
    c=--a;//predecrement
    printf("\nValue of c is %d\n",c);
    printf("Value of a is %d",a);
   
   
   return 0;
    
    
}
