int main()
{
    int a[]={1,4,45,6,50,10,2};
    int n=sizeof(a)/sizeof a[0];
    printf("%d",min(n));
}
int min(int a[],int n)
{
    if (n==1)
        return a[0];
    return min(a[n-1],min(a,n-1));
}
