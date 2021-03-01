//
// Created by Marius on 3/1/2021.
//

#ifndef PAIESKA_NAUDOJANT_ZODI_PAIESKA_H
#define PAIESKA_NAUDOJANT_ZODI_PAIESKA_H
#include <iostream>
#include "Asmuo.h"

using namespace std;


class Paieska {
private:
  vector<Asmuo> asmenys;
public:
  Paieska();
  void PridetiNauja(Asmuo asmuo);
  void Ieskoti(string raktinisZodis); // "Naujoji akmene"
};


#endif //PAIESKA_NAUDOJANT_ZODI_PAIESKA_H
