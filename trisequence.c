#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,tr=0;
    int a=1;
    for(i=0;i<n;i++)
    {
        tr=tr+a;
        a++;
        printf("%d\t",tr);
    }
    return 0;
}
