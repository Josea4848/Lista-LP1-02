#include <iostream>
#include <string>

using namespace std;

//Class Despesa
class Despesa {
  private:
    string nome;
    float preco;
    string tipoDeGasto;

  public:
    //Standard Constructor
    Despesa();
    Despesa(string nome, float preco, string tipoDeGasto);

    //Sets 
    void setNome(string nome);
    void setPreco(float preco);
    void setTipoDeGasto(string tipoDeGasto);

    //Gets
    string getNome();
    float getPreco();
    string getTipo();
};

//Construtor padrão
Despesa::Despesa() {
  nome = "";
  preco = 0.0;
  tipoDeGasto = "";
}

Despesa::Despesa(string nome, float preco, string tipoDeGasto) {
  setNome(nome);
  setPreco(preco);
  setTipoDeGasto(tipoDeGasto);
}

//Sets 
void Despesa::setNome(string nome) {
  this->nome = nome;
}

void Despesa::setPreco(float preco) {
  this->preco = preco;
}

void Despesa::setTipoDeGasto(string tipoDeGasto) {
  this->tipoDeGasto = tipoDeGasto;
}

//Gets
string Despesa::getNome() {
  return nome;
}

float Despesa::getPreco() {
  return preco;
}

string Despesa::getTipo() {
  return tipoDeGasto;
}

//Despesa END

//Class ControleDeGastos

class ControledeGastos {
  private:
    Despesa despesas[100];
  public:
    //Standard constructor
    ControledeGastos();

    //Set
    void setDespesa(Despesa d, int pos);

    //Get
    Despesa getDespesa(int pos);

    //Others methods
    float calculaTotalDeDespesas();
    float calculaTotalDeDespesas(string tipo);
    bool existeDespesaDoTipo(string tipo);

};

ControledeGastos::ControledeGastos() {
  
}

void ControledeGastos::setDespesa(Despesa d, int pos) {
  //Nome
  despesas[pos].setNome(d.getNome());
  //Preco
  despesas[pos].setPreco(d.getPreco());
  //Tipo
  despesas[pos].setTipoDeGasto(d.getTipo());
}

Despesa ControledeGastos::getDespesa(int pos) {
  return despesas[pos];
}

float ControledeGastos::calculaTotalDeDespesas() {
  float total = 0;
  
  for(int i = 0; i < 100; i++) {
    total += despesas[i].getPreco();
  }

  return total;
}

float ControledeGastos::calculaTotalDeDespesas(string tipo) {
  float total = 0;

  for(int i = 0; i < 100; i++) {
    if(despesas[i].getTipo() == tipo) {
      total += despesas[i].getPreco();
    }
  }

  return total;
}

bool ControledeGastos::existeDespesaDoTipo(string tipo) {
  for(int i = 0; i < 100; i++) {
    if(despesas[i].getTipo() == tipo) {
      return true;
    }
  }

  //Caso não seja encontrada
  return false;
}

//Class ControleDeGastos END

int main() {
  int n = 0;

  //Variáveis para os objetos
  string nome, tipo;
  float preco;

  cin >> n;
  cin.ignore();


  ControledeGastos gastos;

  for(int i = 0; i < n; i++) {
    //Limpando BUFFER

    //Nome
    getline(cin, nome);
    //Preço
    cin >> preco;
    //Limpando BUFFER
    cin.ignore();
    //Tipo
    getline(cin, tipo);

    //Criando objeto
    gastos.setDespesa(Despesa(nome, preco, tipo), i);
  }  

  //Tipo 
  getline(cin, tipo);

  if(gastos.existeDespesaDoTipo(tipo)) {
    for(int i = 0; i < n; i++) {
      if(gastos.getDespesa(i).getTipo() == tipo) {
        cout << gastos.getDespesa(i).getNome() << ", R$ " << gastos.getDespesa(i).getPreco() << endl;
      }
    }
  } else {
    cout << "Nenhuma despesa do tipo especificado\n";
  }

  cout << "Total: " << gastos.calculaTotalDeDespesas(tipo) << "/" << gastos.calculaTotalDeDespesas() << endl;

  return 0;
}