#include <stdio.h>
#include <stdlib.h>
int dayfinder(int,int,int);
int check(int a,int b,int c);
void oddday(int);
struct get{
    int date;
    int month;
    int year;
};
int main()
{
    struct get userdate;
    int flag=0;
    printf("enter dates day year in format dd-mm-yyyy\n");
    if(scanf("%d-%d-%d",&userdate.date,&userdate.month,&userdate.year)!=3)
    {
        printf("invalid format");
        flag=1;
    }
    if(flag==0)
    {
        int x=check(userdate.date,userdate.month,userdate.year);
        if(x==1)
        {
            int s=dayfinder(userdate.date,userdate.month,userdate.year);
            print(s);
        }
    }
}
int check(int a,int b,int c)
{
    int f=1;
    if(b>12){
        printf("Invalid");
        f=0;}
    if(f==1){
        
    int x=checkmonth(b,c);
    if((a<=x)&&a>=1)
    {
        return 1;
    }
    else{
        printf("Invalid");
        return 0;
    }}

}
int dayfinder(int a,int b,int c)
{
    int s=odddayyear(c)+odddaymonth(b,c)+odddayday(a);
    s=s%7;
    return s;

}
int odddayyear(int x)
{
    x=x-1;
    x=x%400;
    int z=0;
    z=x/100;
    z=(z*5)%7;
    x=(x%100);
     z+=((2*(x/4))+(x-(x/4)))%7;
    return z;
}
int odddayday(int x)
{
    return x%7;

}
int odddaymonth(int x,int y)
{
    x=x-1;
    int a[13]={3,0,3,2,3,2,3,3,2,3,2,3};
    int sum=0;
    int i;
        for(i=0;i<x;i++)
        {
            sum=sum+a[i];
        }
    if(checkleap(y)==29)
    {
        sum++;
    }

    return sum;
}
void print(int x)
{
    char *a;
    switch(x+1)
    {
    case 2:
     {
         a="monday";
        break;
    }
    case 3:
        {
        a="Tuesday";
        break;
    }
    case 4:
        {
            a="Wednesday";
            break;
        }
    case 5:
        {

            a="Thursday";
            break;

        }
    case 6:
        {

            a="Friday";
            break;
        }
        case 7:{
            a="Saturday";
            break;

        }
        case 1:
            {
        a="Sunday";
        break;}
    }
    printf("%s",a);
}
int checkmonth(int b,int c){
    switch(b)
    {
    case 1:{return 31;break;}
        case 2:{
            int x=checkleap(c);
            return x;
            break;
            }
            case 3:{return 31;break;}
                case 4:{return 30;break;}
                    case 5:{return 31;break;}
                        case 6:{return 30;break;}
                            case 7:{return 31;break;}
                                case 8:{return 31;break;}
                                    case 9:{return 30;break;}
                                        case 10:{return 31;break;}
                                            case 11:{return 30;break;}
                                                case 12:{return 31;break;}
    }

}
int checkleap(int x)
{
    if(x%4==0)
    {
        if((x%400==0)||(x%100!=0))
        return 29;
    }
    else{
        return 28;
    }
}
