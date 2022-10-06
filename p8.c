int swap_endian(int value)
{
    int leftmost_byte;
    int leftmiddle_byte;
    int rightmiddle_byte;
     int rightmost_byte;
     int result;

     leftmost_byte=(value & 0x000000FF)>>0;
     leftmiddle_byte=(value & 0x0000FF00)>>8;
      rightmiddle_byte=(value & 0x00FF0000)>>16;
       rightmost_byte=(value & 0xFF000000)>>24;

       leftmost_byte<<=24;
       leftmiddle_byte<<=16;
       rightmiddle_byte<<=8;
       rightmost_byte<<=0;
       result=(leftmost_byte|leftmiddle_byte|rightmiddle_byte|rightmost_byte);
       return result;
}

int main()
{
    int big_e=0x12345678;
    int little_e=0x78563412;
    int res1,res2;
    res1=swap_endian(big_e);
     res2=swap_endian(little_e);
     printf("big endian to little: 0x%x\nlittle endian to big:0x%x\n",res1,res2);
     return 0;

}
