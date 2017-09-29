#include<stdio.h>
void printSquare(int N)
{
    int a=1;
    while(a*a<=N)
    {
        printf("%d ",a*a);
        a++;
    }
}
int main()
{
  int N;
  scanf("%d",&N);
  printSquare(int N);
}
