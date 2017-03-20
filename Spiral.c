spiral#include <stdio.h>
#include <stdlib.h>
void printspiral(int);
int main()
{
    int n;
    scanf("%d",&n);
    printspiral(n);
    return 0;
}
void printspiral(int n)
{
    int i,j;
    int k=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i%2==0)
            {
                printf("%d\t",k);
                k=k+1;
            }
            else
            {
                k=((n*i)+n)-j;
                printf("%d\t",k);
            }
        }
        k=k+n;
        printf("\n");
    }
    return 0;
}
