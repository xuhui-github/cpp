#include<stdio.h>
#include "myfile.h"

int main(void){
  int i=1;
  int j=2;

  printf("%d %d\n",i,j);
  swap(&i,&j);
  printf("%d %d\n",i,j);

  return 0;
}
