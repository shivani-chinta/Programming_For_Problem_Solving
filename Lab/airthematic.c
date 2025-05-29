#include <stdio.h>
int main()
{
int a, b, c;
printf("Enter a ");
scanf("%d",&a);
printf("Enter b ");
scanf("%d",&b);
c = a+b;
printf("a+b = %d \n",c);
c = a-b;
printf("a-b = %d \n",c);
 c = a*b;
 printf("a*b = %d \n",c);
 c=a/b;
 printf("a/b = %d \n",c);
 c=a%b;
 printf("Remainder when a divided by b = %d \n",c);
 return 0;
}