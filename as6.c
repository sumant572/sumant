#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("D:/as/as5.txt","r");
    int i,count=0;
    char ch[50];
    while(!feof(fp))
    {
        fgets(ch,50,fp);
        printf("%s",ch);
        count++;

    }
    printf("\n%d",count);
    fclose(fp);
}
