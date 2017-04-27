#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    int finalcount=0;
    int i;
    char a[11][100];
    char final[1000000]="";
    char *p=final;
    char res[1000000]="";
    char min;

    for(i=0;i<n;i++)
    {
        scanf("%s",a[i]);
        strcat(res,a[i]);    
    }
    int j;
    min=res[0];
    int len=strlen(res);
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            char temp;
            if(res[i]>res[j])
            {
                temp=res[i];
                res[i]=res[j];
                res[j]=temp;
            }
        }
    }
  
    int count;
    int k=0;
    for(i=0;i<len;i++)
    {
        count=0;
        for(j=i+1;j<len;j++)
        {
            if(res[i]==res[j])
            {
                count++;
                i++;
                if(count%2!=0)
                {
                    finalcount++;
                    final[k++]=res[i];
                    
                  
                }
            }
            
        }
        if(count%2==0)
        {
            if(min>res[i])
            {
                min=res[i];
            }
        }
    }
    final[k]='\0';
    printf("%s",p);
    printf("%c",min);
    printf("%s",strrev(final));
    
}
