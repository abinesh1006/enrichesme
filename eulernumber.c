#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int i,j;
    int a[100][100]={0};
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for (j=0;j<i;j++)
        {
            if(j==0 || j==n-1 )
            {
                a[i][j]=1;
            }
            else
            {
                a[i][j]=((i-j)*a[i-1][j-1]+(j+1)*a[i-1][j]);
            }
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
