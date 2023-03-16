#include <iostream>
#include <string>

using namespace std;

//Funcionario 
class Funcionario {
  private:
    string nome, snome;
    float salario;

  public:
    //Construtor
    Funcionario();

    //Set
    void setNome(string nome);
    void setSnome(string snome);
    void setSalario(float salario);

    //Get
    string getNome();
    string getSnome();
    float getSalario();

    //Other methods
    float getSalarioAnual();
    void aumentaSalario(float pct);
};

Funcionario::Funcionario() {
  nome = "Vazio";
  snome = "Vazio";
  salario = 0;
}

//Set Methods
void Funcionario::setNome(string nome) {
  this->nome = nome;
}

void Funcionario::setSnome(string snome) {
  this->snome = snome;
}

void Funcionario::setSalario(float salario) {
  if(salario < 0) {
    this->salario = 0;
  }else {
    this->salario = salario;
  } 
}

//Get methods
string Funcionario::getNome() {
  return nome;
}

string Funcionario::getSnome() {
  return snome;
}

float Funcionario::getSalario() {
  return salario;
}

//Others methods
float Funcionario::getSalarioAnual() {
  return salario*12;
}

void Funcionario::aumentaSalario(float pct) {
  salario = salario*(1 + pct);
}

//Funcionario END


int main()
{
    int n = 0;
    
    //Variáveis para objeto
    string nome, snome;
    float salario = 0;
    
    cin >> n;
    
    Funcionario func[n];
    
    for(int i = 0; i < n; i++) {
        //Cleaning buffer
        cin.ignore();
        
        //Nome
        getline(cin, nome);
        func[i].setNome(nome);
        //Sobrenome
        getline(cin, snome);
        func[i].setSnome(snome);
        //Salario
        cin >> salario;
        func[i].setSalario(salario);
    }

    for(int i = 0; i < n; i++) {
      //Displays information about employees
      cout << func[i].getNome() << " " << func[i].getSnome() << " - " << func[i].getSalario() << " - " << func[i].getSalarioAnual() << endl;
      //increasing employee salary
      func[i].aumentaSalario(0.1);
      //Displays new salary
      cout << func[i].getSalarioAnual() << endl;
    }
    
    return 0;
}
