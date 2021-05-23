#include<stdio.h>
int main()
{
    //Using Logical operator
    int a=20;
    int b=23;
    int c=15;
    int result;
    //Using logical AND operator
    result=(a>c)&&(c<b);
    printf("(a>c)&&(c<b) is %d \n",result);
    result=(a<c)&&(c<b);
    printf("(a<c)&&(c<b) is %d \n",result);
    result=(a<c)&&(c>b);
    printf("(a<c)&&(c>b) is %d \n",result);
    result=(a>c)&&(c>b);
    printf("(a>c)&&(c>b) is %d \n",result);
    
    //Using logical OR operator
    result=(a>c)||(c<b);
    printf("(a>c)||(c<b) is %d \n",result);
    result=(a<c)||(c<b);
    printf("(a<c)||(c<b) is %d \n",result);
    result=(a<c)||(c>b);
    printf("(a<c)||(c>b) is %d \n",result);
    result=(a>c)||(c>b);
    printf("(a>c)||(c>b) is %d \n",result);
    
    //Using Using logical NOT operator
    
     result=!(a>c);
    printf("!(a>c) is %d\n",result);
    result=!(a<c);
     printf("!(a<c) is %d",result);
    
    return 0;
    }
    
