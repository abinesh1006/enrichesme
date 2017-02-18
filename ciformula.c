#include <stdio.h>
#include<math.h>
float ci(int ,float,int,int);
int main(void) 
{
	int pri;
	float rate;
	int compperiod;
	int year;
	scanf("%d",&pri);
	scanf("%f",&rate);
	scanf("%d",&compperiod);
	scanf("%d",&year);
	float interest=ci(pri,rate,compperiod,year);
	printf("%f",interest);

	return 0;
}
float ci(int amo,float r,int mont,int year)
{
     r=r/100;
     r=r/(float)mont;
     r=1+r;
     mont=mont*year;
    float x=pow((r),mont);
    return (amo*x)-amo;
}
