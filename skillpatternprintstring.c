#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char a[1002];
    scanf("%s",a);
    int l=strlen(a);
    int i,j;
    int mid=l/2;
    for(i=0;i<l;i++)
    {
        int k=mid;

        for(j=0;j<l;j++)
        {

            if(j<l-1-i)
            {
                printf("%c",'*');
            }
            else
            {
			         	k=k%l;
                printf("%c",a[k++]);
            }
        }
        printf("\n");
    }


}
