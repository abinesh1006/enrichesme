#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10];
    int b[10];
    int i,j=1,n,l=1,k=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==a[j])
           {
              b[l]=j;
              printf("%d",b[l]);
              l++;
              break;
            }
        }

    }
    for(i=1;i<=n;i++)
    {
      if(a[i]!=b[i])
         {
            printf(" not ambiguos ");
                k=1;
                break;

         }
    }
    if(k==0)
    {
        printf(" ambiguos");
    }

    return 0;
}
