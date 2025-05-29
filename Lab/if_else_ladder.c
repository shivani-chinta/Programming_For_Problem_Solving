#include <stdio.h>
int main()
{
int phy, chem, bio, math, comp;
float per;
printf("Enter five subjects marks: ");
scanf("%d%d%d%d%d", &phy, &chem, &bio, &math, &comp);
per = (phy + chem + bio + math + comp) / 5.0;
printf("Percentage = %.2f\n", per);
if(per >= 70)
{
printf("Distinction");
}
else if(per >= 60 && per<70)
{
printf("First Class");
}
else if(per >= 40 && per<60)
{
printf("Second Class");
}
else if(per<40)
{
printf("Fail");
}
return 0;
}
