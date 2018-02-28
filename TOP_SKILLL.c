#include<stdio.h>
#include <stdlib.h>

int main()
{
   int a;
   scanf("%d\n",&a);
   int i,j,s=0,test[20],odi[20],t20[20];
   char qw[20][20000];
   char name[20][20000];
   int sum[20000]={0};
   for(i=0;i<a;i++)
   {
       scanf("%s%d%d%d",name[i],&test[i],&odi[i],&t20[i]);
       sum[i]=test[i]+odi[i]+t20[i];
         
   }
   char max[1000];
   int mx=0,maxtest=0,maxodi=0,maxt20=0;
   for(i=0;i<a;i++)
   {
       if(mx<sum[i])
       {
           strcpy(max,name[i]);
           mx=sum[i];
           maxtest=test[i];
           maxodi=odi[i];
           maxt20=t20[i];
       }
       else if (mx==sum[i])
       {
           if(maxtest<test[i])
           {
               strcpy(max,name[i]);
               maxtest=test[i];
               maxodi=odi[i];
               maxt20=t20[i];
           }
           else if(maxtest==test[i])
           {
               if(maxodi<odi[i])
               {
                   strcpy(max,name[i]);
                   maxodi=odi[i];
                   maxt20=t20[i];
                   
               }
               else if (maxodi==odi[i])
               {
                   if(maxt20<t20[i])
                   {
                       strcpy(max,name[i]);
                       maxt20=t20[i];
                   }
               }
           }
       }
   }
   printf("%s",max);

}
