#include<stdio.h>
main()
{
int a[100],n,i;
void bubble(int[] ,int);
printf("Enter size");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
bubble(a,n);
printf("sorted list is \n");
for(i=0;i<n;i++)
printf(" %d ",a[i]);
}
bubble(int a[], int n)
{
int temp,i,j;
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{ temp=a[j]; a[j]=a[j+1]; a[j+1]=temp; }
}
}
}