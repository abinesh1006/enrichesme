#include<stdio.h>
#include <stdlib.h>

int main()
{
char a[1000];
char r[1000];
scanf("%[^\n]s",a);
int i=strlen(a);
int j;
for(j=0;j<i;j++)
{
    if((a[j]>=65 && a[j]<=90)||((a[j]<=122) && (a[j]>=122-26)))
    {
        printf("%c",a[j]);
    }
}

}
