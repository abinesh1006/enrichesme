#include <stdio.h>
#include<string.h>

int main(void) {
	// your code goes here
	char a[10000],res[10000];
	scanf("%s",a);
	int l=strlen(a);
	int i,flag=0,k=0,ch=0;
	for(i=0;i<l;i++)
	{
		if(a[i]=='@' && a[i+1]=='*')
		{
			flag=1;
		}
		if(flag==1)
		{
			if(a[i]=='*' && a[i+1]=='@')
			{
				i=i+2;
				flag=0;
			}
		
		}
		if(flag==0)
		{
			res[k++]=a[i];
		}
	}
	int open[6]={0};
	int close[6]={0};
	for(i=0;i<k;i++)
	{
		switch(res[i])
		{
			case '(':
			open[0]++;
			break;
			case '{':
			open[1]++;
			break;
			case '[':
			open[2]++;
			break;
			case '<':
			open[3]++;
			break;
			case '/':
			open[4]++;
			break;
			case ')':
			close[0]++;
			break;
			case '}':
			close[1]++;
			break;
			case ']':
			close[2]++;
			break;
			case '>':
			close[3]++;
			break;
			case '\\':
			close[4]++;
			break;
		}
	}
	for(i=0;i<5;i++)
	{
		if(open[i]!=close[i])
		{
			printf("UNBALANCED");
			ch=1;
			break;
		}
	}
	if(ch==0)
	{
		printf("Balanced");
	}
	
	return 0;
}
