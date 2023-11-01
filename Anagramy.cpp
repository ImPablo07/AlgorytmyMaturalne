// Algorytm sprawdzajacy, czy dane dwa slowa sa anagramami
#include <bits/stdc++.h>
using namespace std;

bool Czy_Anagramy(string Napis1, string Napis2){
  int Ile_Liter[26] = {};
  for(int i = 0; i < Napis1.size(); i++){
    Ile_Liter[Napis1[i] - 'a']++;
  }
  for(int i = 0; i < Napis2.size(); i++){
    Ile_Liter[Napis2[i] - 'a']--;
  }
  for(int i = 0; i < 26; i++){
    if(Ile_Liter[i] != 0){
      return false;
    }
  }
  return true;
}
