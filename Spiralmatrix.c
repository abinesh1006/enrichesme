#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[20][20];
    int i,j;
    int k=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i%2==0)
            {
                a[i][j]=k;
                k=k+1;
            }
            else
            {

                k=((n*i)+n)-j;
                a[i][j]=k;
            }
        }
        k=k+n;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
