#include<iostream>
#include<memory>
#include<vector>
#include "Box.h"
#include "ToughPack.h"
#include "Carton.h"

int main(){
  std::vector<Box> boxes;
  boxes.push_back(Box{20.0,30.0,40.0});
  boxes.push_back(ToughPack{20.0,30.0,40.0});
  boxes.push_back(Carton{20.0,30.0,40.0,"plastic"});
  for(const auto& p : boxes)
    p.showVolume();

  std::vector<std::unique_ptr<Box>> polyboxes;
  polyboxes.push_back(std::make_unique<Box>(20.0,30.0,40.0));
  polyboxes.push_back(std::make_unique<ToughPack>(20.0,30.0,40.0));
  polyboxes.push_back(std::make_unique<Carton>(20.0,30.0,40.0,"plastic"));

  for(const auto& p : polyboxes)
    p->showVolume();
}

