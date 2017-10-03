#include<stdio.h>
#include <stdlib.h>

int main()
{
 int a,even,arr[10000],arr1[10000],result[10000];
 scanf("%d",&a);
 int i,j,z=0,k=0,l=0,c=0;
 int count=0;
 while(a!=0)
 {
     c=a%10;
     if(c%2==0)
     {
       arr[k++]=c;  
     }
     else
     {
         arr1[l++]=c;
     }
     a=a/10;
}
sort(arr,k);
sort(arr1,l);
even=arr[k-1];
for(i=0;i<k-1;i++)
{
    result[z++]=arr[i];
}
for(i=0;i<l;i++)
{
    result[z++]=arr1[i];
}
sort(result,z);
for(i=0;i<z;i++)
{
    printf("%d",result[i]);
}
printf("%d",even);
}
void sort(int arr[],int l)
{
    int i,j;
    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(arr[i]<arr[j])
            {
                int te=arr[i];
                arr[i]=arr[j];
                arr[j]=te;
            }
        }
    }
    
}
