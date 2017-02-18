#include <stdio.h>
#include<math.h>
float si(float,float,int,int);
float ci(float,float,int,int);
int main(void) 
{
	float pri;
	float rate;
	int year;
	scanf("%f",&pri);
	scanf("%f",&rate);
	scanf("%d",&year);
	int compperiod;
	scanf("%d",&compperiod);
	float interest=ci(pri,rate,year,compperiod);
	printf("%f",interest);
    return 0;
}
float si(float amo,float r, int y,int x)
{
    x=12/x;
    return  amo*r*x*y/1200;
}
float ci(float p,float rat ,int yea,int c)
{
    int i;
    
    for(i=0;i<c;i++)
    {
     
        p=p+si(p,rat,yea,c);
       
    
    }
    
