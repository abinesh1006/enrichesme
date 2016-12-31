#include<stdio.h>
int main()
{
    int a[20],m,c,i,count=0;
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
         scanf("%d",&a[i]);
    }
    printf("enter search elmen t");
    scanf("%d",&c);
    for(i=0;i<m;i++)
     {
          if(c==a[i])
          {
              count++;
          }
     }
        printf("%d times",count);
}
