#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10];
    int total,num,i,j,k=0;
    printf("total array elements");
    scanf("%d",&total);
    for (i=0;i<total;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number ");
    scanf("%d",&num);
    for(i=0;i<total;i++)
    {
        for(j=i;j<total;j++)
        {
            if(a[j]<a[i])
            {
                int t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
	}
    for(i=0;i<total;i++)
    {
       if(a[i]==num)
       {
            printf("%d",i);
            k=1;
        }
    }
    if(k==0)
    {
        printf("not found");
    }
    return 0;
}
