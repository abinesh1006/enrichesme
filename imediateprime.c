#include<stdio.h>
#include <stdlib.h>

int main()
{
  int fla,i,j,a,aa[100000];
  scanf("%d",&a);
  for(i=0;i<a;i++)
  {
      scanf("%d",&aa[i]);
  }
  
  for(i=0;i<a;i++)
  {
      fla=0;
      for(j=i-1;j>=0;j--)
      {
          if(aa[i]<aa[j])
          {
              printf("%d ",aa[j]);
              fla=1;
              break;
          }
          
      }
      if(fla==0)
      {
          printf("%d ",0);
      }
  }

}
