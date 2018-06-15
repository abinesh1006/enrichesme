#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%s",a);
    int len=strlen(a);
    int i;
    int j=len-1;
    for(i=0; i<len/2; i++)
    {
        if(a[i]!=a[j])
        {
            if(a[i]==a[j-1] && (i!=j-1))
            {
                printf("%c",a[j]);
                break;
            }
            else
            {
                printf("%c",a[i]);
                break;
            }
        }
        j--;
    }
}
