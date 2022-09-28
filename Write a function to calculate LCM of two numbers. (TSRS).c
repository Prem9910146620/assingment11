int lcm();
int main()
{
    int x,y;
    printf("enter two number \n");
    scanf("%d%d",&x,&y);
    lcm(x,y);
    printf(" lcm is %d",lcm(x,y));
    return 0;
}
int lcm(int a,int b)
{
    int c=a>b?a:b;
    for(c;c<=a*b;c++)
    {
      if(c%a==0&&c%b==0)
      break;
    }
    return c;
}
