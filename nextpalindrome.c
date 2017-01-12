#include <stdio.h>
int main()
{
    int n,i,r,s;
    scanf("%d",&n);
    int or=n+1;
    while(1)
    {
        i=or;
        r=0;
        s=0;
        while(i>0)
        {
            r=i%10;
            s=s*10+r;
            i=i/10;
        }
        if(s==or)
        {
            printf("%d",or);
            break;
        }
     or++;
    }
    return 0;

}
