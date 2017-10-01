int main(int args,char **argv)
{
    int a=atoi(argv[1]),s;
    for(s=0;a!=0;a=a/10)
    {
        s=s+a%10;
    }
    printf("%d",s);
}
