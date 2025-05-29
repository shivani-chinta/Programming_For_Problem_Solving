#include <stdio.h>
int main()
{
 int n, i, max, min;
 float num[100], sum = 0.0, average;
 printf("Enter the numbers of elements: ");
 scanf("%d", &n);
 while (n > 100 || n <= 0)
 {
 printf("Error! number should in range of (1 to 100).\n");
 printf("Enter the number again: ");
 scanf("%d", &n);
 }
 for(i = 0; i < n; ++i)
 {
 printf("%d. Enter number: ", i+1);
 scanf("%f", &num[i]);
 max = num[0];
 min = num[0];
 if(num[i] > max)
 {
 max = num[i];
 }
 if(num[i] < min)
 {
 min = num[i];
 }
 sum += num[i];
 }
 average = sum / n;
 printf("Maximum element = %d\n", max);
 printf("Minimum element = %d", min);
 printf("Average = %.2f", average);
 return 0;
}