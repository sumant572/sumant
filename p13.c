#include<stdio.h>
int main()
{
    int i;
    FILE *fp;
    fp=fopen("D:/as/p12.txt","r+");
    //int i=9;
    //float y=2.2;
    char ch[50];
  // ch= fgetc(fp);
   //for(int i=0;i<5;i++)
   while(!feof(fp))
   {
       fgets(ch,50,fp);
       printf("%s",ch);
   }
    /*if(fp=='\0')
    {
        printf("error");
    }*/
    fclose(fp);
}


