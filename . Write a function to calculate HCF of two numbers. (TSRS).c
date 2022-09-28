
int hcf();
int main()
{
    int x,y;
    printf("enter two number \n");
    scanf("%d%d",&x,&y);
    hcf(x,y);
    printf(" hcf is %d",hcf(x,y));
    return 0;
}
int hcf(int a,int b)
{
    int c=a<b?a:b;
    for(c;c<=a*b;c--)
    {
      if(a%c==0&&b%c==0)
      break;
    }
    return c;
}
