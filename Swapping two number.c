#include<stdio.h>
int main()
{ 
   int a,b,temp;
   a=20;
   b=30;
   printf("Value of a is %d\n Value of b is %d",a,b);
    
   //value of a assgin to temp
   temp=a;
   
   //value of b assgin to a
   a=b;
    
   //value of temp assgin to b
   b=temp;
   
   printf("\nAfter swapping value of a is %d\n",a);
    
   printf("After swapping value of b is %d",b);
   
   return 0;
}
