#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num;
    int rem;
    int sum=0;
    scanf("%d",&num);

    do{

        rem=num%10;
        sum=sum*10+rem;
        num=num/10;


    }while(num!=0);
    printf("the reverse of the given integer  is %d\n",sum);

}
