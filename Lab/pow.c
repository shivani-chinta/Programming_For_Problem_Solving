#include<stdio.h>
void main()
{
int x,n,result;
int pow(int,int);
printf("enter two numbers");
scanf("%d%d",&x,&n);
result = pow(x,n);
printf("With Recursion: x power n=%d\n",pow(x,n));
printf("Without Recursion: %d^%d = %d\n", x, n, result);
}
int pow(int m,int n)
{
if(n==1)
return m;
else
return(m*pow(m,n-1));
}