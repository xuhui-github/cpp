#include<iostream>
#include<assert.h>

int array[10]={3,4,5,2,5,2,7,9,0,5};
int index;

int main(){
  index=0;
  while(true){
    assert(index>=0);
    assert(index<sizeof(array)/sizeof(array[0]));
    if(array[index]==9)
      break;
    ++index;
  }
  std::cout<<"Number of elements before nine "<<index<<std::endl;
  std::cout<<"exit 0 "<<std::endl;
  return 0;
}
