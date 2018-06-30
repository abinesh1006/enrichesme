#include<stdio.h>
#include <stdlib.h>
int checkstring(char[],char[]);
int main()
{
    char str1[100],str2[100];
    scanf("%s\n%s",str1,str2);
    int i=checkstring(str1,str2);
    int j=checkstring(str2,str1);
    if(i==1 && j==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
   
 int checkstring(char str1[],char str2[])
 {
    int i,j,flag=0;
    for(i=0;i<strlen(str1);i++)
    {
        flag=0;
        for(j=0;j<strlen(str2);j++)
        {
            if(str1[i]==str2[j])
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            return 0;
        }
    }
    return 1;
}
