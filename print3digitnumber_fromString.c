#include<stdio.h>
#include <stdlib.h>

int main()
{
    char a[99999];
    scanf("%s",a);
    int len=strlen(a);
    char res[5];
    int i,flag=0;
    int k=0;
    for(i=0;i<len;i++)
    {
        
        if(a[i]>=48 && a[i]<=57)
        {
            res[k]=a[i];
            k++;
        }
        else
        {
            k=0;
            *res=NULL;
        }
        if(k==3 && (!(a[i+1]>=48 && a[i+1]<=57)))
        {
            res[k++]='\0';
            printf("%s ",res);
            flag=1;
            k=0;
            *res=NULL;
        }
    }
    if(flag==0)
    {
        printf("%d",-1);
    }

}
