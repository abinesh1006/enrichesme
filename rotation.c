#include<stdio.h>
int main()
{
    int num;
    int n_rotate;
    int res=1;
    int rotated;
    int count=0;
    scanf("%d%d",&num,&n_rotate);
    int a=num;
    if(num<0)
    {
        num*=-1;
    }

     while(num>0)
    {
        num=num/10;
        count++;
    }
    while(count-1>0)
    {
        res*=10;
        --count;
    }
    if(n_rotate==0)
    {
        rotated=a;
    }
    else if(n_rotate<0)
    {

        printf("enter valid number to rotate");
    }
    else{

        while (n_rotate>0)
        {
            rotated=((a%10)*(res))+a/10;
            a=rotated;
            n_rotate--;
        }
    }
    printf("%d",rotated);


}
