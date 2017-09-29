/*//Author: SkillRack
Pattern Printing - Diamond Numbers
Given an integer N as the input, print the pattern as given in the Example Input/Output section.
Input Format:
The first line contains N.
Output Format:
2N-1 lines containing the desired pattern.
Boundary Conditions:
2 <= N <= 50
Example Input/Output 1:
Input:
3
Output:
0 0 1 0 0
0 2 0 8 0
3 0 0 0 7
0 4 0 6 0
0 0 5 0 0
Example Input/Output 2:
Input:
5
Output:
0 0 0 0 1 0 0 0 0
0 0 0 2 0 16 0 0 0
0 0 3 0 0 0 15 0 0
0 4 0 0 0 0 0 14 0
5 0 0 0 0 0 0 0 13
0 6 0 0 0 0 0 12 0
0 0 7 0 0 0 11 0 0
0 0 0 8 0 10 0 0 0
0 0 0 0 9 0 0 0 0
*/






#include<stdio.h>
#include <stdlib.h>

int main()
{
   int a,aa[100][100];
   scanf("%d",&a);
   int i,j,k,m=1,l=(a*4)-4;
   for(i=0;i<2*a-1;i++)
   {
       for(j=0;j<2*a-1;j++)
       {
           if(i<a)
           {
               if(j==a-i-1)
               {
                   aa[i][j]=m++;
               }
               else if(j==a+i-1)
               {
                   aa[i][j]=l--;
               }
           }
           else
           {
               if(j==(i%a)+1)
               {
                  aa[i][j]=m++;
               }
               else if(j==(((2*a)-1)-(i%a)-1)-1)
               {
                   aa[i][j]=l--;
               }
           }
       }
   }
   for(i=0;i<2*a-1;i++)
   {
       for(j=0;j<2*a-1;j++)
       {
           printf("%d",aa[i][j]);
           
       }
       printf("\n");
   }

}
