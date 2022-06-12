#include<stdio.h>

int main(void){

#ifdef DEUTSCH
  puts("Hallo,Welt!");
#else
  puts("Hello,World!");
#endif
}

