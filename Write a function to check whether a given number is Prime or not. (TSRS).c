
int main()
{
    int i; printf(" \n yes=1 \n NO=0");
    printf("\n enter the number \n");
    scanf("%d",&i);
    prime(i);
    printf("%d",prime(i));
    return 0;
}
int prime(int a)
{
    int b=2,c;
    for(b;b<a;b++)
    {
       c=a%b;
       if(c==0)
        break;
    } if(c==0)
    return (0);
    else
        return (1);
}
