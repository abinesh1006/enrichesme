#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char min;
    scanf("%d",&n);
    int i;
    char a[11][100];
    char res[1000000]="";

    for(i=0;i<n;i++)
    {
        scanf("%s",a[i]);
        strcat(res,a[i]);    
    }
    int j;
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
    printf("%s\n",res);
    printf("\n%d\n",len);
    int count;
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
                    printf("%c",res[i]);
                }
            
            }
            if(count%2==0)
            {
                min=res[i];
                if(min>res[i])
                {
                    min=res[i];
                }
            }
            
        }
    }
    printf("%c",min);
    
}
