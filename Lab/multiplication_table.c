#include <stdio.h>
int main()
{
 int n, i, row;
 printf("Enter an integer: ");
 scanf("%d",&n);
 printf("Enter the rows: ");
 scanf("%d", &row);
 for(i=1; i <= row; ++i)
 {
 printf("%d * %d = %d \n", n, i, n*i);
 }
 return 0;
}
