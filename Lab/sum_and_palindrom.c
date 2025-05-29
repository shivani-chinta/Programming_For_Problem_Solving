#include<stdio.h>
#include<math.h>
void main ()
{
 int number = 0,remainder,originalInteger, sumOfDigits = 0, reversedInteger = 0;
printf("Enter any number\n ");
scanf("%d", &number);
originalInteger = number;
while (number != 0)
{
 remainder = number % 10;
 sumOfDigits = sumOfDigits + remainder;
 reversedInteger = reversedInteger*10 + remainder;
 number = number / 10;
}
printf ("Sum of individual digits of a given number is %d\n", sumOfDigits);
if (originalInteger == reversedInteger)
 printf("%d is a palindrome.", originalInteger);
else
 printf("%d is not a palindrome.", originalInteger);
}
