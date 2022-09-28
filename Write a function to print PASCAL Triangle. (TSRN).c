void pascal(int );

int main()
{
    int n;
   pascal(5);

return 0;
}
 int fact(int a)
{  int b,c=1;
 for(b=1;b<=a;b++)
 { c=c*b;

 } return c;
}
int comb(int n,int r)
{   int b;
 b=fact(n)/(fact(r)*fact(n-r));
    return b;
}

void pascal(int n)
{  int i,j,k,r;
     for(i=0;i<=n;i++)
     {  k=1;
     r=0;
     for(j=0;j<=2*n-1;j++)
         {  if(j>=n+1-i &&j<=n-1+i &&k) {
             printf("%d",comb(i-1,r));
             k=0; r++;
            } else {
                printf(" ");
             k=1;}
        } printf("\n");

     }
     }


