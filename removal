#include <stdio.h>
void main()
{
    char s[100],s2[100];
    int i=0,k=0,l=0;
    scanf("%[^\n]s",s);
    int j=strlen(s);
    char delq[]={'a','e','i','o','u','A','E','I','O','U',' '};
    int ar=strlen(delq);
    for(i=0;i<j;i++)
    {
        int flag=1;
        for(k=0;k<ar;k++)
        {
            if(s[i]==delq[k])
            {
                flag=0;
                break;
            }

        }
        if(flag==1)
        {
            s2[l]=s[i];
            l++;
        }
    }
    s2[l]='\0';
    printf("%s",s2);
}
