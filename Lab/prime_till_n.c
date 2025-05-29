#include<stdio.h>
void main()
 {
 int i,j,n,count=0;
 printf("enter the value of n: ");
scanf("%d",&n);
printf("\nprime numbers are: ");
 for(i=2;i<=n;i++)
 {
 count=0;
 for(j=1 ; j <= i ; j++)
 {
 if ( i%j == 0)
{
count++;
}
 }
 if( count == 2 )
 printf("%d\t " , i );
 }
 }