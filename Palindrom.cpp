// Algorytm sprawdzajacy, czy dany napis jest palindromem
#include <bits/stdc++.h>
using namespace std;

bool Czy_Palindrom(string Napis){
  int Pocz = 0;
  int Kon = Napis.size() - 1;
  while(Pocz < Kon){
    if(Napis[i] != Napis[j]){
      return false;
    }
    i++;
    j--;
  }
  return true;
}
