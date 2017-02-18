#include <stdio.h>
void merge(char [] , int[]);
int main(void) {
	// your code goes here
	
	char a[10];
	int b[10];
	int i;
	for(i=0;i<5;i++)
	{
	    scanf("%s",&a[i]);
    }
	for(i=0;i<5;i++)
	{
	    scanf("%d",&b[i]);
	}
    merge(a,b);
	
	return 0;
}
void merge(char  x[],int y[])
{
    int i=0,j=0;
    int k=0,z=0;
    char c[30]={0};
    while(k<10)
    {
        c[k]=x[i];
        i++;
        k++;
        c[k]=y[j];
        k++;
        j++;
       
    }
    printf("%d\n",k);
    int q;
    for(q=0;q<k;q++)
    
    {   
        if(q%2==0)
        {
        printf("%c",c[q]);
        }
        else{
            printf("%d",c[q]);
        }
    }
    return 0;
}
