#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n=0;
    int a[10000];
    scanf("%d",&a[n++]);
    char b;
    int sum=0;
    while(b!='\n')
    {
        scanf("%d",&a[n++]);
        scanf("%c",&b);
    }
    int i;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
    

}
