#include <stdio.h>
#include <string.h>

void main(){
    char str[20];
    int i;
    int k = 0;
    scanf("%s", str);
    int l= strlen(str);
    for(i=0;i < l ;i++)
    {
        if(str[i] != str[l-1-i])
        {
            k = 1;
            break;
        }
	}

    if (k==1) {
        printf("NOT PALINDOME");
    }
    else
    {
        printf("IS PALINDME");
    }

}
