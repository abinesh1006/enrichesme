#include<stdio.h>
#include <stdlib.h>
struct ai{
    int num;
    int ind;
};

int main()
{
int a;
struct ai ar[2000];
struct ai k;
scanf("%d",&a);
int i;
int index[10];
int array[1000];
for(i=0;i<a;i++)
{
    scanf("%d",&ar[i].num);
    array[i]=ar[i].num;
}
int j;
for(i=0;i<a;i++)
{
 ar[i].ind=co(ar[i].num,array,a);   
}
for(i=0;i<a;i++)
{
    for(j=i+1;j<a;j++)
    {
        if(ar[i].ind<ar[j].ind)
        {
             k=ar[i];
            ar[i]=ar[j];
            ar[j]=k;
        }
        else if(ar[i].ind==ar[j].ind)
        {
            if(ar[i].num>ar[j].num)
            {
                k=ar[i];
                ar[i]=ar[j];
                ar[j]=k;
            }

        }
    }
}
for(i=0;i<a;i++)
{
    array[i]=ar[i].num;
}
prit(array,a);



}
int co(int num,int a[],int l)
{
    int c=0;
    int i;
    for(i=0;i<l;i++)
    {
        if(num==a[i])
        {
            c++;
        }
    }
return c;
    
}
void prit(int a[],int size)
{
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(a[i]==a[j])
            {
                a[j]=-1;
            }
        }
    }
    for(i=0;i<size;i++)
    {
        if(a[i]!=-1)
        {
            printf("%d",a[i]);
        }
    }
}
