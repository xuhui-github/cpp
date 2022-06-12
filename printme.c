#include<stdio.h>
#include<limits.h>

int main(void){
  unsigned long ul=LONG_MAX;
  short int si=SHRT_MIN;

  printf("%d\n",ul);
  printf("%ds\n",si);

  return 0;
}
