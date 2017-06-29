#include<stdio.h>
#include <stdlib.h>

int main()
{
 int a;
    scanf("%d",&a);
    int i,j;
    for(i=0;i<a;i++)
    {
        if(i%2==0)
        {
            printf("*");
            for(j=0;j<i+1;j++)
            {
                printf("%d",j+1);
            }
            printf("\n");
        }
        else
        {
            for(j=i;j>=0;j--)
            {
                printf("%d",j+1);
            }
            printf("*\n");
        }
    }
    

}
