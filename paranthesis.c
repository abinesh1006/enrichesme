#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char ne[1001];
    scanf("%s",ne);
    int i,j=0;
    int len=strlen(ne);
    char res[10000];
    char a[1001];
    int c1=0;
    int c2=0;
    int min;
    for(i=0;i<len;i++)
    {
        if(ne[i]=='(')
        {
            c1++;
        }
        if(ne[i]==')')
        {
            c2++;
        }
        if(c2>c1)
        {
            if(ne[i]!=')')
            {
                a[j]=ne[i];
                j++;
            }
        }
        else{
            a[j]=ne[i];
            j++;
        }
    }
    a[j]='\0';
     c1=0;
    c2=0;
    len=strlen(a);
    for(i=0;i<len;i++)
    {
        if(a[i]=='(')
        {
            c1++;
        }
        if(a[i]==')')
        {
            c2++;
        }
    }
    int k=0;
    if(c1>c2)
    {
        for(i=len-1;i>=0;i--)
        {
            if(c1==c2)
            {
                res[k]=a[i];
                k++;
            }
            
            if(c1!=c2)
            {
                if(a[i]!='(')
                {
                    res[k]=a[i];
                    k++;
                }
                if(a[i]=='(')
                {
                    c1--;
                }
            }
        }
            
    }
    else
    {
        for(i=len-1;i>=0;i--)
        {
            if(c2==c1)
            {
                res[k]=a[i];
                k++;
            }
            if(c1!=c2)
            {
                if(a[i]!=')')
                {
                    res[k]=a[i];
                    k++;
                }
                if(a[i]==')')
                {
                    c2--;
                }
            }
        }
    }
    res[k]='\0';
    int l1=strlen(res);
    for(i=l1-1;i>=0;i--)
         {
             printf("%c",res[i]);
         }
}
