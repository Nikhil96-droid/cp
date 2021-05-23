#include<stdio.h>
int main()
{
    int a;
    int c;
    //Working of assignment operator
    printf("This program is designed by Nikhil\n");
    printf("Enter value of a is");
    scanf("%d",&a);
    c=a; //Value of c is a
    printf("\nThe value of c is %d\n",c);
    printf("The value of a is %d\n",a);
    c+=a; //c=c+a 
    printf("The value of c is %d\n",c);
    c-=a; //c=c-a
    printf("The value of c is %d\n",c);
    c*=a; //c=c*a
    printf("The value of c is %d\n",c);
    c/=a; //c=c/a
    printf("The value of c is %d\n",c);
    c%=a; //c=c%%a
    printf("The value of c is %d",c);
    
    
    return 0;
}
