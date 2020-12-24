#include <iostream>
#include <map>
#include <vector>
#include <stdlib.h>

using namespace std;

string letters = "abcdefghijklmnopqrstuvwxyz";
vector<char> alphabet;
int key, option;
string word;
string result = "";

int main (){
  cout << "\033[1;31m"
   << "     }---------------------------------{\n" 
   << "}-------------\033[32m CAESAR ENCRYPTOR X\033[31m --------------{\n"
   << "     }---------------------------------{"       
   << "\n           Made By Trippingcarpet\n\n"     
   <<  "\033[0m\n";
  cout << "ENTER OPTION\n";
  cout << "[1]Encrypt Word\n";
  cout << "[2]Decrypt Word\n";
  cout << "[~]Enter option: ";cin>>option;cout << endl;
  cout << "[~]Enter WORD & Key: ";
  cin >> word >> key;
  cout << "\n";
  
  for(char k : letters){
    alphabet.push_back(k);
  }
  int index;
  for (char k : word){
    for (int i = 0; i < alphabet.size(); i++){
      if(tolower(k) == alphabet[i]){
        index = i;
      }
    }
    if (index + key >= alphabet.size()){
      cout << "\033[1;31m[-]KEY IS BIG!\033[0m\n";
      exit(0);
    }
  }
  if(option == 1)
  {
  for(char z : word){
    for(int i = 0; i < alphabet.size();i++){
        if(tolower(z) == alphabet[i]){
          result += alphabet[i+key];
        }
      }
    }
  }
  else if(option == 2){
  for(char z : word){
    for(int i = 0; i < alphabet.size();i++){
        if(tolower(z) == alphabet[i]){
          result += alphabet[i-key];
        }
      }
    }    
  }
  else{
    cout << "\033[1;31m[-]NO OPTION\033[0m\n";
  }
  cout << "\033[32m[+]Output: " << result << "\033[32m" << endl;
  return 0;
}
