//
// Created by Marius on 3/1/2021.
//

#include "Asmuo.h"

Asmuo::Asmuo(const string &vardas, const string &pavarde, const string &miestas) : vardas(vardas), pavarde(pavarde),
                                                                                   miestas(miestas) {}

const string &Asmuo::GetVardas() const {
  return vardas;
}

const string &Asmuo::GetPavarde() const {
  return pavarde;
}

const string &Asmuo::GetMiestas() const {
  return miestas;
}

string Asmuo::GetAdresas() {
  return std::__cxx11::string();
}
