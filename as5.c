#include<stdio.h>
int main()
{
    int cmcon=0x00;
    int adcon;
    scanf("%x",&adcon);
    if(adcon==0xf3)
    {
       cmcon=cmcon|(1<<3);
      //cmcon=cmcon|(1<<6);
      cmcon=cmcon|(1<<7);


    }
       printf("%x",cmcon);
}
