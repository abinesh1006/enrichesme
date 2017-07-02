#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,j;
    scanf("%d",&a);
    char rrr[a][101];
    char temp[100];
    for(i=0;i<a;i++)
    {
        scanf("%s",rrr[i]);
    }
    for(i=0;i<a;i++)
    {
        for(j=i+1;j<a;j++)
        {
            if(strcmp(rrr[i],rrr[j])<0)
            {
                strcpy(temp,rrr[i]);
                strcpy(rrr[i],rrr[j]);
                strcpy(rrr[j],temp);
            }
        }
    }
    for(i=0;i<a;i++)
    {
        printf("%s ",rrr[i]);
    }

}
