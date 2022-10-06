#include<stdio.h>
int main()
{
    FILE *fp1=NULL;
    fp1=fopen("D:/as/as5.txt","r");
    FILE *fp2=NULL;
    fp2=fopen("D:/as/as6.txt","w");
    char ch[50];
    while(!feof(fp1))
    {
        fgets(ch,50,fp1);
        fputs(ch,fp2);

    }
    fclose(fp1);
    fclose(fp2);
}

