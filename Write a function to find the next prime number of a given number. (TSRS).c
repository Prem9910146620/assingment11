int nextprime();
int main()
{
    int i;
    printf("enter the number");
    scanf("%d",&i);
    nextprime(i);
    printf("%d",nextprime(i));
    return 0;
}
int nextprime(int a)
{  int c;
 for(a++;a;a++)
 { c=2;
  for(c;c<a;c++)
  {    a%c;
      if(a%c==0)
        break;
  }
  if(c==a)
  break;
 }
 return c;
}
