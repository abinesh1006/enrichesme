#include<stdio.h>
int main()
{
    int num;
    int a[10];
    int i=0;
    int j,k;
    int temp;
    int result=0;
    scanf("%d",&num);
    while(num>0)
    {

        a[i]=num%10;
        num=num/10;
        i++;
    }
    for (j = 0 ; j <  i ; j++)
    {
        for (k = j+1 ; k < i; k++)
        {
            if (a[j] > a[k])
            {
                temp= a[j];
                a[j]   = a[k];
                a[k] = temp;
            }
        }
    }
    for(j=0;j<i;j++)
    {
        result=result*10+a[j];
    }
    printf("%d",result);



}
