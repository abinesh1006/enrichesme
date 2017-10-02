int main(int a,char **b)
{
    int n=atoi(b[1]),rev=0;
    for(rev=0;n!=0;n/=10)
    {
        rev=rev*10+n%10;
    }
    printf("%d",rev);
}
