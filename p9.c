void sort(int n,int*ptr)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(ptr+j)<*(ptr+i))
            {
                temp=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=temp;

            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",*(ptr+i));
}
int main()
{
    int n=5;
    int a[]={0,45,13,11,8};
    sort(n,a);
    return 0;
}
