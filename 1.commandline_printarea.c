#include<stdio.h>
#include<math.h>
int main(int argc,char *argv[])
{
    float x;
    sscanf(argv[1],"%f",&x);
    float di=x/2;
    float ans=22*pow(di,2.0)/7.0;
    printf("%.2f",ans);
    return 0;
}
