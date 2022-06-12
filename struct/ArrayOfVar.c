#include<string.h>
#include<stdio.h>

void f1(int len; char data[len],int len){
}
FILE *myfopen(char *s1, char *s2, char *mode){
  char file[strlen(s1)+strlen(s2)+1];
  strcpy(file,s1);
  strcat(file,s2);
  return fopen(file,mode);
}

void f(int len, char data[len]){
   for(int i=0;i<len;i++)
     printf("%c\n",data[i]);
   printf("over\n");
   data[0]='X';


}

char mydata[3]={'a','b','c'};
char mydata1[2]={'c','d'};
int main(void){
  f(3,mydata);
  printf("%c\n",mydata[0]);
  f(2,mydata1);
  return 0;
}

