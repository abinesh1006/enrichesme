#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i=n+1,j,k=0;
    while(i)
    {
        k=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                k=1;
                break;
            }
        }
        if(k==0)
        {
            printf("%d",i);
            break;
        }
        i++;
    }
    return 0;

}
