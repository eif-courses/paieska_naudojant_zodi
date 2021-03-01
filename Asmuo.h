//
// Created by Marius on 3/1/2021.
//

#ifndef PAIESKA_NAUDOJANT_ZODI_ASMUO_H
#define PAIESKA_NAUDOJANT_ZODI_ASMUO_H
#include <iostream>
#include <vector>
using namespace std;


class Asmuo {
private:
  string vardas;
  string pavarde;
  string miestas;
public:
  Asmuo(const string &vardas, const string &pavarde, const string &miestas);

  const string &GetVardas() const;

  const string &GetPavarde() const;

  const string &GetMiestas() const;

  string GetAdresas();
};


#endif //PAIESKA_NAUDOJANT_ZODI_ASMUO_H
