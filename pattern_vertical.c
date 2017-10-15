/*Based on the input value of N, the program must print the pattern described below.
Input Format:
First line will contain the value of N.
Output Format:
N lines will contain the number pattern as described below with each value separated by a single space.
Boundary Conditions:
1 <= N <= 50
Example Input/Output 1:
Input:
5
Output:
1 6 10 13 15
2 7 11 14
3 8 12
4 9
5
Example Input/Output 2:
Input:
3
Output:
1 4 6
2 5
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[50][50];
    int i,j;
    int m=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(i==0)
            {
                a[i][j]=m;
                m=m+n-j;
            }
            else
            {
                a[i][j]=a[i-1][j]+1;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    

}
