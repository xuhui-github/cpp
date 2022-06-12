#include<iostream>
#include<vector>


int array[5]={1,2,3,4,5};
int *ptr;

int main(void){
  ptr=array;
  while((*ptr)!=5)
    ++ptr;
  std::cout<<"Number of element before five "<<(ptr-array)<<std::endl;
  return 0;
}

