#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10];
    int total,num,i,k=0;
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
       if(a[i]==num)
       {
            printf("%d",i);
            k=1;
            break;
        }
    }
    if(k==0)
    {
        printf("not found");
    }
    return 0;
}
