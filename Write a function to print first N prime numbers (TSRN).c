void nprime();
int main()
{
    int i;
    printf("enter the number");
    scanf("%d",&i);
    nprime(i);
    return 0;
}
void nprime(int a)
{  int b,c,d=0;
    for(b=2;b;b++)
    {    c=2;
        for(c;c<b;c++)
        { if(b%c==0)
            break;
        } if(c==b)
          { d++;
        printf(" %d",c);
          }
        if(d==a)
            break;
    }
}
