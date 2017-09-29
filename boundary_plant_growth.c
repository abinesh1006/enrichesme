#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,i,j,k;
	scanf("%d %d",&a,&b);
	int arr[a][b];
	for(i=0;i<a;i++)
	{
	    for(j=0;j<b;j++)
	    {
	        scanf("%d",&arr[i][j]);
	    }
	}
	int rate,mo;
	scanf("%d %d",&rate,&mo);
	
	    for(i=0;i<a;i++)
	    {
	        for(j=0;j<b;j++)
	        {
	            if(i==0 || j==0 || i==a-1 || j==b-1)
	            {
	                arr[i][j]+=(rate*2)*mo;
	             }
	             else
	             {
	                 arr[i][j]+=rate*mo;
	             }
	    }
	}
	for(i=0;i<a;i++)
	{
	    for(j=0;j<b;j++)
	    {
	        printf("%d",arr[i][j]);
	    }
	     printf("\n");
	}
	
	
	return 0;
}

