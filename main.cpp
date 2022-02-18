#include <iostream>
#include <string>
using namespace std;

int main() {
  string text;
  cout<<"Введите текст: ";
  getline(cin, text);
  for(int i=0; i<text.length(); i++){
    if((text[i] == ' ')||(text[i]  >= 'A' && text[i] <= 'Z')||(text[i] >= 'a' && text[i] <= 'z')||()){
    }
    else{
      cout<<text[i];
    }
  }
  return 0;
}