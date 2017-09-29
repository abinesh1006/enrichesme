#include <stdio.h>

int main(void) {
	// your code goes here
	int a;
	scanf("%d",&a);
	char name[100][100];
	char dep[100][100];
	int i;
	for(i=0;i<a;i++)
	{
	    scanf("%s",name[i]);
	    scanf("%s",dep[i]);
	}
	char fin[100];
	scanf("%s",fin);
	for(i=0;i<a;i++)
	{
	    if(strcmp(fin,dep[i])==0)
	    {
	        printf("%s\n",name[i]);
	    }
	}
	return 0;
}

