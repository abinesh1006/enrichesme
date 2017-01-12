#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ori=n;
    int i,j,k;
    for (i=1;i<=ori;i++)
    {
        for(j=1;j<n;j++)
        {
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)
        {
            if(k%2!=0)
            {
                printf("*");
            }
            else if(k%2==0)
            {
                printf(" ");
            }
        }
        n--;
        printf("\n");
    }
    return 0;
}
