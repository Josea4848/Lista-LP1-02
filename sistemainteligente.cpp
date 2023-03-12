#include <iostream>
#include <string>

using namespace std;

//Structs for birds
typedef struct ave{
  string especie;
  string id; 
} bird;


int main() {
  //Vector containing the group of birds
  bird birds[10] = {
    {"coruja", "01011"},
    {"pardal", "00010"},
    {"galinha", "00110"},
    {"ema", "01000"},    
    {"falcão", "01010"},
    {"pato", "10010"},
    {"pinguim", "11000"},
    {"gaivota", "11010"},
    {"garça", "11011"},
    {"avestruz", "00000"}
    };
  char subId;
  string idInput;
  short unsigned int k = 0;

  for(int i = 0; i < 5; i++) {
    //Get subId
    cin >> subId;
    //concatenates
    idInput += subId;
  }

  //This loop compares the input id with the vector of birds
  for(k = 0; k < 10; k++) {
    if(birds[k].id == idInput) {
      cout << birds[k].especie << endl;
    }
  }

  return 0;
}