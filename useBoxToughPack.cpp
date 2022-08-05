#include "Box.h"
#include "ToughPack.h"

int main(){
  Box box {20.0,30.0,40.0};
  ToughPack hardcase { 20.0,30.0,40.0};
  box.showVolume();
  hardcase.showVolume();

  std::cout << "hardcore volume is " << hardcase.volume() << std::endl;
  Box *pBox {&hardcase};
  std::cout << "hardcore volume is " << pBox->volume() <<std::endl;


  std::cout << "hardcase volume is " << hardcase.volume() << std::endl;
  Box  *pBox1 {&hardcase};
  std::cout << "hardcase volume through pBox is " << pBox1->volume() << std::endl;
}
