#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],b[100];
    int j,i=0,aw=0,bw=0;
    while((scanf("%d",&a[i]))>0)
    {
        i++;
    }
    for(j=0;j<i/2;j++)
    {
        if(a[j]>a[j+i/2])
        {
            aw=aw+3;
            
        }
        else if(a[j]==a[j+i/2])
        {
            aw++;
            bw++;
        }
        else
        {
            bw=bw+3;
        }
           }
    printf("%d%d",aw,bw);
}
	return 0;
}

