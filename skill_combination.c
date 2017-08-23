#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,j,i,z=-3;
    scanf("%d%d",&a,&b);
    int arr[a+1],res[a+1];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    arr[a]=0;
    int co=0,c=b/2,cout=0;
    if(b%2==0)
    {
        for(i=0;i<=a;i++)
        {
            if(arr[i]==c)
            {
                co++;
            }
        }
    
    }
    if(co>=2)
    {
        cout=1;
    }
    int k=0;
    for(i=0;i<=a;i++)
    {
        for(j=i+1;j<=a;j++)
        {
            if(arr[i]==arr[j])
            {
                arr[j]=z--;
            }
        }
        if(arr[i]>=0)
        {
            res[k++]=arr[i];
        }
    }
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(res[i]+res[j]==b)
            {
                cout++;
            }
        }
    }
    printf("%d",cout);
    
    
    
    

}
