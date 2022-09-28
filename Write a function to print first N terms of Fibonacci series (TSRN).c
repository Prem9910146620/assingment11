void fibonacci();
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}
void fibonacci(int n)
{
    int a=-1,b=1,c,i;
    for(i=1;i<=n;i++)
    { c=a+b;
    printf(" %d",c);
    a=b;
    b=c;

    }
}
