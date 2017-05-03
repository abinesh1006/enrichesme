#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    int i;
    int a=0,b=2;
    int m=0;
    int a1[n1],a2[n2];
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a1[i]);
        if(a1[i]==0)
        {
            a=1;
        }
    }
    for(i=0;i<n2;i++)
    {
        scanf("%d",&a2[i]);
        if(a2[i]==0)
        {
            b=1;
        }

    }
    if(a==b)
    {
      m=0;
    }
    else if((a==1)||(b==1))
    {
        m=1;
    }
    int j;

    for(i=0;i<n1;i++)
    {
        int z=a1[i];
        for(j=0;j<n2;j++)
        {

            if(z==a2[j])
            {
                a1[i]=0;
                a2[j]=0;
            }


        }
        if(a1[i]!=0)
        {
            m++;
        }
    }
    for(i=0;i<n2;i++)
    {

        if(a2[i]!=0)
        {
            m++;
        }
    }

    printf("%d",m);

}
