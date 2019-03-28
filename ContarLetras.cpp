#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
  string texto;
  getline(cin,texto);
  map<char,int> contador;
  for(int i = 0; i < texto.size(); i++){
    if(contador.find(texto[i]) == contador.end())
      contador.emplace(make_pair(texto[i],1));
    else
      contador[texto[i]] += 1;
  }
  for(auto letra: contador){
    cout << letra.first << ":"<<letra.second<<endl;
  }
  return 0;
}
