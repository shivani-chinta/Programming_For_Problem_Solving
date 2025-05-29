#include <stdio.h>
#include <math.h>
#define MAXSIZE 10
void main()
{
float x[MAXSIZE];
int i, n;
printf("Enter the value of N \n");
scanf("%d", &n);
printf("Enter %d real numbers \n", n);
for (i = 0; i < n; i++)
{
scanf("%f", &x[i]);
}
float meanfun(float x[])
{
 float mean,sum=0;
for (i = 0; i < n; i++)
{
sum = sum + x[i];
}
mean = sum / (float)n;
return mean;
}
float variancefun(float x[])
{
 float variance,sum1=0,sum=0,mean;
 for (i = 0; i < n; i++)
{
sum = sum + x[i];
}
mean = sum / (float)n;
for (i = 0; i < n; i++)
{
sum1 = sum1 + pow((x[i] - mean), 2);
}
variance = sum1 / (float)n;
return variance;
}
float std_deviationfun(float x[])
{
 float variance,std_deviation,sum1=0,sum=0,mean;
 for (i = 0; i < n; i++)
{
sum = sum + x[i];
}
mean = sum / (float)n;
for (i = 0; i < n; i++)
{
sum1 = sum1 + pow((x[i] - mean), 2);
}
variance = sum1 / (float)n;
std_deviation = sqrt(variance);
return std_deviation;
}
printf("mean of all elements = %.2f\n", meanfun(x));
printf("variance of all elements = %.2f\n", variancefun(x));
printf("Standard deviation = %.2f\n", std_deviationfun(x));
}
