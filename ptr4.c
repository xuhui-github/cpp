#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include <stdarg.h>
#include<assert.h>

char*  mstr_chr(char *s,char ch){
  char *p=s;
  while(*p!=ch)p++;
   if(*p=='\0')
    return NULL;
  return p;
}

int  main(int argc,char **argv){
 
  char *p;
  char *sentence="just a test";
  
  p= mstr_chr(sentence,'a');
  assert(p == sentence+5);

  printf("helloworld");
  return 0;
  
}
