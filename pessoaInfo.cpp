#include <iostream>
#include <string>

#define SIZE 2

using namespace std;

//Class Pessoa
class Pessoa {
  public:
    string name, phone;
    int age;

    //Construct
    Pessoa(); 

    //Overview
    void displayPessoa();
};

Pessoa::Pessoa() {
  //Name
  getline(cin, name);
  //Age
  cin >> age;
  cin.ignore();
  //Phone
  getline(cin, phone);
}

void Pessoa::displayPessoa() {
  cout << name << ", " << age << ", " << phone << endl;
}
//Class Pessoa END

int main() {
  Pessoa pessoa1;
  Pessoa pessoa2;

  pessoa1.displayPessoa();
  pessoa2.displayPessoa();
  
  return 0;
}