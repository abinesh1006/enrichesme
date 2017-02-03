#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a[10],res[10];
    int total,num,i,j=0;
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
        if(num==a[i])
        {
            res[j]=i;
            j++;
        }
    }
    int k=j;
    for(j=0;j<k;j++)
    {
        printf("%d",res[j]);
    }

    return 0;
}
