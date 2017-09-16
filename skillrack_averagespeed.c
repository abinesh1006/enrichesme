#include<stdio.h>
#include <stdlib.h>

int main()
{
 char a[100];
 char b;
 int dis[101]={0};
 int tim[101]={0};
 int toat1,t2,k=1,i;
 scanf("%d@%d",&dis[0],&tim[0]);
 scanf("%c",&b);
 while(b!='\n')
 {
    scanf("%d@%d",&dis[k],&tim[k]);
    k++;
    scanf("%c",&b);
 }
 
for(i=0;i<k;i++)
{
    toat1+=dis[i];
    t2+=tim[i];
}
float as=(float)toat1/(float)t2;
printf("%.2f kmph",as);


}
