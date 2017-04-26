#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char b;
    int arr[100];
    scanf("%d",&arr[0]);
    int i;
    scanf("%c",&b);
     i=0;
     int x,y;
    while(b!='\n')
    {
        scanf("%d",&arr[++i]);
        scanf("%c",&b);
    }
     x=arr[i-1];
     y=arr[i];
    i=i-2;
    int j;
    int sum=0;
    for(j=0;j<=i;j++)
    {
        if(arr[j]%2==0)
        {
            sum=sum+x;
        }
        else{
            sum=sum-y;
        }
    }
    printf("%d",sum);


}
