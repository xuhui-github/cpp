#include<random>
#include<iostream>

int main(){
  std::random_device rd;
  for(size_t n {}; n <8;n++)
    std::cout << rd() << " ";
  std::cout << std::endl;
}

