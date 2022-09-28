
void allprime();
int main()
{
    int i,j;
    printf("enter two number ");
    scanf("%d%d",&i,&j);
    allprime(i,j);
    return 0;
}
void allprime(int a,int b)
{ int c;
   for(a++;a<b;a++)
   {   c=2;
   for(c;c<a;c++)
   {

       if(a%c==0)
        break;
   } if(c==a)
   printf(" %d",c);

   }

}
