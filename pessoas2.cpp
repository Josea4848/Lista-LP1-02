#include <iostream>
#include <string>

using namespace std;

//Pessoa
class Pessoa {
  private:
    int idade;
    string nome;
    string telefone;

  public:
    //Constructor
    Pessoa();

    void inputName(string nome);
    void inputDados(string nome, int idade, string telefone);

    //Get
    int getIdade();
    string getNome();
    string getTelefone();

    //Set
    void setIdade(int idade);
    void setNome(string nome);
    void setTelefone(string telefone);

    //Display
    void print();
};

//Constructor
Pessoa::Pessoa() {
  nome = "Vazio";
  telefone = "Vazio";
  idade = 0;
}

void Pessoa::inputDados(string nome, int idade, string telefone) {
  this->nome = nome;
  this->idade = idade;
  this->telefone = telefone;
}

void Pessoa::inputName(string nome) {
  this->nome = nome;
}

//Set
void Pessoa::setNome(string nome) {
  this->nome = nome;
}

void Pessoa::setTelefone(string telefone) {
  this->telefone = telefone;
}

void Pessoa::setIdade(int idade) {
  this->idade = idade;
}

//Get
string Pessoa::getNome() {
  return nome;
}

string Pessoa::getTelefone() {
  return telefone;
}

int Pessoa::getIdade() {
  return idade;
}

//Display
void Pessoa::print() {
  cout << nome << ", " << idade << ", " << telefone << endl;
}

//Pessoa END  


int main() {
  int n = 0;
  string pesquisa;
  bool existe = false;
  
  //Variáveis para objetos
  int idade = 0;
  string nome, telefone;

  //Número de pessoas
  cin >> n;
  cin.ignore();

  Pessoa pessoas[n];

  for (int i = 0; i < n; i++) {
    //Nome
    getline(cin, nome);
    //Idade
    cin >> idade;
    cin.ignore();
    //Telefone
    getline(cin, telefone);

    pessoas[i].inputDados(nome, idade, telefone);
  }

  getline(cin, pesquisa);

  for(int i = 0; i < n; i++) {
    if(pessoas[i].getNome().find(pesquisa, 0) != string::npos) {
      pessoas[i].print();
      existe = true;
    }
  }

  if(!existe) {
    cout << "Pessoa não encontrada\n";
  }

  return 0;
}