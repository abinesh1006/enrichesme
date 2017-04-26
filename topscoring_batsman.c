#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i=0;
    char name[100][100];
    char *pch[100];
    char *sc[100];
    int sco[100];
    for(i=0;i<n;i++)
    {
        scanf("%s",name[i]);
    
    }
    
    for(i=0;i<n;i++)
    {
        pch[i]=strtok(name[i],",");
        sc[i]=strtok(NULL," ");
        sco[i]=atoi(sc[i]);
    }
    int max=sco[0];
    int m=0;
    for(i=1;i<n;i++)
    {
        if(max<sco[i])
        {
            max=sco[i];
            m=i;
        }
    }
    printf("%s",pch[m]);
    return 0;

}
