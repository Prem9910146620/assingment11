
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
    for(c;c>0;c--)
    {
      if(c%a==0&&c%b==0)
      break;
    }
    return c;
}
