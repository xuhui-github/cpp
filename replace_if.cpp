#include<algorithm>
#include "data.hpp"
#include "intrange.hpp"
#include<unistd.h>


int main(){
  intvector data{};
  read_data(data);
  write_data(data);
  std::replace_if(data.begin(),data.end(),intrange{10,20},0);
  write_data(data);
}
