#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char a[1000];
    char b[100];
    scanf("%[^\n]s",a);
    scanf("%s",b);
    char *token;
    token=strtok(a," ");
    int pos=atoi(b);
    int arr[10000];
    int j=0;
    int i;
    while(token!=NULL)
    {
        arr[j]=atoi(token);
        token=strtok(NULL," \t");
        j++;
    }
    int temp;
    temp=arr[pos-1];
    arr[pos-1]=arr[j-pos];
    arr[j-pos]=temp;
    for(i=0;i<j;i++)
    {
        printf("%d",arr[i]);
    }
    

}
