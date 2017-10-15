#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
  char a[501];
  scanf("%s",a);
  char b[501];
  char ares[501],bres[501];
  scanf("%s",b);
  int i,j;
 int l1=strlen(a);
 int l2=strlen(b);
 for(i=0;i<l1;i++)
 {
     ares[i]=a[l1-1-i];
 }
  ares[l1]='\0';
  for(i=0;i<l2;i++)
  {
      bres[i]=b[l2-1-i];
  }
  bres[l2]='\0';
  for(i=0;i<l1 && i<l2;i++)
  {
      if(ares[i]==bres[i])
      {
          printf("%c",ares[i]);
      }
  }
  
}
