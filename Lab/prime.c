#include<stdio.h>
void main()
{
int n,i,nf=0;
printf(" enter any number ");
scanf("%d",&n);
for(i= 1; i<= n; i++)
{
if(n%i == 0)
nf++;
}
if(nf == 2)
printf("given number is prime");
else
printf("Not prime");
}
