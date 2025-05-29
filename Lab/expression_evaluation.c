#include <stdio.h>
#include <math.h>
void main()
{
int tim_intrval, counter,timee;
float accl, distance=0, velos;
printf("\n\t\t\tTIME: ");
scanf("%d",&timee);
printf("\t\t\tVELOCITY AT %d sec (m/sec) : ",timee);
scanf("%f",&velos);
printf("\t\t\tACCLERATION AT %d sec (m/sec^2): ",timee);
scanf("%f",&accl);
distance += (velos*timee + (accl*pow(timee,2))/2);
printf("\n\n\n\tTOTAL DISTANCE TRAVELLED BY VEHICLE:%f",distance);
}