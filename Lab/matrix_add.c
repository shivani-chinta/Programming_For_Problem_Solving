#include<stdio.h>
int i,j,p,q,m,n;
void main()
{
int a[10][10],b[10][10];
void matrixadd(int a[10][10],int b[10][10],int p,int q);
printf("enter the order of 1st matrix\n");
scanf("%d%d",&m,&n);
printf("enter the order of 2nd matrix\n");
scanf("%d%d",&p,&q);
if((m==p) &&(n==q))
{
printf("enter A array elements\n");
for(i=0;i<p;i++)
for(j=0;j<q;j++)
scanf("%d",&a[i][j]);
printf("enter B array elements\n");
for(i=0;i<p;i++)
for(j=0;j<q;j++)
scanf("%d",&b[i][j]);
matrixadd(a,b,p,q);
 }
 else
 printf("matrix addition is not possible");
 }
void matrixadd(int a[10][10],int b[10][10],int p,int q)
{
 int c[10][10],i,j;
 for(i=0;i<p;i++)
 for(j=0;j<q;j++)
 c[i][j]=a[i][j]+b[i][j]; 
 printf("The resultant matrix is \n");
 for(i=0;i<p;i++)
 {
 for(j=0;j<q;j++)
 {
 printf("%3d",c[i][j]); }
 printf("\n");
 }
 }
