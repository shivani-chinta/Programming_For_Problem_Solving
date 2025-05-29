#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter any three numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
printf("Maximum Number is %d",a);
else if(b>c && b>a)
printf("Maximum Number is %d",b);
else
printf("Maximum Number is %d",c);
if(a<b && a<c)
printf("Minimum Number is %d",a);
else if(b<a && b<c)
printf("Minimum Number is %d",b);
else
printf("Minimum Number is %d",c);
}