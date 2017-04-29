#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void rotate(int *x,int *y,char a,int b);
int main()
{
	int x,y;
	int *p1=&x;
	int *p2=&y;
	scanf("%d %d\n",&x,&y);
	char ch[201];
	char b;
	int i=0;
	int nu[201];
	char num[201];
	scanf("%c",&ch[i]);
	scanf("%c",&num[i]);
	nu[0]=num[i]-'0';
	scanf("%c",&b);
	while(b>=48 && b<=57)
	{
		nu[0]=nu[0]*10+(b-'0');
		scanf("%c",&b);
	}
	while(b!='\n')
	{
		scanf("%c",&ch[++i]);
		scanf("%c",&num[i]);
		nu[i]=num[i]-'0';
		scanf("%c",&b);
		while(b!=' ')
		{
			
			if(b=='\n')
			{
				break;
			}
			nu[i]=nu[i]*10+(b-'0');
			scanf("%c",&b);
		}
	}
	int n;
	for(n=0;n<=i;n++)
	{
		rotate(p1,p2,ch[n],nu[n]);
		

	}
	printf("%d",x);
	printf("%d",y);
}
void rotate(int *p1,int *p2,char a,int b)
{
	switch(a){
		case 'E':
			{

				*p1=*p1+b;
				break;
			}
			case 'W':
				{
					*p1=*p1-b;
					break;
				}
			case 'N':
				{
					*p2=*p2+b;
					break;
				}
				case 'S':
					{
						*p2=*p2-b;
						break;
					}
				
	}

}
