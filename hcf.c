#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        int t=a;
        a=b;
        b=t;
    }
    int c;
    while(c!=0){
        c=a%b;
        a=b;
        b=c;
    }
    printf("%d",a);
    
}
