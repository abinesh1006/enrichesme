   
/**
 
 * Please write your code in this editor. 
 * Operational instructions
 * 1) Press F5 If you don't see your saved code
 * 2) You can change the font, background, foreground of this editor by clicking on the right hand side bottom
 * 4) Prefer Google Chrome (version 25 or above) or Firefox (version 21 or above)
 */
      #include<stdio.h>
      #include<string.h>
      int main()
      {
          char a[100000];
          int CHECKFLAG=0;
          int test;
          scanf("%d",&test);
          while(test--){
          scanf("%s",a);
          char res[100000];
          int l=strlen(a);
          int i,k=0,flag=0;
          for(i=0;i<l;i++)
          {
              
              if(a[i]=='@' && a[i+1]=='*')
              {
                  flag=1;
              }
              if(a[i]=='*' && a[i+1]=='@')
              {
                  flag=0;
              }
              if(flag==0 && a[i]!='*' && a[i]!='@')
              {
                  res[k++]=a[i];
              }
              
          }
          int b=0,c=0;
          
          for(i=0;i<k;i++)
          {
           if(res[i]=='('   || res[i]=='{' || res[i]=='[')
           
           {
               b++;
          }
          if(res[i]==')' || res[i]=='}' || res[i]==']')
          {
           c++;   
          }
          if(c>b)
          {
              printf("False\n");
              CHECKFLAG=1;
              break;
          }
      }
      if(CHECKFLAG!=1){
         if(c!=b)
          {
          printf("False\n");
          CHECKFLAG=1;
         }
      }
      if(CHECKFLAG==0)
      {
          printf("True\n");
      }
    }
      }
        
