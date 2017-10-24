/*Square Pattern Printing For N
Given N, print the pattern as described in the Example Input/Output.
Input Format:
The first line will contain N.
Output Format:
N lines will contain the required pattern.
Boundary Conditions:
1 <= N <= 50
Example Input/Output 1:
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
#include<stdio.h>
#include <stdlib.h>

int main()
{
  int n;
  scanf("%d",&n);
   long arr[100][100]={0};
  int i,j,k=0;
  for(i=0;i<=n;i++)
  {
      arr[0][i]=k++;
      arr[i][0]=0;
      arr[i][n+1]=0;
  }
  for(i=1;i<n;i++)
  {
      for(j=1;j<=n;j++)
      {
          arr[i][j]=arr[i-1][j-1]+arr[i-1][j+1];
      }
  }
  
  for(i=0;i<n;i++)
  {
      for(j=1;j<=n;j++)
      {
          printf("%li ",arr[i][j]);
      }
      printf("\n");
  }

}
