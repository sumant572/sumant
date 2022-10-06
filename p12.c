#include<stdio.h>
int setbit(int n,int k)
{
    return(n | (1<<(k-1)));

}
int clearbit(int n,int k)
{
    return(n &(~(1<<(k-1))));
}
int togglebit(int n,int k)
{
    return(n^(1<<(k-1)));
}
int main()
{
    int n=5,k=1;
    printf("%d with %d th bit set %d\n",n,k,setbit(n,k));
    printf("%d with %d th bit cleared %d\n",n,k,clearbit(n,k));
    printf("%d with %d th bit toggled %d\n",n,k,togglebit(n,k));
    return 0;
}
