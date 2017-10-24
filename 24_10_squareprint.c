
#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k=1;
    scanf("%d",&n);
    long a[52][52]={0};
    for(i=0;i<n;i++)
    {
        for(j=1;j<=n;j++)
        {
            a[i][j]= i==0 ? k++ : a[i-1][j-1]+a[i-1][j+1];
            printf("%li ",a[i][j]);
        }
        printf("\n");
    }

}
/*
Input:
5
Output:
1 2 3 4 5
2 4 6 8 4
4 8 12 10 8
8 16 18 20 10
16 26 36 28 20
Example Input/Output 2:
Input:
4
Output:
1 2 3 4
2 4 6 3
4 8 7 6
8 11 14 7 */
