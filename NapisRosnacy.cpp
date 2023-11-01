// Algorytm sprawdzajacy, czy napis jest rosnacy, tzn. litery w napisie sa kolejno wyzej w kolejnosci leksykograficznej
#include <bits/stdc++.h>
using namespace std;

bool Czy_Rosnacy(string Napis){
  for(int i = 1; i < Napis.size(); i++){
    if(Napis[i] >= Napis[i - 1]){
      return false;
    }
  }
  return true;
}
