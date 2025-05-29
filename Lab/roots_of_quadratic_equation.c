#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,r1,r2,D;
printf("enter a,b,c: ");
scanf("%f%f%f",&a,&b,&c);
D=b*b-4*a*c;
if(D <0)
printf ("Roots are imaginary");
else
{
r1= (-b + sqrt (D) ) / (2*a);
r2= (-b-sqrt(D)) / (2*a);
printf("Root1=%f\nRoot2=%f",r1,r2);
}
}
