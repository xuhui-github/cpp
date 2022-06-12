#include<stdio.h>

struct foo{
  int a[4];
};

struct foo f={{1,2,3,4}};

int bar(int index){
  return f.a[index];
}

int main(int argc,char **argv){
  printf("%d\n",bar(2));
  return 0;
}
