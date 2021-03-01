//
// Created by Marius on 3/1/2021.
//

#include "Paieska.h"

#include <cstdio>
#include <cctype>
#include<bits/stdc++.h>

void Paieska::PridetiNauja(Asmuo asmuo) {
  asmenys.emplace_back(asmuo);
}

void Paieska::Ieskoti(string raktinisZodis) {

  int kiekRasta = 0;

  vector<int> rastiAsmenys;

  transform(raktinisZodis.begin(), raktinisZodis.end(), raktinisZodis.begin(), ::tolower);

  for (int i = 0; i < asmenys.size(); ++i) {

    string vardas = asmenys[i].GetVardas();
    string pavarde = asmenys[i].GetPavarde();
    string miestas = asmenys[i].GetMiestas();

    transform(vardas.begin(), vardas.end(), vardas.begin(), ::tolower);
    transform(pavarde.begin(), pavarde.end(), pavarde.begin(), ::tolower);
    transform(miestas.begin(), miestas.end(), miestas.begin(), ::tolower);

    if (raktinisZodis ==  vardas || raktinisZodis == pavarde || raktinisZodis == miestas) {
      kiekRasta++;
      rastiAsmenys.emplace_back(i);
    }
  }

  if(kiekRasta == 0){
    cout << "nerastas nei vienas asmuo pagal raktinizodi!"<< endl;
  }
  else if(kiekRasta == 1){
    int indeksas = rastiAsmenys[0];
    cout << "rastas indeksas toks: " << indeksas << endl;
    cout << "rasto asmens info:" << endl;
    cout << asmenys[indeksas].GetVardas() << ", ";
    cout << asmenys[indeksas].GetPavarde() << ", ";
    cout << asmenys[indeksas].GetMiestas() << ".";
  }
  else if(kiekRasta > 1){
    string pavarde;
    cout << "Patikslinkite pavarde: ";
    cin >> pavarde;
cout << "IVEDET PAVARDE:" << pavarde << endl;
    int count = 0;
    vector<int> temp;

    for (int i = 0; i < asmenys.size(); ++i) {
      for (int it: rastiAsmenys){
        if(pavarde == asmenys[it].GetPavarde()){
          count++;
          temp.emplace_back(it);
        }
      }
    }

    if(count == 0){
      cout<< " nepavyko rasti:" << endl;
    }
    if(count == 1){
      int ind = temp[0];
      cout << "rastas indeksas toks: " << ind << endl;
      cout << "rasto asmens info:" << endl;
      cout << asmenys[ind].GetVardas() << ", ";
      cout << asmenys[ind].GetPavarde() << ", ";
      cout << asmenys[ind].GetMiestas() << ".";
    }else if(count > 1){
      string miestas;
      cout << "Patikslinkite miesta: ";
      cin >> miestas;

      cout << "IVEDET MIESTA:" << miestas << endl;

      int tempTEMPindex = 0;
      int rez;


      for (int i = 0; i < asmenys.size(); ++i) {
        for (int it: temp){
          if(miestas == asmenys[it].GetMiestas()){
            cout << "rastas indeksas toks: " << it << endl;
            cout << "rasto asmens info:" << endl;
            cout << asmenys[it].GetVardas() << ", ";
            cout << asmenys[it].GetPavarde() << ", ";
            cout << asmenys[it].GetMiestas() << ".";
            //count++;
            //temp.emplace_back(it);
            tempTEMPindex++;
             rez = it;
          }
        }
      }

      if(tempTEMPindex > 1){
        cout << "SEKMINGAI RASTAS:" << endl;
        cout << asmenys[rez].GetVardas() << " ," << asmenys[rez].GetPavarde() << ", "
             << asmenys[rez].GetMiestas() << endl;
      }
    }



  }










}

Paieska::Paieska() {
  asmenys.emplace_back(Asmuo("Petras", "Petraitis", "Vilnius"));
  asmenys.emplace_back(Asmuo("Petras", "Jonaitis", "Siauliai"));
  asmenys.emplace_back(Asmuo("Ona", "Onaitiene", "Plunge"));
  asmenys.emplace_back(Asmuo("Jonas", "Jonaitis", "Kaunas"));
  asmenys.emplace_back(Asmuo("Barbora", "Radvilaite", "Klaipeda"));
  asmenys.emplace_back(Asmuo("Petras", "Petraitis", "Panevezys"));
}
