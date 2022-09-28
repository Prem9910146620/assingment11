
void fact();
int main()
{  int i=5;
 fact(i);
 return 0;

}
void fact(int a)
{
    int b,c=1,s;
    for(b=1;b<=a;b++)
    {
    c=c*b;
     s=s+c/b;

    } printf(" %d",s);
}
