int main()
{

    int a,b,c,sum;
    printf("enter the values of a,b ,c");
    scanf("%d\n%d\n%d",&a,&b,&c);
    sum=a+b+c;
    if(a==b && b==c && c==a)
   {
        printf("0");
    }
    else if(a!=b && b!=a && a!=c)
    {
        printf("%d",sum);
    }
  else if(a==c || b==c || c==a)
    {
        printf("2");
    }
}
