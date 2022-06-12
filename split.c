#include<stdio.h>
#include<stdlib.h>

#define uchar unsigned char
#define uint unsigned short

union split{
  uint word;
  struct {
    uchar hi;
    uchar low;
  }bytes;
};

int main(void){
  union split newcount;
  newcount.bytes.hi=0x12;
  newcount.bytes.low=0x34;
  uint count=newcount.word;
  printf("newcount.word=%04x\n",newcount.word);
  newcount.word=0x4567;
  printf("newcount.bytes.hi(0x67)=%0x\n",newcount.bytes.hi);
  printf("newcount.bytes.low(0x45)=%0x\n",newcount.bytes.low);
  printf("newcount.word=0x%x\n",newcount.word);
  return 0;
}
