#include<stdio.h>

float f(float f,float g){
  float beats[2]={f-g,f+g};
  return beats[1];
}

int main(void){
  printf("%f\n",f(2.0,3.0));
  return 0;
}
