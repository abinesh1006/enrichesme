#include <stdio.h>
int main()
{
    int i=0,j=0;
    int n;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for( j=0;j<i;j++)
        {
            if(j==0 || j==i-1)
            {
                printf("%d",1);
            }
            else
            {
                printf("%d",i);
            }
        }
        printf("\n");
    }
    return 0;
}
