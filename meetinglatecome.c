#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char a[100];
    scanf("%[^\n]s",a);
    char *token;
    int j=0;
    int i,k=0;
    token=strtok(a," ");
    char res[100][100];
    while(token!=NULL)
    {
        strcpy(res[k++],token);
        token=strtok(NULL," \t");
        j++;
    }
    int d,e,cou=0;
    for(i=0;i<k;i++)
    {
        sscanf(res[i],"%d:%d",&d,&e);
        if(d>=10)
        {
            if(e>0)
            {
                cou++;
            }
            if(e==0 && d>10)
            {
                cou++;
            }
        }
    }
    
    printf("%d",cou);

}
