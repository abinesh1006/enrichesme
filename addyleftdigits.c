#include<stdio.h>
#include <stdlib.h>
#include<math.h>
int cont(int);
int main()
{
int a,b;
scanf("%d%d",&a,&b);
int c=cont(a);
int d=cont(b);
int e=reve(a);
int f=reve(b);
if(c>d)
{
     f=reve(b)*pow(10,c-d);
    
}
if(c<d)
{
     e=reve(a)*pow(10,d-c);
     
}
printf("%d",reve(e+f));

}
int reve(int a)
{
    int r=0;
    while(a!=0)
    {
        r=r*10+(a%10);
        a/=10;
    }
    return r;
}
int cont(int a)
{
    int c=0;
    while(a!=0)
    {
        c++;
        a=a/10;
    }
    return c;
}
